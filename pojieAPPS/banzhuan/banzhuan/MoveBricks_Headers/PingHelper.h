//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PingFoundationDelegate-Protocol.h"

@class NSMutableArray, NSString, PingFoundation;

@interface PingHelper : NSObject <PingFoundationDelegate>
{
    _Bool _isPinging;
    NSString *_host;
    NSString *_hostForCheck;
    double _timeout;
    NSMutableArray *_completionBlocks;
    PingFoundation *_pingFoundation;
}

@property(nonatomic) _Bool isPinging; // @synthesize isPinging=_isPinging;
@property(retain, nonatomic) PingFoundation *pingFoundation; // @synthesize pingFoundation=_pingFoundation;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *hostForCheck; // @synthesize hostForCheck=_hostForCheck;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)pingTimeOut;
- (void)pingFoundation:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)pingFoundation:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)pingFoundation:(id)arg1 didFailWithError:(id)arg2;
- (void)pingFoundation:(id)arg1 didStartWithAddress:(id)arg2;
- (void)endWithFlag:(_Bool)arg1;
- (void)doubleCheck;
- (void)startPing;
- (void)clearPingFoundation;
- (void)pingWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

