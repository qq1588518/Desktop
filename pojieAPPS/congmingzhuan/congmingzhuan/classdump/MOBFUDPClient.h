//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface MOBFUDPClient : NSObject
{
    _Bool _isIPv6;
    unsigned int _port;
    struct __CFSocket *_theSocket4;
    struct __CFSocket *_theSocket6;
    struct __CFRunLoopSource *_runLoopSource4;
    struct __CFRunLoopSource *_runLoopSource6;
    struct __CFRunLoop *_runloopRef;
    NSThread *_workerThread;
    CDUnknownBlockType _receiveDataHandler;
}

@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler; // @synthesize receiveDataHandler=_receiveDataHandler;
@property(retain, nonatomic) NSThread *workerThread; // @synthesize workerThread=_workerThread;
@property(nonatomic) struct __CFRunLoop *runloopRef; // @synthesize runloopRef=_runloopRef;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource6; // @synthesize runLoopSource6=_runLoopSource6;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource4; // @synthesize runLoopSource4=_runLoopSource4;
@property(nonatomic) struct __CFSocket *theSocket6; // @synthesize theSocket6=_theSocket6;
@property(nonatomic) struct __CFSocket *theSocket4; // @synthesize theSocket4=_theSocket4;
- (void).cxx_destruct;
- (id)getIPAddresses;
- (_Bool)isIPv6Fun;
- (int)convertForSendHost:(id)arg1 port:(unsigned short)arg2 intoAddress4:(id *)arg3 address6:(id *)arg4;
- (void)destroySocket;
- (_Bool)createSocketListen;
- (_Bool)createSocket;
- (void)setup;
- (void)onReceiveData:(CDUnknownBlockType)arg1;
- (_Bool)sendData:(id)arg1 toAddress:(id)arg2 andPort:(unsigned int)arg3;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1;
- (id)init;

@end

