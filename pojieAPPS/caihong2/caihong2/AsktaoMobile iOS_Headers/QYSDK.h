//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YSFAppInfoManager, YSFConversationManager, YSFPathManager, YSFSessionManager;

@interface QYSDK : NSObject
{
    unsigned long long _serverSetting;
    YSFAppInfoManager *_infoManager;
    YSFSessionManager *_sessionManager;
    YSFPathManager *_pathManager;
    YSFConversationManager *_sdkConversationManager;
    CDUnknownBlockType _pushMessageBlock;
    NSString *_authToken;
}

+ (void)cleanMessageCache;
+ (id)sharedSDK;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) CDUnknownBlockType pushMessageBlock; // @synthesize pushMessageBlock=_pushMessageBlock;
@property(retain, nonatomic) YSFConversationManager *sdkConversationManager; // @synthesize sdkConversationManager=_sdkConversationManager;
@property(retain, nonatomic) YSFPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(retain, nonatomic) YSFSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) YSFAppInfoManager *infoManager; // @synthesize infoManager=_infoManager;
@property(nonatomic) unsigned long long serverSetting; // @synthesize serverSetting=_serverSetting;
- (void).cxx_destruct;
- (void)cleanAuthToken;
- (id)deviceId;
- (id)currentForeignUserId;
- (id)qiyuLogPath;
- (void)cleanResourceCacheWithBlock:(CDUnknownBlockType)arg1;
- (id)customActionConfig;
- (id)customUIConfig;
- (id)conversationManager;
- (id)appKey;
- (id)sessionViewController;
- (void)logout:(CDUnknownBlockType)arg1;
- (void)logoutNim:(CDUnknownBlockType)arg1;
- (void)updateApnsToken:(id)arg1;
- (void)registerPushMessageNotification:(CDUnknownBlockType)arg1;
- (void)getPushMessage:(id)arg1;
- (void)setUserInfo:(id)arg1 authTokenVerificationResultBlock:(CDUnknownBlockType)arg2;
- (void)setUserInfo:(id)arg1;
- (void)trackHistory:(id)arg1 description:(id)arg2 key:(id)arg3;
- (void)trackHistory:(id)arg1 enterOrOut:(_Bool)arg2 key:(id)arg3;
- (void)registerAppId:(id)arg1 appName:(id)arg2;
@property(readonly, copy, nonatomic) NSString *serverAddress;
- (id)init;
- (void)readEnvironmentConfig:(id)arg1 useHttps:(id)arg2;

@end
