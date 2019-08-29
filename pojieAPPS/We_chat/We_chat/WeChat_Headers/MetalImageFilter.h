//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MetalImageOutput.h"

#import "MetalImageInput-Protocol.h"

@class MTLRenderPassDescriptor, MetalImageTexture, NSMutableArray, NSString;
@protocol MTLBuffer, MTLDepthStencilState, MTLFunction, MTLRenderPipelineState;

@interface MetalImageFilter : MetalImageOutput <MetalImageInput>
{
    MetalImageTexture *firstInputTexture;
    CDStruct_9f9bca67 firstInputParameter;
    id <MTLFunction> _vertexFunction;
    id <MTLFunction> _fragmentFunction;
    id <MTLBuffer> _verticsBuffer;
    id <MTLBuffer> _coordBuffer;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLDepthStencilState> _depthStencilState;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    NSMutableArray *vertexBufferArray;
    NSMutableArray *fragmentBufferArray;
    NSMutableArray *vertexTextureArray;
    NSMutableArray *fragmentTextureArray;
    struct MTLUInt2 _outputImageSize;
    CDStruct_3ead2808 _bgClearColor;
}

@property(nonatomic) CDStruct_3ead2808 bgClearColor; // @synthesize bgClearColor=_bgClearColor;
@property(nonatomic) struct MTLUInt2 outputImageSize; // @synthesize outputImageSize=_outputImageSize;
- (void).cxx_destruct;
- (void)assembleRenderEncoder:(id)arg1;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)newTextureReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputTexture:(id)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const struct MTLFloat4 *)arg1 textureCoordinates:(const struct MTLFloat2 *)arg2;
- (void)updateTextureCoordinateBuffer:(id)arg1 withNewContents:(const struct MTLFloat2 *)arg2 size:(unsigned long long)arg3;
- (void)updateTextureVertexBuffer:(id)arg1 withNewContents:(const struct MTLFloat4 *)arg2 size:(unsigned long long)arg3;
- (unsigned long long)rotationForOutput;
- (struct MTLUInt2)textureSizeForOutput;
- (_Bool)prepareRenderPassDescriptor;
- (_Bool)prepareRenderDepthStencilState;
- (_Bool)prepareRenderPipeline;
- (void)createTextureCoordinateBuffer;
- (void)createTextureVertexBuffer;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2;
- (id)initWithVertexFunctionName:(id)arg1 fragmentFunctionName:(id)arg2;
- (id)initWithFragmentFunction:(id)arg1;
- (id)initWithFragmentFunctionName:(id)arg1;
- (id)init;
- (struct MTLFloat2)rotatedPoint:(struct MTLFloat2)arg1 forRotation:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
