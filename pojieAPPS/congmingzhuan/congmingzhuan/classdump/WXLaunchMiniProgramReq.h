//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/BaseReq.h>

@class NSString;

@interface WXLaunchMiniProgramReq : BaseReq
{
    NSString *_userName;
    NSString *_path;
    unsigned long long _miniProgramType;
    NSString *_extMsg;
}

+ (id)object;
@property(copy, nonatomic) NSString *extMsg; // @synthesize extMsg=_extMsg;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

@end

