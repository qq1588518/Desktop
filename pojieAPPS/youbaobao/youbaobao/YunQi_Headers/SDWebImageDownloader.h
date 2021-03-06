//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSURLCredential, NSURLSession;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SDWebImageDownloader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSObject<OS_dispatch_semaphore> *_lock;
    _Bool _shouldDecompressImages;
    long long _maxConcurrentDownloads;
    double _downloadTimeout;
    long long _executionOrder;
    NSURLCredential *_urlCredential;
    NSString *_username;
    NSString *_password;
    CDUnknownBlockType _headersFilter;
    NSMutableArray *_activeQueue;
    NSMutableArray *_awaitQueue;
    Class _operationClass;
    NSMutableDictionary *_URLCallbacks;
    NSMutableDictionary *_HTTPHeaders;
    NSObject<OS_dispatch_queue> *_barrierQueue;
    NSURLSession *_session;
}

+ (id)sharedDownloader;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSMutableDictionary *URLCallbacks; // @synthesize URLCallbacks=_URLCallbacks;
@property(retain, nonatomic) Class operationClass; // @synthesize operationClass=_operationClass;
@property(retain, nonatomic) NSMutableArray *awaitQueue; // @synthesize awaitQueue=_awaitQueue;
@property(retain, nonatomic) NSMutableArray *activeQueue; // @synthesize activeQueue=_activeQueue;
@property(copy, nonatomic) CDUnknownBlockType headersFilter; // @synthesize headersFilter=_headersFilter;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSURLCredential *urlCredential; // @synthesize urlCredential=_urlCredential;
@property(nonatomic) long long executionOrder; // @synthesize executionOrder=_executionOrder;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
@property(nonatomic) long long maxConcurrentDownloads; // @synthesize maxConcurrentDownloads=_maxConcurrentDownloads;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)operationWithTask:(id)arg1;
- (void)safelyStartNextTaskIfNecessary;
- (id)createDownloaderOperationWithParmas:(id)arg1 callbacksKey:(id)arg2;
- (id)addDownloaderOperationWithParmas:(id)arg1;
- (id)downloadImageWithParmas:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 header:(id)arg2 options:(unsigned long long)arg3 response:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)cancelAllDownloads;
- (void)setSuspended:(_Bool)arg1;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long currentDownloadCount;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

