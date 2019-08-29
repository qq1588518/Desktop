//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/JVOperatorAdapter.h>

@class NSDictionary;

@interface JVUnicomAdapter : JVOperatorAdapter
{
    NSDictionary *_responseDict;
    NSDictionary *_preLoginResult;
    double _preLoginTime;
}

+ (void)customUIWithConfig:(id)arg1 customViews:(CDUnknownBlockType)arg2;
+ (void)setDebug:(_Bool)arg1;
@property(nonatomic) double preLoginTime; // @synthesize preLoginTime=_preLoginTime;
@property(retain, nonatomic) NSDictionary *preLoginResult; // @synthesize preLoginResult=_preLoginResult;
@property(retain, nonatomic) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
- (void).cxx_destruct;
- (void)clearCache;
- (_Bool)confirmPhoneNumber:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)reportData;
- (void)handleResult:(id)arg1;
- (void)handleAuthorizationResult:(id)arg1;
- (void)handlePhonenumberResult:(id)arg1;
- (_Bool)getPhonenumber:(id)arg1;
- (_Bool)getAuthorizationFromController:(id)arg1;
- (void)dismissLoginController;
- (_Bool)presentVerificaitonController:(id)arg1;
- (_Bool)authorization:(id)arg1;
- (_Bool)preLogin:(id)arg1;
- (_Bool)accessCode:(CDUnknownBlockType)arg1;

@end

