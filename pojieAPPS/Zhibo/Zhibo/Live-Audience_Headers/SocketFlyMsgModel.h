//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SocketFlyMsgModel : NSObject
{
    NSString *_avatar;
    NSString *_content;
    NSString *_fly;
    NSString *_from_client_name;
    NSString *_from_user_id;
    NSString *_levelid;
    NSString *_time;
    NSString *_type;
    NSString *_vip;
}

@property(copy, nonatomic) NSString *vip; // @synthesize vip=_vip;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *levelid; // @synthesize levelid=_levelid;
@property(copy, nonatomic) NSString *from_user_id; // @synthesize from_user_id=_from_user_id;
@property(copy, nonatomic) NSString *from_client_name; // @synthesize from_client_name=_from_client_name;
@property(copy, nonatomic) NSString *fly; // @synthesize fly=_fly;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;

@end

