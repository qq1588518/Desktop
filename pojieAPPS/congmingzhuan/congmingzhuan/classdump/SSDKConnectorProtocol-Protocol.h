//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/IMOBFComponent-Protocol.h>

@class NSDictionary, NSString, NSURL, SSDKAuthSession, SSDKShareSession, SSDKUser;

@protocol SSDKConnectorProtocol <IMOBFComponent>
+ (NSString *)loadJs;
+ (void)updatePlatformConfigWithInfo:(NSDictionary *)arg1;
+ (_Bool)isConnectorForPlatformType:(unsigned long long)arg1;

@optional
+ (void)cancelAuth:(void (^)(NSError *))arg1;
+ (SSDKUser *)currentUser;
+ (void)handleOpenUrl:(NSURL *)arg1;
+ (void)getUserInfo:(SSDKAuthSession *)arg1;
+ (void)authorize:(SSDKAuthSession *)arg1;
+ (void)share:(SSDKShareSession *)arg1;
@end

