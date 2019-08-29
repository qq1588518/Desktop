//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PIpInfoModel, PNetReachability;

@interface PhoneNetManager : NSObject
{
    PIpInfoModel *_devicePublicIpInfo;
    PNetReachability *_reachability;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) PNetReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) PIpInfoModel *devicePublicIpInfo; // @synthesize devicePublicIpInfo=_devicePublicIpInfo;
- (void).cxx_destruct;
- (id)netGetNetworkInfo;
- (void)netGetDevicePublicIpInfo;
- (void)checkNetworkStatusWithReachability:(id)arg1;
- (void)networkChange:(id)arg1;
- (void)netStopPortScan;
- (_Bool)isDoingPortScan;
- (void)netPortScan:(id)arg1 beginPort:(unsigned long long)arg2 endPort:(unsigned long long)arg3 completeHandler:(CDUnknownBlockType)arg4;
- (void)netLookupDomain:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (_Bool)isDoingTraceroute;
- (void)netStopTraceroute;
- (void)netStartTraceroute:(id)arg1 tracerouteResultHandler:(CDUnknownBlockType)arg2;
- (void)netStartPing:(id)arg1 packetCount:(int)arg2 pingResultHandler:(CDUnknownBlockType)arg3;
- (_Bool)isDoingPing;
- (void)netStopPing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sdkVersion;
- (void)registPhoneNetSDK;
- (void)settingSDKLogLevel:(unsigned long long)arg1;

@end

