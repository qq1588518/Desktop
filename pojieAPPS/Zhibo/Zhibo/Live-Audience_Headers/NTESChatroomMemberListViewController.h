//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NIMChatManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NIMChatroom, NSMutableArray, NSString, UITableView;

@interface NTESChatroomMemberListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NIMChatManagerDelegate>
{
    UITableView *_tableView;
    NIMChatroom *_chatroom;
    long long _limit;
    NSMutableArray *_members;
}

@property(retain, nonatomic) NSMutableArray *members; // @synthesize members=_members;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NIMChatroom *chatroom; // @synthesize chatroom=_chatroom;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)cellReuseIdentifier;
- (void)sortMember;
- (void)requestTeamMembers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)kickMemberAtIndexPath:(id)arg1;
- (void)appointManagerAtIndexPath:(id)arg1 isManager:(_Bool)arg2;
- (void)updateMuteListAtIndexPath:(id)arg1 isMute:(_Bool)arg2;
- (void)updateBlackListAtIndexPath:(id)arg1 isBlack:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)loadMoreData;
- (void)prepareData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithChatroom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

