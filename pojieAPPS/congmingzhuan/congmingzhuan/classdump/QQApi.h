//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QQApi : NSObject
{
}

+ (void)cgiShareReportWithMessage:(id)arg1 andCallsource:(int)arg2;
+ (void)showInstallTIMTips;
+ (void)showInstallQQTips;
+ (id)supportShareScheme;
+ (_Bool)openTIMApp;
+ (_Bool)openQQApp;
+ (id)getTIMInstallURL;
+ (id)getQQInstallURL;
+ (_Bool)isTIMSupportAddFriend;
+ (_Bool)isQQSupportAddFriend;
+ (_Bool)isQQSupportApiForDataLine;
+ (_Bool)isTIMSupportApiForGameConsortiumBindingGroup;
+ (_Bool)isQQSupportApiForGameConsortiumBindingGroup;
+ (_Bool)isTIMSupportApi;
+ (_Bool)isQQSupportApi;
+ (_Bool)isTIMSupportQZoneMediaShare;
+ (_Bool)isQQSupportQZoneMediaShare;
+ (_Bool)isQQSupportQZoneShare;
+ (_Bool)isTIMInstalled;
+ (_Bool)isQQInstalled;
+ (id)getAdItemArray;
+ (id)handleOpenURL:(id)arg1;
+ (id)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
+ (int)sendMessage:(id)arg1;
+ (void)showErrorWithWebView:(id)arg1;
+ (_Bool)checkQQApiURLMessage:(id)arg1;
+ (void)registerPluginWithId:(id)arg1;
+ (void)registerAccessToken:(id)arg1;
+ (void)registerQQConnectAppId:(id)arg1;
+ (void)registerQQUin:(id)arg1;
+ (void)registerQQConnectOpenId:(id)arg1;
- (id)init;

@end

