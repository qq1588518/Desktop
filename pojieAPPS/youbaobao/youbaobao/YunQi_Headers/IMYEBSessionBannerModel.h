//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYEBSessionBannerModel : NSObject
{
    long long _id;
    NSString *_name;
    NSString *_picture;
    NSString *_redirect_url;
}

@property(retain, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(retain, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end
