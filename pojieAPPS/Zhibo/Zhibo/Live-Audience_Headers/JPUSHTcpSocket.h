//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol JPUSHTcpSocketDelegate;

@interface JPUSHTcpSocket : NSObject
{
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_rls;
    unsigned long long _ulReceivedLen;
    char *_receivingBuffer;
    unsigned long long _ulDefaultReceiveBufferSize;
    unsigned long long _ulSendingDataSentLen;
    NSMutableArray *_sendQueue;
    _Bool _isSetuped;
    struct _opaque_pthread_mutex_t _mutex;
    _Bool _careAllDataSent;
    unsigned short _port;
    int _connectionState;
    NSObject<JPUSHTcpSocketDelegate> *_delegate;
    NSString *_host;
}

@property(nonatomic) _Bool careAllDataSent; // @synthesize careAllDataSent=_careAllDataSent;
@property(readonly, nonatomic) int connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) __weak NSObject<JPUSHTcpSocketDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (void)doCheck;
- (void)delayedDidSendData:(id)arg1;
- (void)delayedDidReceiveElement:(id)arg1;
- (_Bool)sendData:(id)arg1;
- (void)reenableSocketCallbacks;
- (void)onlyResetInfo;
- (void)resetReadInfo;
- (void)doSend;
- (void)doRead;
- (void)onConnectedWithErrorCode:(struct __CFData *)arg1;
- (void)restoreSendQueueData;
- (void)saveSendQueueData;
- (id)remoteAddress;
- (id)localAddress;
- (_Bool)isConnected;
- (void)doCFSocketCallback:(unsigned long long)arg1 forSocket:(struct __CFSocket *)arg2 withData:(struct __CFData *)arg3;
- (void)close;
- (void)p_cleanSocket;
- (_Bool)setup;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(unsigned int)arg2 delegate:(id)arg3;
@property struct __CFSocket *socket; // @dynamic socket;

@end

