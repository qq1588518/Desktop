//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TBSDKMTOPEnvConfig : NSObject
{
    _Bool _isWhiteSecurity;
    int _environment;
    NSString *_appkey;
    NSString *_appSecret;
    NSString *_uid;
    NSString *_authCode;
}

+ (id)urlEncodeString:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(nonatomic) int environment; // @synthesize environment=_environment;
@property _Bool isWhiteSecurity; // @synthesize isWhiteSecurity=_isWhiteSecurity;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;
- (id)readUtdid;
- (id)init;

@end
