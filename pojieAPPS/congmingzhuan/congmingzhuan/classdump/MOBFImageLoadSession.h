//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURL;
@protocol MOBFImageLoadSessionDelegate;

@interface MOBFImageLoadSession : NSObject
{
    _Bool _allowReadCache;
    _Bool _isLoading;
    id <MOBFImageLoadSessionDelegate> _delegate;
    NSURL *_url;
    NSString *_cachePath;
    NSOperationQueue *_operationQueues;
}

@property(nonatomic) __weak NSOperationQueue *operationQueues; // @synthesize operationQueues=_operationQueues;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <MOBFImageLoadSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowReadCache; // @synthesize allowReadCache=_allowReadCache;
- (void).cxx_destruct;
- (void)loadWebImageByURL:(id)arg1;
- (void)loadLocalImageByURL:(id)arg1;
- (_Bool)existsImageCacheByURL:(id)arg1;
- (_Bool)existsImageCache;
- (void)load;
- (id)initWithURL:(id)arg1 cachePath:(id)arg2 queues:(id)arg3;

@end

