//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageThreeInputFilter.h"

@interface TTImageSmoothProcessFilter3 : GPUImageThreeInputFilter
{
    int _alphaUniform;
    _Bool _enableVideoDenoise;
    float _alpha;
    float _blendSkinMask;
}

@property _Bool enableVideoDenoise; // @synthesize enableVideoDenoise=_enableVideoDenoise;
@property(nonatomic) float blendSkinMask; // @synthesize blendSkinMask=_blendSkinMask;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
- (id)init;

@end
