//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol XGPushTokenManagerDelegate;

@interface XGPushTokenManager : NSObject
{
    id <XGPushTokenManagerDelegate> _delegate;
    NSData *_tokenData;
    NSMutableArray *_tpnsEventList;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultTokenManager;
@property(retain, nonatomic) NSMutableArray *tpnsEventList; // @synthesize tpnsEventList=_tpnsEventList;
@property(retain, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(nonatomic) __weak id <XGPushTokenManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)commonConditionCheck;
- (_Bool)checkIdentifier:(id)arg1 type:(unsigned long long)arg2 isBind:(_Bool)arg3;
- (void)clearAllIdentifiers:(unsigned long long)arg1;
- (void)updateBindedIdentifiers:(id)arg1 bindType:(unsigned long long)arg2;
- (void)unbindWithIdentifers:(id)arg1 type:(unsigned long long)arg2;
- (void)bindWithIdentifiers:(id)arg1 type:(unsigned long long)arg2;
- (id)identifiersWithType:(unsigned long long)arg1;
- (void)bindErrorWithIdentifier:(id)arg1 isBind:(_Bool)arg2 isSystemError:(_Bool)arg3 type:(unsigned long long)arg4 code:(long long)arg5;
- (void)bindTagWithIdentifier:(id)arg1 isBind:(_Bool)arg2;
- (void)bindAccountWithIdentifier:(id)arg1 isBind:(_Bool)arg2;
- (void)registerTokenToServer;
- (void)bindDefualtCaseWithIdentifier:(id)arg1 withType:(unsigned long long)arg2 isBind:(_Bool)arg3;
- (void)unbindWithIdentifer:(id)arg1 type:(unsigned long long)arg2;
- (void)bindWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *deviceTokenString;
- (void)registerDeviceToken:(id)arg1;
- (id)copy;
- (id)init;

@end

