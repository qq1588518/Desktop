//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTNAsyncBase64Decoder;

@interface NSTNAssetPrefetcher : NSObject
{
    NSTNAsyncBase64Decoder *_decoder;
    NSMutableDictionary *_urlsToPrefetch;
}

@property(retain, nonatomic) NSMutableDictionary *urlsToPrefetch; // @synthesize urlsToPrefetch=_urlsToPrefetch;
@property(retain, nonatomic) NSTNAsyncBase64Decoder *decoder; // @synthesize decoder=_decoder;
- (void).cxx_destruct;
- (void)decodeAndSave:(id)arg1;
- (void)prefetchBase64:(id)arg1 enabled:(_Bool)arg2 className:(id)arg3 nibName:(id)arg4;
- (void)prefetchURL:(id)arg1 enabled:(_Bool)arg2 className:(id)arg3 nibName:(id)arg4;
- (void)prefetchActionSet:(id)arg1 className:(id)arg2;
- (void)prefetchAssets:(id)arg1;

@end
