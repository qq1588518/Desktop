//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/NSCacheDelegate-Protocol.h>

@class NSCache, NSString;

@interface GrowingImageCache : NSObject <NSCacheDelegate>
{
    NSString *_path;
    NSCache *_memCache;
}

@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)clearAllImage;
- (void)loadImageForKey:(id)arg1 onFinish:(CDUnknownBlockType)arg2;
- (void)saveImage:(id)arg1 forKey:(id)arg2;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)initWithDirPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

