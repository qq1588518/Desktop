//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AlibcTradeSDK : NSObject
{
}

+ (id)sharedInstance;
- (id)getLogFilePath;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)handleOpenURL:(id)arg1;
- (id)tradeService;
- (void)checkResoucesAndConfigure;
- (void)asyncInitWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)setShouldUseAlipayNative:(_Bool)arg1;
- (void)enableAuthVipMode;
- (void)setChannel:(id)arg1 name:(id)arg2;
- (void)setDebugLogOpen:(_Bool)arg1;
- (void)setIsForceH5:(_Bool)arg1;
- (void)setIsvVersion:(id)arg1;
- (void)setIsSyncForTaoke:(_Bool)arg1;
- (void)setTaokeParams:(id)arg1;
- (void)setISVCode:(id)arg1;
- (void)setEnv:(long long)arg1;

@end
