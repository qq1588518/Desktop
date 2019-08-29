//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/JPUSHUserDefaultsControllerDelegate-Protocol.h>

@class JPUSHAddressConfigController, JPUSHMessageCenter, JPUSHNetworkController, JPUSHPushConfigController, JPUSHUserDefaultsController, NSMutableArray, NSNotificationCenter, NSString, NSThread;

@interface JCOREClientController : NSObject <JPUSHUserDefaultsControllerDelegate>
{
    JPUSHNetworkController *_networkService;
    double _becomeActiveTime;
    NSMutableArray *_apnsDataList;
    NSString *_registrationID;
    _Bool _isSetup;
    _Bool _isCloseSocket;
    _Bool _deviceTokenUpdated;
    _Bool _isReportCrash;
    _Bool _isActive;
    NSThread *_clientThread;
    NSString *_systemVersion;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_modelName;
    NSString *_hostIpvSixPrefix;
    NSMutableArray *_businessArray;
    JPUSHPushConfigController *_pushConfig;
    JPUSHUserDefaultsController *_userDefaults;
    JPUSHMessageCenter *_messageCenter;
    NSNotificationCenter *_clientNotificationCenter;
    NSMutableArray *_registerIDHandlers;
    NSMutableArray *_messageBlockList;
    NSMutableArray *_tcpProtocolBlockList;
    JPUSHAddressConfigController *_addressConfig;
}

+ (void)client:(id)arg1 performSEL:(SEL)arg2 and:(id)arg3;
+ (id)JMessageVersion;
+ (id)JShareVersion;
+ (id)JAnalyticsVersion;
+ (id)JPushVersion;
+ (_Bool)messageExist;
+ (_Bool)shareExist;
+ (_Bool)analyticsExist;
+ (_Bool)pushExist;
+ (_Bool)jpushOnly;
+ (_Bool)hasMultiBusiness;
+ (_Bool)needConnect;
+ (void)changeLoggerLevel:(long long)arg1;
+ (void)setupJPushLogger;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedClient;
@property(readonly, retain, nonatomic) JPUSHAddressConfigController *addressConfig; // @synthesize addressConfig=_addressConfig;
@property(readonly, nonatomic) NSMutableArray *tcpProtocolBlockList; // @synthesize tcpProtocolBlockList=_tcpProtocolBlockList;
@property(readonly, nonatomic) NSMutableArray *messageBlockList; // @synthesize messageBlockList=_messageBlockList;
@property(readonly, nonatomic) NSMutableArray *registerIDHandlers; // @synthesize registerIDHandlers=_registerIDHandlers;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, retain, nonatomic) NSNotificationCenter *clientNotificationCenter; // @synthesize clientNotificationCenter=_clientNotificationCenter;
@property(readonly, nonatomic) _Bool isReportCrash; // @synthesize isReportCrash=_isReportCrash;
@property(nonatomic) _Bool deviceTokenUpdated; // @synthesize deviceTokenUpdated=_deviceTokenUpdated;
@property(readonly, retain, nonatomic) JPUSHMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(readonly, retain, nonatomic) JPUSHUserDefaultsController *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) JPUSHPushConfigController *pushConfig; // @synthesize pushConfig=_pushConfig;
@property(retain, nonatomic) NSMutableArray *businessArray; // @synthesize businessArray=_businessArray;
@property(retain, nonatomic) NSString *hostIpvSixPrefix; // @synthesize hostIpvSixPrefix=_hostIpvSixPrefix;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSThread *clientThread; // @synthesize clientThread=_clientThread;
@property(readonly, nonatomic) _Bool isCloseSocket; // @synthesize isCloseSocket=_isCloseSocket;
@property(readonly, nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
- (void).cxx_destruct;
- (int)currentNetworkStatus;
- (void)trySetupSession;
- (void)reportAPNSState:(long long)arg1;
- (void)onCtrlCmdRespond:(id)arg1;
- (void)serialize;
- (void)sendAllBlockedHttpReports;
- (void)sendHttpReport:(id)arg1;
- (double)startTime;
- (double)closeTime;
- (id)reportCache;
- (void)dequeueRequest:(id)arg1;
- (id)findSendingRequest:(unsigned long long)arg1;
- (id)findBlockedRequest:(unsigned long long)arg1;
- (id)addressController;
- (unsigned long long)getRId:(unsigned long long)arg1;
- (unsigned long long)oddRid;
- (void)onRegisterRespond:(id)arg1;
- (void)onLoginRespond:(id)arg1;
- (void)onAckTimeoutForRequest:(id)arg1;
- (void)onAckOrRespReceived:(id)arg1;
- (void)sendRequest:(id)arg1;
- (unsigned int)sessionID;
- (id)reportSession;
- (id)clientSession;
- (void)dispatchMessage:(id)arg1;
- (void)resetCurrentPage:(double)arg1;
- (void)savePageFlowWithTime:(double)arg1;
- (void)closeSession;
- (void)setupSession;
- (id)currentFlow;
- (_Bool)isDebugMode;
- (id)userAddress;
- (id)reportAddress;
- (unsigned short)connectPort;
- (id)connectAddress;
@property(readonly, nonatomic) int apsEvironment;
- (int)configApsEnvironment;
- (_Bool)shouldUploadAdvertisingIdentifier;
- (id)advertisingIdentifier;
- (id)pushChanel;
- (id)applicationKey;
- (void)resetPushConfig;
- (id)getDeviceID;
- (void)getRegistrationID:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)unobserveNotifications;
- (void)observeNotifications;
- (void)forwardResCmd:(unsigned char)arg1 Buffer:(const char *)arg2 length:(unsigned short)arg3;
- (void)closeJPUSHThread;
- (void)synchronizeData;
- (void)executeRegisterIDHandlers:(id)arg1;
- (void)didRegister:(id)arg1;
- (void)didLogin:(id)arg1;
- (void)closeSocket;
- (void)getRegistrationIDCompletionHandler:(CDUnknownBlockType)arg1;
- (id)readRegistrationID;
- (void)addTcpProtocolBlock:(CDUnknownBlockType)arg1;
- (void)addMessageBlock:(CDUnknownBlockType)arg1;
- (id)location;
- (void)setLatitude:(id)arg1;
- (void)setViewLogSecond:(id)arg1;
- (void)setViewStop:(id)arg1;
- (void)setViewStart:(id)arg1;
- (void)onEnterBackground;
- (void)onDidBecomeActive;
- (void)updateIntegrateMarkWith:(unsigned char)arg1;
- (id)jcoreRegisterSDKs;
- (void)tryUploadIDFA;
- (void)reportInactive:(id)arg1;
- (void)reportLaunch:(id)arg1;
- (_Bool)needUploadSDKVersion;
- (void)close;
@property(readonly, retain, nonatomic) JPUSHNetworkController *networkService;
- (void)setup;
- (_Bool)loadConnectAddress;
- (void)setCrashLogON;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

