#include "Rendering/RDGRendeingExample.h"
#include "Engine/TextureRenderTarget2D.h"

#include "PipelineStateCache.h"

#include "GlobalShader.h"
#include "RenderGraphUtils.h"
#include "RenderTargetPool.h"
#include "RenderGraphResources.h"
#include "RHIStaticStates.h"
#include "ShaderParameterUtils.h"
#include "PixelShaderUtils.h"

#if !UE_BUILD_SHIPPING
#pragma optimize( "", off )
#endif

namespace RDGRenderingExample
{
	/*
	 * Vertex Resource
	 */
	TGlobalResource<FTextureVertexDeclaration> GTextureVertexDeclaration;
	TGlobalResource<FRectangleVertexBuffer> GRectangleVertexBuffer;
	TGlobalResource<FRectangleIndexBuffer> GRectangleIndexBuffer;

	/*
	 * Shader
	 */
	class FSimpleRDGComputeShader : public FGlobalShader
	{
	public:
		//注册ComputeShader
		DECLARE_GLOBAL_SHADER(FSimpleRDGComputeShader);
		SHADER_USE_PARAMETER_STRUCT(FSimpleRDGComputeShader, FGlobalShader);

		//声明参数结构体
		BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
			SHADER_PARAMETER(FVector4f, SectionPlane)
			SHADER_PARAMETER_SRV(Buffer<FVector>, VertexBuffer)
			SHADER_PARAMETER_SRV(Buffer<uint32>, IndexBuffer)
			SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<FVector>, CutSegmentsA)
			SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<FVector>, CutSegmentsB)
			SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<bool>, CutSegmentsValidation)
			END_SHADER_PARAMETER_STRUCT()

		//确定编译平台是否支持CS
			static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
		{
			return RHISupportsComputeShaders(Parameters.Platform);
		}

		//设置CS Shader中所需的宏
		static inline void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment) {
			FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);

			OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_X"), 1);
			OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_Y"), 1);
			OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_Z"), 1);
		}
	};

	class FSimpleRDGGlobalShader : public FGlobalShader
	{
	public:
		SHADER_USE_PARAMETER_STRUCT(FSimpleRDGGlobalShader, FGlobalShader);

		BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
			SHADER_PARAMETER_STRUCT_REF(FSimpleUniformStructParameters, SimpleUniformStruct)
			SHADER_PARAMETER_TEXTURE(Texture2D, TextureVal)
			SHADER_PARAMETER_SAMPLER(SamplerState, TextureSampler)
			SHADER_PARAMETER(FVector4f, SimpleColor)
			RENDER_TARGET_BINDING_SLOTS()
			END_SHADER_PARAMETER_STRUCT()

			static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
		{
			return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::ES3_1);
		}
	};

	class FSimpleRDGVertexShader : public FSimpleRDGGlobalShader
	{
	public:
		DECLARE_GLOBAL_SHADER(FSimpleRDGVertexShader);

		FSimpleRDGVertexShader() {}

		FSimpleRDGVertexShader(const ShaderMetaType::CompiledShaderInitializerType& Initializer) : FSimpleRDGGlobalShader(Initializer) {}
	};

	class FSimpleRDGPixelShader : public FSimpleRDGGlobalShader
	{
	public:
		DECLARE_GLOBAL_SHADER(FSimpleRDGPixelShader);

		FSimpleRDGPixelShader() {}

		FSimpleRDGPixelShader(const ShaderMetaType::CompiledShaderInitializerType& Initializer) : FSimpleRDGGlobalShader(Initializer) {}
	};

	IMPLEMENT_GLOBAL_SHADER_PARAMETER_STRUCT(FSimpleUniformStructParameters, "SimpleUniformStruct");

	//IMPLEMENT_GLOBAL_SHADER(FSimpleRDGComputeShader, "/ShaderTest/Private/SimpleComputeShader.usf", "MainCS", SF_Compute);
	IMPLEMENT_GLOBAL_SHADER(FSimpleRDGComputeShader, "/ShaderTest/Private/MeshPlaneIntersection.usf", "MainCS", SF_Compute);
	IMPLEMENT_GLOBAL_SHADER(FSimpleRDGVertexShader, "/ShaderTest/Private/SimplePixelShader.usf", "MainVS", SF_Vertex);
	IMPLEMENT_GLOBAL_SHADER(FSimpleRDGPixelShader, "/ShaderTest/Private/SimplePixelShader.usf", "MainPS", SF_Pixel);

	/*
	 * Render Function
	 */
	void RDGCompute(FRHICommandListImmediate& RHIImmCmdList, FTexture2DRHIRef RenderTargetRHI, FSimpleShaderParameter InParameter)
	{
		check(IsInRenderingThread());

		//Create RenderTargetDesc
		const FRDGTextureDesc& RenderTargetDesc = FRDGTextureDesc::Create2D(RenderTargetRHI->GetSizeXY(), RenderTargetRHI->GetFormat(), FClearValueBinding::Black, TexCreate_RenderTargetable | TexCreate_ShaderResource | TexCreate_UAV);

		TRefCountPtr<IPooledRenderTarget> PooledRenderTarget;

		//RDG Begin
		FRDGBuilder GraphBuilder(RHIImmCmdList);
		FRDGTextureRef RDGRenderTarget = GraphBuilder.CreateTexture(RenderTargetDesc, TEXT("RDGRenderTarget"));

		//Setup Parameters
		FSimpleUniformStructParameters StructParameters;
		StructParameters.Color1 = InParameter.Color1;
		StructParameters.Color2 = InParameter.Color2;
		StructParameters.Color3 = InParameter.Color3;
		StructParameters.Color4 = InParameter.Color4;
		StructParameters.ColorIndex = InParameter.ColorIndex;

		FSimpleRDGComputeShader::FParameters* Parameters = GraphBuilder.AllocParameters<FSimpleRDGComputeShader::FParameters>();
		FRDGTextureUAVDesc UAVDesc(RDGRenderTarget);
		//Parameters->SimpleUniformStruct = TUniformBufferRef<FSimpleUniformStructParameters>::CreateUniformBufferImmediate(StructParameters, UniformBuffer_SingleFrame);
		//Parameters->OutTexture = GraphBuilder.CreateUAV(UAVDesc);

		//Get ComputeShader From GlobalShaderMap
		const ERHIFeatureLevel::Type FeatureLevel = GMaxRHIFeatureLevel; //ERHIFeatureLevel::SM5
		FGlobalShaderMap* GlobalShaderMap = GetGlobalShaderMap(FeatureLevel);
		TShaderMapRef<FSimpleRDGComputeShader> ComputeShader(GlobalShaderMap);

		//Compute Thread Group Count
		FIntVector ThreadGroupCount(
			RenderTargetRHI->GetSizeX() / 32,
			RenderTargetRHI->GetSizeY() / 32,
			1);

		//ValidateShaderParameters(PixelShader, Parameters);
		//ClearUnusedGraphResources(PixelShader, Parameters);

		GraphBuilder.AddPass(
			RDG_EVENT_NAME("RDGCompute"),
			Parameters,
			ERDGPassFlags::Compute,
			[Parameters, ComputeShader, ThreadGroupCount](FRHICommandList& RHICmdList) {
				FComputeShaderUtils::Dispatch(RHICmdList, ComputeShader, *Parameters, ThreadGroupCount);
			});

		GraphBuilder.QueueTextureExtraction(RDGRenderTarget, &PooledRenderTarget);
		GraphBuilder.Execute();

		//Copy Result To RenderTarget Asset
		RHIImmCmdList.CopyTexture(PooledRenderTarget->GetRenderTargetItem().ShaderResourceTexture, RenderTargetRHI->GetTexture2D(), FRHICopyTextureInfo());
		//RHIImmCmdList.CopyToResolveTarget(PooledRenderTarget->GetRenderTargetItem().ShaderResourceTexture, RenderTargetRHI->GetTexture2D(), FResolveParams());
	}

	TArray<TTuple<FVector, FVector>> RDGRenderingExample::FMeshPlaneIntersection::PerformIntersection(FPositionVertexBuffer*& vertexBuffer, FRawStaticIndexBuffer*& indexBuffer, FPlane sectionPlane)
	{
		FRenderCommandFence Fence;
		ENQUEUE_RENDER_COMMAND(PerformGPUIntersection)
			([this, vertexBuffer, indexBuffer, sectionPlane](
				FRHICommandListImmediate& rhiCmdList) { this->_runComputeShader_RenderThread(rhiCmdList, vertexBuffer, indexBuffer, sectionPlane); });
		Fence.BeginFence();
		Fence.Wait();
		TArray <TTuple<FVector, FVector>> OutSegments;
		OutSegments.Init(TTuple<FVector, FVector>(), _outSegmentsA.Num());
		for (size_t i = 0; i < OutSegments.Num(); i++)
		{
			OutSegments[i] = MakeTuple(_outSegmentsA[i], _outSegmentsB[i]);
		}

		return OutSegments;
	}

	void RDGRenderingExample::FMeshPlaneIntersection::_runComputeShader_RenderThread(FRHICommandListImmediate& rhiCmdList, FPositionVertexBuffer* vertexBuffer, FRawStaticIndexBuffer* indexBuffer, FPlane sectionPlane)
	{
		FMemMark Mark(FMemStack::Get());
		FRDGBuilder graphBuilder(rhiCmdList);
		FSimpleRDGComputeShader::FParameters* PassParameters = graphBuilder.AllocParameters<FSimpleRDGComputeShader::FParameters>();

		PassParameters->SectionPlane.X = sectionPlane.X;
		PassParameters->SectionPlane.Y = sectionPlane.Y;
		PassParameters->SectionPlane.Z = sectionPlane.Z;
		PassParameters->SectionPlane.W = sectionPlane.W;

		PassParameters->VertexBuffer = vertexBuffer->GetSRV();
		PassParameters->IndexBuffer = rhiCmdList.CreateShaderResourceView(indexBuffer->IndexBufferRHI);

		uint32 outBufferSize = indexBuffer->GetNumIndices() / 3;

		_outSegmentsA.Empty();
		_outSegmentsA.Init(FVector(0, 0, 0), outBufferSize);
		auto rdgOutSegmentsA = CreateStructuredBuffer(graphBuilder, TEXT("CutSegmentsA"), sizeof(FVector), outBufferSize, _outSegmentsA.GetData(),
			sizeof(FVector) * outBufferSize, ERDGInitialDataFlags::None);
		auto uavOutSegmentsA = graphBuilder.CreateUAV(rdgOutSegmentsA);

		_outSegmentsB.Empty();
		_outSegmentsB.Init(FVector(0, 0, 0), outBufferSize);
		auto rdgOutSegmentsB = CreateStructuredBuffer(graphBuilder, TEXT("CutSegmentsB"), sizeof(FVector), outBufferSize, _outSegmentsB.GetData(),
			sizeof(FVector) * outBufferSize, ERDGInitialDataFlags::None);
		auto uavOutSegmentsB = graphBuilder.CreateUAV(rdgOutSegmentsB);

		_outSegmentsValidation.Empty();
		_outSegmentsValidation.Init(0, outBufferSize);
		auto rdgOutSegmentValidation = CreateStructuredBuffer(graphBuilder, TEXT("CutSegmentsValidation"), sizeof(int), outBufferSize, _outSegmentsValidation.GetData(),
			sizeof(int) * outBufferSize, ERDGInitialDataFlags::None);
		auto uavOutSegmentsValidation = graphBuilder.CreateUAV(rdgOutSegmentValidation);

		PassParameters->CutSegmentsA			= uavOutSegmentsA;
		PassParameters->CutSegmentsB			= uavOutSegmentsB;
		PassParameters->CutSegmentsValidation	= uavOutSegmentsValidation;

		TShaderMapRef<FSimpleRDGComputeShader> ComputeShader(GetGlobalShaderMap(GMaxRHIFeatureLevel));
		FIntVector GroupCounts = FIntVector(outBufferSize, 1, 1);


		FComputeShaderUtils::AddPass(graphBuilder, RDG_EVENT_NAME("MeshPlaneIntersection"), ComputeShader, PassParameters, GroupCounts);

		TRefCountPtr<FRDGPooledBuffer> pooled_verticiesA;
		graphBuilder.QueueBufferExtraction(rdgOutSegmentsA, &pooled_verticiesA, ERHIAccess::UAVCompute);

		TRefCountPtr<FRDGPooledBuffer> pooled_verticiesB;
		graphBuilder.QueueBufferExtraction(rdgOutSegmentsB, &pooled_verticiesB, ERHIAccess::UAVCompute);

		TRefCountPtr<FRDGPooledBuffer> pooled_verticiesValidation;
		graphBuilder.QueueBufferExtraction(rdgOutSegmentValidation, &pooled_verticiesValidation, ERHIAccess::UAVCompute);

		graphBuilder.Execute();

		RDGRenderingExample::FMeshPlaneIntersection::_copyBuffer(rhiCmdList, pooled_verticiesA, _outSegmentsA.GetData(), outBufferSize);
		RDGRenderingExample::FMeshPlaneIntersection::_copyBuffer(rhiCmdList, pooled_verticiesB, _outSegmentsB.GetData(), outBufferSize);
		RDGRenderingExample::FMeshPlaneIntersection::_copyBuffer(rhiCmdList, pooled_verticiesValidation, _outSegmentsValidation.GetData(), outBufferSize);

	}


	void RDGRenderingExample::FMeshPlaneIntersection::_copyBuffer(FRHICommandListImmediate& rhiCmdList, TRefCountPtr<FRDGPooledBuffer>& source, void* dest, SIZE_T size)
	{
		void* psource = rhiCmdList.LockBuffer(source->GetStructuredBufferRHI(), 0, size, RLM_ReadOnly);
		FMemory::Memcpy(dest, psource, size);
		rhiCmdList.UnlockBuffer(source->GetStructuredBufferRHI());
	}

	void RDGDraw(FRHICommandListImmediate& RHIImmCmdList, FTexture2DRHIRef RenderTargetRHI, FSimpleShaderParameter InParameter, const FLinearColor InColor, FTexture2DRHIRef InTexture)
	{
		check(IsInRenderingThread());

		//Create PooledRenderTarget
		const FRDGTextureDesc& RenderTargetDesc = FRDGTextureDesc::Create2D(RenderTargetRHI->GetSizeXY(), RenderTargetRHI->GetFormat(), FClearValueBinding::Black, TexCreate_RenderTargetable | TexCreate_ShaderResource | TexCreate_UAV);
		TRefCountPtr<IPooledRenderTarget> PooledRenderTarget;

		//RDG Begin
		FRDGBuilder GraphBuilder(RHIImmCmdList);
		FRDGTextureRef RDGRenderTarget = GraphBuilder.CreateTexture(RenderTargetDesc, TEXT("RDGRenderTarget"));

		//Setup Parameters
		FSimpleUniformStructParameters StructParameters;
		StructParameters.Color1 = InParameter.Color1;
		StructParameters.Color2 = InParameter.Color2;
		StructParameters.Color3 = InParameter.Color3;
		StructParameters.Color4 = InParameter.Color4;
		StructParameters.ColorIndex = InParameter.ColorIndex;

		FSimpleRDGPixelShader::FParameters* Parameters = GraphBuilder.AllocParameters<FSimpleRDGPixelShader::FParameters>();
		Parameters->TextureVal = InTexture;
		Parameters->TextureSampler = TStaticSamplerState<SF_Trilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
		Parameters->SimpleColor = InColor;
		Parameters->SimpleUniformStruct = TUniformBufferRef<FSimpleUniformStructParameters>::CreateUniformBufferImmediate(StructParameters, UniformBuffer_SingleFrame);
		Parameters->RenderTargets[0] = FRenderTargetBinding(RDGRenderTarget, ERenderTargetLoadAction::ENoAction);

		const ERHIFeatureLevel::Type FeatureLevel = GMaxRHIFeatureLevel; //ERHIFeatureLevel::SM5
		FGlobalShaderMap* GlobalShaderMap = GetGlobalShaderMap(FeatureLevel);
		TShaderMapRef<FSimpleRDGVertexShader> VertexShader(GlobalShaderMap);
		TShaderMapRef<FSimpleRDGPixelShader> PixelShader(GlobalShaderMap);

		//ValidateShaderParameters(PixelShader, Parameters);
		//ClearUnusedGraphResources(PixelShader, Parameters);

		GraphBuilder.AddPass(
			RDG_EVENT_NAME("RDGDraw"),
			Parameters,
			ERDGPassFlags::Raster,
			[Parameters, VertexShader, PixelShader, GlobalShaderMap](FRHICommandList& RHICmdList) {
				FRHITexture2D* RT = Parameters->RenderTargets[0].GetTexture()->GetRHI()->GetTexture2D();
				RHICmdList.SetViewport(0, 0, 0.0f, RT->GetSizeX(), RT->GetSizeY(), 1.0f);

				FGraphicsPipelineStateInitializer GraphicsPSOInit;
				RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
				GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
				GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
				GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
				GraphicsPSOInit.PrimitiveType = PT_TriangleList;
				GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GTextureVertexDeclaration.VertexDeclarationRHI;

				GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
				GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
				SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit, 0);
				RHICmdList.SetStencilRef(0);
				SetShaderParameters(RHICmdList, PixelShader, PixelShader.GetPixelShader(), *Parameters);

				RHICmdList.SetStreamSource(0, GRectangleVertexBuffer.VertexBufferRHI, 0);
				RHICmdList.DrawIndexedPrimitive(
					GRectangleIndexBuffer.IndexBufferRHI,
					/*BaseVertexIndex=*/0,
					/*MinIndex=*/0,
					/*NumVertices=*/4,
					/*StartIndex=*/0,
					/*NumPrimitives=*/2,
					/*NumInstances=*/1);
			});

		GraphBuilder.QueueTextureExtraction(RDGRenderTarget, &PooledRenderTarget);
		GraphBuilder.Execute();

		//Copy Result To RenderTarget Asset
		RHIImmCmdList.CopyTexture(PooledRenderTarget->GetRenderTargetItem().ShaderResourceTexture, RenderTargetRHI->GetTexture2D(), FRHICopyTextureInfo());
	}
} // namespace RDGRenderingExample

void URDGRenderingExampleBlueprintLibrary::UseRDGComput(const UObject* WorldContextObject, UTextureRenderTarget2D* OutputRenderTarget, FSimpleShaderParameter Parameter)
{
	check(IsInGameThread());

	FTexture2DRHIRef RenderTargetRHI = OutputRenderTarget->GameThread_GetRenderTargetResource()->GetRenderTargetTexture();

	ENQUEUE_RENDER_COMMAND(CaptureCommand)
		(
			[RenderTargetRHI, Parameter](FRHICommandListImmediate& RHICmdList) {
				RDGRenderingExample::RDGCompute(RHICmdList, RenderTargetRHI, Parameter);
			});
}

void URDGRenderingExampleBlueprintLibrary::UseRDGDraw(const UObject* WorldContextObject, UTextureRenderTarget2D* OutputRenderTarget, FSimpleShaderParameter Parameter, FLinearColor InColor, UTexture2D* InTexture)
{
	check(IsInGameThread());

	FTexture2DRHIRef RenderTargetRHI = OutputRenderTarget->GameThread_GetRenderTargetResource()->GetRenderTargetTexture();
	FTexture2DRHIRef InTextureRHI = InTexture->GetResource()->TextureRHI->GetTexture2D();

	ENQUEUE_RENDER_COMMAND(CaptureCommand)
		(
			[RenderTargetRHI, Parameter, InColor, InTextureRHI](FRHICommandListImmediate& RHICmdList) {
				RDGRenderingExample::RDGDraw(RHICmdList, RenderTargetRHI, Parameter, InColor, InTextureRHI);
			});
}

void URDGRenderingExampleBlueprintLibrary::UseRDGSection(const UObject* WorldContextObject, TArray<FVector>& OutputSegAPoint, TArray<FVector>& OutputSegBPoint, UStaticMesh* StaticMesh,  FPlane sectionPlane)
{

	auto cutter = new (RDGRenderingExample::FMeshPlaneIntersection);

	FPositionVertexBuffer* InVertexBuffer = &StaticMesh->GetRenderData()->LODResources[0].VertexBuffers.PositionVertexBuffer;
	FRawStaticIndexBuffer* IndexBuffer = &StaticMesh->GetRenderData()->LODResources[0].IndexBuffer;
	TArray<TTuple<FVector, FVector>> segments = cutter->PerformIntersection(InVertexBuffer, IndexBuffer, sectionPlane);
	OutputSegAPoint.Init(FVector(),segments.Num());
	OutputSegBPoint.Init(FVector(),segments.Num());

	for (size_t i = 0; i < segments.Num(); i++)
	{
		OutputSegAPoint[i] = segments[i].Get<0>();
		OutputSegBPoint[i] = segments[i].Get<1>();
	}

	delete (cutter);
}

#if !UE_BUILD_SHIPPING
#pragma optimize( "", on )
#endif