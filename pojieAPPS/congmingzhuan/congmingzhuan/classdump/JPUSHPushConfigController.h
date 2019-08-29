//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JPUSHPushConfigController : NSObject
{
    int _configApsEnvironment;
}

+ (id)pushConfigAndReset;
+ (id)pushConfig;
@property(nonatomic) int configApsEnvironment; // @synthesize configApsEnvironment=_configApsEnvironment;
- (_Bool)isValidAppKey:(id)arg1;
- (id)lowerCase:(id)arg1;
- (void)setNewAdvertisingIdentifier:(id)arg1;
@property(readonly, nonatomic) long long apsEvironment;
@property(readonly, nonatomic) NSString *advertisingIdentifier;
@property(readonly, nonatomic) NSString *pushChanel;
@property(readonly, nonatomic) NSString *applicationKey;
- (_Bool)setAppKey:(id)arg1 channel:(id)arg2 apsProduction:(_Bool)arg3 advertisingIdentifier:(id)arg4;
- (_Bool)loadWithUrl:(id)arg1;
@property _Bool shouldUploadAdvertisingIdentifier;
- (id)init;

@end

