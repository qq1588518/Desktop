//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class NSMutableDictionary;

@interface FSVideoEffectShaderFilter : GPUImageFilter
{
    NSMutableDictionary *_uniformSlot;
}

@property(retain, nonatomic) NSMutableDictionary *uniformSlot; // @synthesize uniformSlot=_uniformSlot;
- (void).cxx_destruct;
- (void)setValue:(double)arg1 forUiform:(id)arg2;
- (void)loadUniforms:(id)arg1;

@end
