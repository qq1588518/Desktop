//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYGPUFilter.h"

@interface KSYGrindSimpleFilter : KSYGPUFilter
{
    int paramsUniform;
    int singleStepOffsetUniform;
    float scaleLumanceUniform;
    float _scaleLumance;
    struct GPUVector4 _params;
    struct CGPoint _singleStepOffset;
}

@property(nonatomic) float scaleLumance; // @synthesize scaleLumance=_scaleLumance;
@property(nonatomic) struct CGPoint singleStepOffset; // @synthesize singleStepOffset=_singleStepOffset;
@property(nonatomic) struct GPUVector4 params; // @synthesize params=_params;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;
- (void)setTexelSize:(struct CGPoint)arg1;
- (void)setBeautylevel:(int)arg1;

@end

