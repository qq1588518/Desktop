//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState;

@interface MetalImageColorConversion : NSObject
{
    id <MTLComputePipelineState> k_yuv2rgb;
    unsigned long long _function;
}

@property(nonatomic) unsigned long long function; // @synthesize function=_function;
- (void).cxx_destruct;
- (void)generateBGROutputTexture:(id)arg1 YPlane:(id)arg2 UVPlane:(id)arg3;
- (id)functionNameWithType:(unsigned long long)arg1;
- (id)init;

@end
