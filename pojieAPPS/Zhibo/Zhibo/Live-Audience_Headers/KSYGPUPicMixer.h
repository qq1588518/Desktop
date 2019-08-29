//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class GPUImageFramebuffer, NSMutableArray;

@interface KSYGPUPicMixer : GPUImageFilter
{
    NSMutableArray *inputFBs;
    NSMutableArray *picCfg;
    int alphaUniform;
    GPUImageFramebuffer *_canvasFB;
    id _nsNull;
    _Bool _clearCanvasBeforeDraw;
    unsigned long long _masterLayer;
}

@property(nonatomic) _Bool clearCanvasBeforeDraw; // @synthesize clearCanvasBeforeDraw=_clearCanvasBeforeDraw;
@property(nonatomic) unsigned long long masterLayer; // @synthesize masterLayer=_masterLayer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mixerRender;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)clearPicOfLayer:(long long)arg1;
- (int)getPicRotationOfLayer:(long long)arg1;
- (void)setPicRotation:(int)arg1 ofLayer:(long long)arg2;
- (double)getPicAlphaOfLayer:(long long)arg1;
- (void)setPicAlpha:(double)arg1 ofLayer:(long long)arg2;
- (struct CGRect)getPicRectOfLayer:(long long)arg1;
- (void)setPicRect:(struct CGRect)arg1 ofLayer:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)appendInputFB:(id)arg1;
- (long long)nextAvailableTextureIndex;
- (id)initWithOutputSize:(struct CGSize)arg1;
- (id)init;

@end

