//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SSDKService : NSObject
{
    _Bool _backflowOn;
    _Bool _enabledATS;
    NSDictionary *_serverPaths;
}

+ (id)sharedService;
@property(nonatomic) _Bool enabledATS; // @synthesize enabledATS=_enabledATS;
@property(retain, nonatomic) NSDictionary *serverPaths; // @synthesize serverPaths=_serverPaths;
@property(nonatomic) _Bool backflowOn; // @synthesize backflowOn=_backflowOn;
- (void).cxx_destruct;
- (id)_urlStringWithBaseURL:(id)arg1 paths:(id)arg2;
- (void)_parseResponse:(id)arg1 data:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)_getServicePath:(id)arg1;
- (void)getTagsWithAppkey:(id)arg1 duid:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)getServerConnectPermissionWithAppkey:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)getShortUrls:(id)arg1 appkey:(id)arg2 duid:(id)arg3 statDeviceOn:(_Bool)arg4 statAuthOn:(_Bool)arg5 user:(id)arg6 platformType:(unsigned long long)arg7 onResult:(CDUnknownBlockType)arg8;
- (void)sendLogs:(id)arg1 appkey:(id)arg2 onResult:(CDUnknownBlockType)arg3;
- (void)uploadSharedImage:(id)arg1 appkey:(id)arg2 onResult:(CDUnknownBlockType)arg3;
- (void)getPlatformConfigsWithAppkey:(id)arg1 duid:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)_installAppConfigWithResponder:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)getAppConfigWithAppkey:(id)arg1 duid:(id)arg2 result:(CDUnknownBlockType)arg3;

@end

