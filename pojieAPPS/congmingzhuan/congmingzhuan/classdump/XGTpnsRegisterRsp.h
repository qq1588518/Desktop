//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/XGJceObjectV2.h>

@class NSString;

@interface XGTpnsRegisterRsp : XGJceObjectV2
{
    unsigned int jcev2_p_0_r_confVersion;
    NSString *jcev2_p_1_r_token;
    long long jcev2_p_2_o_guid;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_guid, setter=setJce_guid:) long long jcev2_p_2_o_guid; // @synthesize jcev2_p_2_o_guid;
@property(retain, nonatomic, getter=jce_token, setter=setJce_token:) NSString *jcev2_p_1_r_token; // @synthesize jcev2_p_1_r_token;
@property(nonatomic, getter=jce_confVersion, setter=setJce_confVersion:) unsigned int jcev2_p_0_r_confVersion; // @synthesize jcev2_p_0_r_confVersion;
- (void).cxx_destruct;
- (id)init;

@end

