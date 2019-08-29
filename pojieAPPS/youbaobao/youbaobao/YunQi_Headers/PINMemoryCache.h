//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PINCacheObjectSubscripting-Protocol.h"

@class NSMutableDictionary, NSString;

@interface PINMemoryCache : NSObject <PINCacheObjectSubscripting>
{
    _Bool _ttlCache;
    _Bool _removeAllObjectsOnMemoryWarning;
    _Bool _removeAllObjectsOnEnteringBackground;
    double _ageLimit;
    unsigned long long _costLimit;
    unsigned long long _totalCost;
    CDUnknownBlockType _willAddObjectBlock;
    CDUnknownBlockType _willRemoveObjectBlock;
    CDUnknownBlockType _willRemoveAllObjectsBlock;
    CDUnknownBlockType _didAddObjectBlock;
    CDUnknownBlockType _didRemoveObjectBlock;
    CDUnknownBlockType _didRemoveAllObjectsBlock;
    CDUnknownBlockType _didReceiveMemoryWarningBlock;
    CDUnknownBlockType _didEnterBackgroundBlock;
    struct dispatch_queue_s *_concurrentQueue;
    struct dispatch_semaphore_s *_lockSemaphore;
    NSMutableDictionary *_dictionary;
    NSMutableDictionary *_dates;
    NSMutableDictionary *_costs;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *costs; // @synthesize costs=_costs;
@property(retain, nonatomic) NSMutableDictionary *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(nonatomic) struct dispatch_semaphore_s *lockSemaphore; // @synthesize lockSemaphore=_lockSemaphore;
@property _Bool removeAllObjectsOnEnteringBackground; // @synthesize removeAllObjectsOnEnteringBackground=_removeAllObjectsOnEnteringBackground;
@property _Bool removeAllObjectsOnMemoryWarning; // @synthesize removeAllObjectsOnMemoryWarning=_removeAllObjectsOnMemoryWarning;
@property(nonatomic) struct dispatch_queue_s *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
@property(nonatomic, getter=isTTLCache) _Bool ttlCache; // @synthesize ttlCache=_ttlCache;
@property(readonly) unsigned long long totalCost; // @synthesize totalCost=_totalCost;
@property unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
@property(copy) CDUnknownBlockType didEnterBackgroundBlock; // @synthesize didEnterBackgroundBlock=_didEnterBackgroundBlock;
@property(copy) CDUnknownBlockType didReceiveMemoryWarningBlock; // @synthesize didReceiveMemoryWarningBlock=_didReceiveMemoryWarningBlock;
@property(copy) CDUnknownBlockType didRemoveAllObjectsBlock; // @synthesize didRemoveAllObjectsBlock=_didRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType didRemoveObjectBlock; // @synthesize didRemoveObjectBlock=_didRemoveObjectBlock;
@property(copy) CDUnknownBlockType didAddObjectBlock; // @synthesize didAddObjectBlock=_didAddObjectBlock;
@property(copy) CDUnknownBlockType willRemoveAllObjectsBlock; // @synthesize willRemoveAllObjectsBlock=_willRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType willRemoveObjectBlock; // @synthesize willRemoveObjectBlock=_willRemoveObjectBlock;
@property(copy) CDUnknownBlockType willAddObjectBlock; // @synthesize willAddObjectBlock=_willAddObjectBlock;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)trimToCostByDate:(unsigned long long)arg1;
- (void)trimToCost:(unsigned long long)arg1;
- (void)trimToDate:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjects:(CDUnknownBlockType)arg1;
- (void)trimToCostByDate:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)trimToCost:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)trimToDate:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)containsObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)trimToAgeLimitRecursively;
- (void)trimToCostLimitByDate:(unsigned long long)arg1;
- (void)trimToCostLimit:(unsigned long long)arg1;
- (void)trimMemoryToDate:(id)arg1;
- (void)removeObjectAndExecuteBlocksForKey:(id)arg1;
- (void)didReceiveEnterBackgroundNotification:(id)arg1;
- (void)didReceiveMemoryWarningNotification:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
