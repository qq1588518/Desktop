//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GrowingEvent, GrowingEventChannel, GrowingEventCounter, GrowingEventDataBase, GrowingVisitEvent, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GrowingEventManager : NSObject
{
    _Bool _shouldCacheEvent;
    _Bool _allowUploadViaCellular;
    _Bool _inVCLifeCycleSendPageState;
    _Bool _uploadType_isFullData_unsafe;
    _Bool _whiteListImpOnly;
    _Bool _enableImp;
    _Bool _allNetwork;
    GrowingEvent *_lastPageEvent;
    GrowingVisitEvent *_vstEvent;
    CDUnknownBlockType _reportHandler;
    NSMutableArray *_allObservers;
    NSMutableArray *_eventQueue;
    NSArray *_allEventChannels;
    NSDictionary *_eventChannelDict;
    GrowingEventChannel *_otherEventChannel;
    NSObject<OS_dispatch_source> *_reportTimer;
    GrowingEventDataBase *_keyEventDB;
    GrowingEventDataBase *_normalEventDB;
    GrowingEventDataBase *_customEventDB;
    GrowingEventDataBase *_seqIdDB;
    GrowingEventDataBase *_uploadEventSizeDB;
    GrowingEventCounter *_eventCounter;
    unsigned long long _uploadLimitOfCellular;
    NSString *_ai;
    NSString *_user;
    NSArray *_whiteListItems;
    unsigned long long _packageNum;
    NSOperationQueue *_fetchTagsQ;
    NSMutableArray *_cacheArray;
}

+ (id)jointField:(id)arg1 withField:(id)arg2;
+ (_Bool)hasSharedInstance;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *cacheArray; // @synthesize cacheArray=_cacheArray;
@property(retain, nonatomic) NSOperationQueue *fetchTagsQ; // @synthesize fetchTagsQ=_fetchTagsQ;
@property(nonatomic) unsigned long long packageNum; // @synthesize packageNum=_packageNum;
@property(nonatomic) _Bool allNetwork; // @synthesize allNetwork=_allNetwork;
@property(nonatomic) _Bool enableImp; // @synthesize enableImp=_enableImp;
@property(nonatomic) _Bool whiteListImpOnly; // @synthesize whiteListImpOnly=_whiteListImpOnly;
@property(copy, nonatomic) NSArray *whiteListItems; // @synthesize whiteListItems=_whiteListItems;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *ai; // @synthesize ai=_ai;
@property(nonatomic) _Bool uploadType_isFullData_unsafe; // @synthesize uploadType_isFullData_unsafe=_uploadType_isFullData_unsafe;
@property(nonatomic) unsigned long long uploadLimitOfCellular; // @synthesize uploadLimitOfCellular=_uploadLimitOfCellular;
@property(retain, nonatomic) GrowingEventCounter *eventCounter; // @synthesize eventCounter=_eventCounter;
@property(retain, nonatomic) GrowingEventDataBase *uploadEventSizeDB; // @synthesize uploadEventSizeDB=_uploadEventSizeDB;
@property(retain, nonatomic) GrowingEventDataBase *seqIdDB; // @synthesize seqIdDB=_seqIdDB;
@property(retain, nonatomic) GrowingEventDataBase *customEventDB; // @synthesize customEventDB=_customEventDB;
@property(retain, nonatomic) GrowingEventDataBase *normalEventDB; // @synthesize normalEventDB=_normalEventDB;
@property(retain, nonatomic) GrowingEventDataBase *keyEventDB; // @synthesize keyEventDB=_keyEventDB;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reportTimer; // @synthesize reportTimer=_reportTimer;
@property(readonly, retain, nonatomic) GrowingEventChannel *otherEventChannel; // @synthesize otherEventChannel=_otherEventChannel;
@property(readonly, retain, nonatomic) NSDictionary *eventChannelDict; // @synthesize eventChannelDict=_eventChannelDict;
@property(readonly, retain, nonatomic) NSArray *allEventChannels; // @synthesize allEventChannels=_allEventChannels;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSMutableArray *allObservers; // @synthesize allObservers=_allObservers;
@property(copy, nonatomic) CDUnknownBlockType reportHandler; // @synthesize reportHandler=_reportHandler;
@property(nonatomic) _Bool inVCLifeCycleSendPageState; // @synthesize inVCLifeCycleSendPageState=_inVCLifeCycleSendPageState;
@property(nonatomic) _Bool allowUploadViaCellular; // @synthesize allowUploadViaCellular=_allowUploadViaCellular;
@property(nonatomic) _Bool shouldCacheEvent; // @synthesize shouldCacheEvent=_shouldCacheEvent;
@property(retain, nonatomic) GrowingVisitEvent *vstEvent; // @synthesize vstEvent=_vstEvent;
@property(retain, nonatomic) GrowingEvent *lastPageEvent; // @synthesize lastPageEvent=_lastPageEvent;
- (void).cxx_destruct;
- (_Bool)isMatchingAnyTag:(id)arg1;
- (void)readWhiteList_unsafe:(id)arg1;
- (void)readOptions_unsafe:(id)arg1;
- (void)custom_cancel;
- (void)readWhiteListAndOptions;
- (id)generateWhiteListAndOptionsURL;
- (void)clearAllEvents;
- (id)compressEvents:(id)arg1;
- (id)getEventsToBeUploaded_unsafe:(id)arg1;
- (void)sendEventsOfChannel_unsafe:(id)arg1;
- (void)sendEvents;
- (void)removeEvents_unsafe:(id)arg1 forChannel:(id)arg2;
- (void)flushDB;
- (unsigned long long)destinyOfEvent:(id)arg1;
- (void)writeToDBWithEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)addEvent:(id)arg1 thisNode:(id)arg2 triggerNode:(id)arg3 withContext:(id)arg4;
- (_Bool)triggerNodeNeedTrack:(id)arg1 witheventType:(long long)arg2 withChild:(_Bool)arg3;
- (void)dispathInUpload:(CDUnknownBlockType)arg1;
- (void)timerSendEvent;
- (id)getCustomEventsToBeUploaded_unsafe;
- (void)loadFromDB_unsafe;
- (void)dbErrorWithError:(id)arg1;
@property(nonatomic) unsigned long long uploadEventSize;
- (id)getTodayKey;
- (void)reloadFromDB_unsafe;
- (id)initWithName:(id)arg1 ai:(id)arg2 user:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *eventDispatch;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

@end

