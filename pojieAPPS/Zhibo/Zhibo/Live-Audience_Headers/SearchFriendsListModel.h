//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchFriendsListModel : NSObject
{
    _Bool _attention;
    NSString *_avatar;
    NSString *_bigpic;
    NSString *_broadcasting;
    NSString *_curroomnum;
    NSString *_level;
    NSString *_id;
    NSString *_intro;
    NSString *_nickname;
    NSString *_offlinevideo;
    NSString *_sex;
    NSString *_ucuid;
}

@property(copy, nonatomic) NSString *ucuid; // @synthesize ucuid=_ucuid;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *offlinevideo; // @synthesize offlinevideo=_offlinevideo;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) _Bool attention; // @synthesize attention=_attention;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *curroomnum; // @synthesize curroomnum=_curroomnum;
@property(copy, nonatomic) NSString *broadcasting; // @synthesize broadcasting=_broadcasting;
@property(copy, nonatomic) NSString *bigpic; // @synthesize bigpic=_bigpic;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;

@end

