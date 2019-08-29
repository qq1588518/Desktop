//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSMutableDictionary, NSOperation, NSOperationQueue, NSString, NSURLCredential, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_semaphore;

@interface SDWebImageDownloader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _shouldDecompressImages;
    double _downloadTimeout;
    long long _executionOrder;
    NSURLCredential *_urlCredential;
    NSString *_username;
    NSString *_password;
    CDUnknownBlockType _headersFilter;
    NSOperationQueue *_downloadQueue;
    NSOperation *_lastAddedOperation;
    Class _operationClass;
    NSMutableDictionary *_URLOperations;
    struct NSMutableDictionary *_HTTPHeaders;
    NSObject<OS_dispatch_semaphore> *_operationsLock;
    NSObject<OS_dispatch_semaphore> *_headersLock;
    NSURLSession *_session;
}

+ (id)sharedDownloader;
+ (void)initialize;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *headersLock; // @synthesize headersLock=_headersLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *operationsLock; // @synthesize operationsLock=_operationsLock;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSMutableDictionary *URLOperations; // @synthesize URLOperations=_URLOperations;
@property(nonatomic) Class operationClass; // @synthesize operationClass=_operationClass;
@property(nonatomic) __weak NSOperation *lastAddedOperation; // @synthesize lastAddedOperation=_lastAddedOperation;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(copy, nonatomic) CDUnknownBlockType headersFilter; // @synthesize headersFilter=_headersFilter;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSURLCredential *urlCredential; // @synthesize urlCredential=_urlCredential;
@property(nonatomic) long long executionOrder; // @synthesize executionOrder=_executionOrder;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)operationWithTask:(id)arg1;
- (void)cancelAllDownloads;
- (void)setSuspended:(_Bool)arg1;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)cancel:(id)arg1;
- (id)createDownloaderOperationWithUrl:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property(nonatomic) long long maxConcurrentDownloads;
@property(readonly, nonatomic) unsigned long long currentDownloadCount;
- (struct NSDictionary *)allHTTPHeaderFields;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)dealloc;
- (void)invalidateSessionAndCancel:(_Bool)arg1;
- (void)createNewSessionWithConfiguration:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

