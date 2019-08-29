//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/BLYDataManagerKVOProtocol-Protocol.h>

@class BLYRqdStrategy, BLYSDKConfig, NSArray, NSMutableArray, NSOperationQueue, NSString;

@interface BLYSDKManager : NSObject <BLYDataManagerKVOProtocol>
{
    _Bool _inProgress;
    _Bool _started;
    _Bool _crashedOverFlow;
    NSMutableArray *_enabledModules;
    NSOperationQueue *_sdkStartQueue;
    NSArray *_modules;
    BLYRqdStrategy *_strategy;
    BLYSDKConfig *_config;
}

+ (id)userFriendlyVersion;
+ (id)sdkVersion;
+ (id)sharedManager;
@property(retain, nonatomic) BLYSDKConfig *config; // @synthesize config=_config;
@property(retain) BLYRqdStrategy *strategy; // @synthesize strategy=_strategy;
@property(copy) NSArray *modules; // @synthesize modules=_modules;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isAppCrashedOnStartUpExceedTheLimit;
- (void)setTag:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)updateAppVersion:(id)arg1;
- (id)deviceIdentify;
- (id)allUserValues;
- (void)setUserValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)currentTag;
- (void)reportError:(id)arg1 reason:(id)arg2 extraInfo:(id)arg3;
- (void)reportException:(id)arg1 reason:(id)arg2 extraInfo:(id)arg3;
- (void)reportCustomizedException:(unsigned long long)arg1 name:(id)arg2 reason:(id)arg3 callStack:(id)arg4 extraInfo:(id)arg5 terminateApp:(_Bool)arg6;
- (void)stop;
- (void)startWithAppId:(id)arg1 developmentDevice:(_Bool)arg2 config:(id)arg3;
- (_Bool)shouldEnableSDK:(id)arg1;
- (id)fixCallStackSymbols:(id)arg1 skipFrame:(unsigned long long)arg2;
- (id)findModuleWithClass:(Class)arg1;
- (void)updateModule:(id)arg1;
- (_Bool)toggleModule:(id)arg1 enable:(_Bool)arg2;
- (void)constructModules;
- (_Bool)shouldEnableModule:(id)arg1;
- (id)basicModules;
- (id)moduleWithClassName:(id)arg1;
- (void)dataManagerNotifyValue:(id)arg1 changedForKey:(id)arg2;
- (id)defaultStrategy;
- (void)loadStrategy;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)start;
@property(retain) NSOperationQueue *sdkStartQueue; // @synthesize sdkStartQueue=_sdkStartQueue;
@property(copy) NSMutableArray *enabledModules; // @synthesize enabledModules=_enabledModules;
@property _Bool crashedOverFlow; // @synthesize crashedOverFlow=_crashedOverFlow;
@property _Bool inProgress; // @synthesize inProgress=_inProgress;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

