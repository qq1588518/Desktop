//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSString;

@interface TTQHome5CircleItemModel : NSObject <YYJSONHelperProtocol>
{
    _Bool _ADDItem;
    NSString *_icon;
    NSString *_title;
    NSString *_name;
    NSString *_redirect_url;
    NSString *_bg_image;
    NSString *_brand_image;
}

@property(nonatomic, getter=isADDItem) _Bool ADDItem; // @synthesize ADDItem=_ADDItem;
@property(copy, nonatomic) NSString *brand_image; // @synthesize brand_image=_brand_image;
@property(copy, nonatomic) NSString *bg_image; // @synthesize bg_image=_bg_image;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (_Bool)isMoreItem;

@end
