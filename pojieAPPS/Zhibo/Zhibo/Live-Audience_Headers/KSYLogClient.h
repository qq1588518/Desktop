//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface KSYLogClient : NSObject
{
    _Bool _shouldEnableKSYStatModule;
    long long _memory;
    NSString *_uniqname;
    long long _sendInterval;
    NSString *_deviceName;
    NSString *_deviceId;
    NSString *_logVersion;
    NSString *_sysVersion;
    NSString *_romString;
    NSString *_url;
    NSMutableArray *_playerDataArray;
    NSMutableArray *_streamerDataArray;
    NSMutableDictionary *_headerDictionary;
    NSTimer *_timer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *headerDictionary; // @synthesize headerDictionary=_headerDictionary;
@property(retain, nonatomic) NSMutableArray *streamerDataArray; // @synthesize streamerDataArray=_streamerDataArray;
@property(retain, nonatomic) NSMutableArray *playerDataArray; // @synthesize playerDataArray=_playerDataArray;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *romString; // @synthesize romString=_romString;
@property(copy, nonatomic) NSString *sysVersion; // @synthesize sysVersion=_sysVersion;
@property(copy, nonatomic) NSString *logVersion; // @synthesize logVersion=_logVersion;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) long long sendInterval; // @synthesize sendInterval=_sendInterval;
@property(nonatomic) _Bool shouldEnableKSYStatModule; // @synthesize shouldEnableKSYStatModule=_shouldEnableKSYStatModule;
@property(copy, nonatomic) NSString *uniqname; // @synthesize uniqname=_uniqname;
@property(nonatomic) long long memory; // @synthesize memory=_memory;
- (void).cxx_destruct;
- (id)getBaseDict;
- (id)getRandom;
- (void)getTimeAndRandom;
- (id)toArrayOrNSDictionary:(id)arg1;
- (id)dictionaryToJson:(id)arg1;
- (id)md5StringWithData:(id)arg1;
- (id)insertMessageWith:(id)arg1;
- (id)insertPlayerHeaderMesssageWith:(id)arg1;
- (id)getSendUrlWithBaseUrl:(id)arg1 contmd5:(id)arg2;
- (void)getClientIPAndDnsIPWith:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)sendOnce:(id)arg1;
- (void)sendOneLog:(id)arg1;
- (id)sendOneMessageWith:(id)arg1;
- (void)sendLogData;
- (void)httpReQuestWithRequest:(id)arg1 dataArr:(id)arg2 message:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)init;
- (void)dealloc;

@end

