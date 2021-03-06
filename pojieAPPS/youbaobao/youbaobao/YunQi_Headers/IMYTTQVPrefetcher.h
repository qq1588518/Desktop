//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RACCompoundDisposable;

@interface IMYTTQVPrefetcher : NSObject
{
    RACCompoundDisposable *_feedsDisposable;
    RACCompoundDisposable *_newsDisposable;
}

+ (id)shareInstance;
@property(retain) RACCompoundDisposable *newsDisposable; // @synthesize newsDisposable=_newsDisposable;
@property(retain) RACCompoundDisposable *feedsDisposable; // @synthesize feedsDisposable=_feedsDisposable;
- (void).cxx_destruct;
- (void)aysnPrefectchVideoDetail:(unsigned long long)arg1;
- (id)prefetchVideoDetail:(unsigned long long)arg1;
- (void)cancelPrefetchNews;
- (void)cancelPrefetchDetail;
- (void)cancelPrefetchFeedsImages;
- (void)prefetchFeedsImages:(id)arg1;
- (void)realPrefetchNews:(id)arg1;
- (void)prefetchNews:(id)arg1;
- (id)init;

@end

