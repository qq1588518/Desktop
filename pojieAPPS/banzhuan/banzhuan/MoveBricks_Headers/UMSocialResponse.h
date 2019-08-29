//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface UMSocialResponse : NSObject
{
    NSString *_uid;
    NSString *_openid;
    NSString *_refreshToken;
    NSDate *_expiration;
    NSString *_accessToken;
    NSString *_unionId;
    NSString *_usid;
    long long _platformType;
    id _originalResponse;
    NSDictionary *_extDic;
}

@property(retain, nonatomic) NSDictionary *extDic; // @synthesize extDic=_extDic;
@property(retain, nonatomic) id originalResponse; // @synthesize originalResponse=_originalResponse;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(copy, nonatomic) NSString *usid; // @synthesize usid=_usid;
@property(copy, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *openid; // @synthesize openid=_openid;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

