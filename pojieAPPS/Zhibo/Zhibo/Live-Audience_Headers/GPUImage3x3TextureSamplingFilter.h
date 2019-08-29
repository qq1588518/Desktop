//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImage3x3TextureSamplingFilter : GPUImageFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    double texelWidth;
    double texelHeight;
    _Bool hasOverriddenImageSizeFactor;
    double _texelWidth;
    double _texelHeight;
}

@property(nonatomic) double texelHeight; // @synthesize texelHeight=_texelHeight;
@property(nonatomic) double texelWidth; // @synthesize texelWidth=_texelWidth;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;

@end

