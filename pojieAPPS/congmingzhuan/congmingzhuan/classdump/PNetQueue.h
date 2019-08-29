//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PNetQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_pingQueue;
    NSObject<OS_dispatch_queue> *_quickPingQueue;
    NSObject<OS_dispatch_queue> *_traceQueue;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}

+ (void)pnet_async:(CDUnknownBlockType)arg1;
+ (void)pnet_trace_async:(CDUnknownBlockType)arg1;
+ (void)pnet_quick_ping_async:(CDUnknownBlockType)arg1;
+ (void)pnet_ping_async:(CDUnknownBlockType)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *asyncQueue; // @synthesize asyncQueue=_asyncQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *traceQueue; // @synthesize traceQueue=_traceQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *quickPingQueue; // @synthesize quickPingQueue=_quickPingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pingQueue; // @synthesize pingQueue=_pingQueue;
- (void).cxx_destruct;
- (id)init;

@end

