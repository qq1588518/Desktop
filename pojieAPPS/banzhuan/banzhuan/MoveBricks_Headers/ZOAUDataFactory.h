//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZOAUSecurityUtils;

@interface ZOAUDataFactory : NSObject
{
    ZOAUSecurityUtils *securityUtils;
}

- (void).cxx_destruct;
- (_Bool)isValidatIP:(id)arg1;
- (id)getIPAddresses;
- (id)getIPAddress;
- (id)getAesKey;
- (id)getPlistInfo:(id)arg1 nsbundle:(id)arg2;
- (long long)getLongCurrentTime;
- (id)getCurrentTime;
- (id)getDeviceInfo;
- (id)getAppInfo;
- (id)getParamsKey:(id)arg1 rsakey:(id)arg2;
- (id)getApiKey;
- (int)getCurrentNetType;
- (id)getCarrierName;
- (id)init;

@end

