//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSDKJsProxy : NSObject
{
}

+ (id)defaultProxy;
- (void)getShortUrls:(id)arg1 platform:(unsigned long long)arg2 user:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)checkUrlSchemes:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)_registerDeviceModel;
- (void)_registerGetImageDataMethod;
- (void)_registOpenAuthUrlMethod;
- (void)_registerCallApiMethod;
- (void)_registConvertUrl;
- (void)registJsMethod;

@end

