//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/SFSafariViewControllerDelegate-Protocol.h>

@class CPOpenInstallNetwork, NSMutableArray, NSString, OpeninstallData, SFSafariViewController;
@protocol OS_dispatch_queue, OS_dispatch_source, OpenInstallDelegate;

@interface OpenInstallSDK : NSObject <SFSafariViewControllerDelegate>
{
    int _dissTime;
    int _attachTimeout;
    long long _threadRunLastTime;
    _Bool _isTwo;
    _Bool _isWillResignActiveFirst;
    _Bool _appNotJustLaunched;
    int _reportPeriod;
    int _eventPeriod;
    int _initSafariFlag;
    SFSafariViewController *_safariVC;
    id <OpenInstallDelegate> _delegate;
    CPOpenInstallNetwork *_network;
    OpeninstallData *_openinstallData;
    OpeninstallData *_wakeupData;
    NSString *_identifier;
    NSString *_deviceName;
    NSString *_sysVersoin;
    NSString *_timestamp;
    NSString *_appVersoin;
    NSString *_attachId;
    NSString *_attachUrl;
    NSString *_localIP;
    NSString *_installId;
    NSString *_pHtml;
    long long _becomeActiveDate;
    long long _activeTime;
    NSString *_wrongCodeMesssage;
    long long _threadTimes;
    long long _wakeupInsureTimes;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_networkQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSMutableArray *_installBlocksArr;
    NSMutableArray *_eventsQueue;
    NSObject<OS_dispatch_source> *_safariTimer;
    unsigned long long _taskId;
}

+ (id)encodeString:(id)arg1;
+ (unsigned long long)transToEncoding:(id)arg1;
+ (id)unarchiveFromFile:(id)arg1 asClass:(Class)arg2;
+ (id)unarchiveOrDefaultFromFile:(id)arg1 asClass:(Class)arg2;
+ (id)getOpenInstallParams;
+ (_Bool)isWakeupStatsEnabled;
+ (void)sendPullUpStats:(id)arg1 urlStr:(id)arg2;
+ (void)getParameter:(id)arg1 urlStr:(id)arg2;
+ (void)clearApiIfExist;
+ (_Bool)continueUserActivity:(id)arg1;
+ (_Bool)handLinkURL:(id)arg1;
+ (void)reportRegister;
+ (void)logWhenNeed:(unsigned long long)arg1;
+ (void)initWithDelegate:(id)arg1;
+ (void)setAppKey:(id)arg1 withDelegate:(id)arg2;
+ (id)sharedUIApplication;
+ (id)sdkVersion;
+ (id)defaultManager;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *safariTimer; // @synthesize safariTimer=_safariTimer;
@property(retain, nonatomic) NSMutableArray *eventsQueue; // @synthesize eventsQueue=_eventsQueue;
@property(retain, nonatomic) NSMutableArray *installBlocksArr; // @synthesize installBlocksArr=_installBlocksArr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) long long wakeupInsureTimes; // @synthesize wakeupInsureTimes=_wakeupInsureTimes;
@property(nonatomic) long long threadTimes; // @synthesize threadTimes=_threadTimes;
@property(copy, nonatomic) NSString *wrongCodeMesssage; // @synthesize wrongCodeMesssage=_wrongCodeMesssage;
@property(nonatomic) _Bool appNotJustLaunched; // @synthesize appNotJustLaunched=_appNotJustLaunched;
@property(nonatomic) _Bool isWillResignActiveFirst; // @synthesize isWillResignActiveFirst=_isWillResignActiveFirst;
@property(nonatomic) _Bool isTwo; // @synthesize isTwo=_isTwo;
@property(nonatomic) int initSafariFlag; // @synthesize initSafariFlag=_initSafariFlag;
@property(nonatomic) int eventPeriod; // @synthesize eventPeriod=_eventPeriod;
@property(nonatomic) int reportPeriod; // @synthesize reportPeriod=_reportPeriod;
@property long long activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) long long becomeActiveDate; // @synthesize becomeActiveDate=_becomeActiveDate;
@property(copy, nonatomic) NSString *pHtml; // @synthesize pHtml=_pHtml;
@property(copy, nonatomic) NSString *installId; // @synthesize installId=_installId;
@property(copy, nonatomic) NSString *localIP; // @synthesize localIP=_localIP;
@property(copy, nonatomic) NSString *attachUrl; // @synthesize attachUrl=_attachUrl;
@property(copy, nonatomic) NSString *attachId; // @synthesize attachId=_attachId;
@property(copy, nonatomic) NSString *appVersoin; // @synthesize appVersoin=_appVersoin;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *sysVersoin; // @synthesize sysVersoin=_sysVersoin;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) OpeninstallData *wakeupData; // @synthesize wakeupData=_wakeupData;
@property(retain) OpeninstallData *openinstallData; // @synthesize openinstallData=_openinstallData;
@property(retain) CPOpenInstallNetwork *network; // @synthesize network=_network;
@property(nonatomic) __weak id <OpenInstallDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SFSafariViewController *safariVC; // @synthesize safariVC=_safariVC;
- (void).cxx_destruct;
- (void)dealloc;
- (void)errorThrow;
- (void)sendEventOriginal:(id)arg1;
- (void)sendEventHooked:(id)arg1;
- (_Bool)deletePassWordForUsername:(id)arg1;
- (id)getPassword:(id)arg1;
- (_Bool)savePassword:(id)arg1 password:(id)arg2;
- (void)dispatchOnNetworkQueue:(CDUnknownBlockType)arg1;
- (void)unarchiveEvents;
- (void)unarchive;
- (_Bool)addSkipBackupAttributeToItemAtPath:(id)arg1;
- (_Bool)archiveObject:(id)arg1 withFilePath:(id)arg2;
- (id)filePathFor:(id)arg1;
- (id)eventsFilePath;
- (void)archiveEvents;
- (void)archive;
- (void)sendWakeupDelegateWithNil;
- (_Bool)isReportEventsEnabled;
- (void)flushEventQueue;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)startEventsFlushTimer;
- (void)flush;
- (void)reportEffectPoint:(id)arg1 effectValue:(long long)arg2;
- (_Bool)isReportActivUsersEnabled;
- (void)setCurrentActiReportTime;
- (void)reportActivUsers:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)applicationReceiveMemoryWarning:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)getCurrentTimestamp;
- (void)saveAliveLogs:(id)arg1;
- (void)cancelBackgroundTaskInvalid;
- (void)cancelIfWhileRunning;
- (void)flushInBackground;
- (void)enterBgMethod:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)becomeActiveMethod:(id)arg1;
- (void)flushActiQueue;
- (void)cancelAllTimers;
- (void)startActiFlushTimer;
- (void)initHasCompeleted:(CDUnknownBlockType)arg1;
- (void)getInstallParmsWithTimeoutInterval:(double)arg1 completed:(CDUnknownBlockType)arg2;
- (void)getInstallParmsCompleted:(CDUnknownBlockType)arg1;
- (void)sendInstallBlock;
- (void)getOpeninstallParamsWhileRun;
- (void)getOpeninstalllParams;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (id)topMostController;
- (void)initOpeninstallTwo;
- (void)initOpeninstallOne;
- (void)threadSleeping;
- (void)getConfigInfo;
- (void)sendRequestAsyncIsOpenExactMatch;
- (void)setupListeners;
- (void)initWithAppKey:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

