//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMShareObject.h"

@class NSString;

@interface UMShareVideoObject : UMShareObject
{
    NSString *_videoUrl;
    NSString *_videoLowBandUrl;
    NSString *_videoStreamUrl;
    NSString *_videoLowBandStreamUrl;
}

+ (id)shareObjectWithTitle:(id)arg1 descr:(id)arg2 thumImage:(id)arg3;
@property(retain, nonatomic) NSString *videoLowBandStreamUrl; // @synthesize videoLowBandStreamUrl=_videoLowBandStreamUrl;
@property(retain, nonatomic) NSString *videoStreamUrl; // @synthesize videoStreamUrl=_videoStreamUrl;
@property(retain, nonatomic) NSString *videoLowBandUrl; // @synthesize videoLowBandUrl=_videoLowBandUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
- (void).cxx_destruct;

@end

