//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/XGJceObjectV2.h>

@class NSString;

@interface XGTpnsReportCornerMarkReq : XGJceObjectV2
{
    unsigned int jcev2_p_0_r_accessId;
    unsigned int jcev2_p_1_r_cornerMark;
    NSString *jcev2_p_2_r_token;
    long long jcev2_p_3_o_guid;
    NSString *jcev2_p_4_o_sdkVersion;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_sdkVersion, setter=setJce_sdkVersion:) NSString *jcev2_p_4_o_sdkVersion; // @synthesize jcev2_p_4_o_sdkVersion;
@property(nonatomic, getter=jce_guid, setter=setJce_guid:) long long jcev2_p_3_o_guid; // @synthesize jcev2_p_3_o_guid;
@property(retain, nonatomic, getter=jce_token, setter=setJce_token:) NSString *jcev2_p_2_r_token; // @synthesize jcev2_p_2_r_token;
@property(nonatomic, getter=jce_cornerMark, setter=setJce_cornerMark:) unsigned int jcev2_p_1_r_cornerMark; // @synthesize jcev2_p_1_r_cornerMark;
@property(nonatomic, getter=jce_accessId, setter=setJce_accessId:) unsigned int jcev2_p_0_r_accessId; // @synthesize jcev2_p_0_r_accessId;
- (void).cxx_destruct;
- (id)init;

@end

