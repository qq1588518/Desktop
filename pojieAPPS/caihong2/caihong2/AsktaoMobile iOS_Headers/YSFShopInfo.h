//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YSFShopSettingInfo;

@interface YSFShopInfo : NSObject
{
    _Bool _hasEmail;
    _Bool _hasMobile;
    _Bool _qiyuInfoSwitch;
    NSString *_shopId;
    NSString *_name;
    NSString *_logo;
    YSFShopSettingInfo *_setting;
}

+ (id)instanceByJson:(id)arg1;
@property(retain, nonatomic) YSFShopSettingInfo *setting; // @synthesize setting=_setting;
@property(nonatomic) _Bool qiyuInfoSwitch; // @synthesize qiyuInfoSwitch=_qiyuInfoSwitch;
@property(nonatomic) _Bool hasMobile; // @synthesize hasMobile=_hasMobile;
@property(nonatomic) _Bool hasEmail; // @synthesize hasEmail=_hasEmail;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (id)toDict;

@end
