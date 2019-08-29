//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JVNetworkReachabilityManager : NSObject
{
    long long _networkReachabilityStatus;
    struct __SCNetworkReachability *_networkReachability;
    CDUnknownBlockType _networkReachabilityStatusBlock;
}

+ (id)managerForAddress:(const void *)arg1;
+ (id)manager;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityStatusBlock; // @synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(nonatomic) long long networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
- (void).cxx_destruct;
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachableViaWWAN;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
- (void)dealloc;
- (id)initWithReachability:(struct __SCNetworkReachability *)arg1;

@end

