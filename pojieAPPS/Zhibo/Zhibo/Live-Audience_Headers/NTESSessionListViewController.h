//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NIMSessionListViewController.h"

#import "NIMChatManagerDelegate-Protocol.h"
#import "NIMEventSubscribeManagerDelegate-Protocol.h"
#import "NIMLoginManagerDelegate-Protocol.h"
#import "NIMSystemNotificationManagerDelegate-Protocol.h"
#import "NTESListHeaderDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class NIMSessionListHeaderView, NSMutableDictionary, NSString, NTESListHeader, UILabel;

@interface NTESSessionListViewController : NIMSessionListViewController <NIMLoginManagerDelegate, NIMSystemNotificationManagerDelegate, NIMChatManagerDelegate, NTESListHeaderDelegate, NIMEventSubscribeManagerDelegate, UIViewControllerPreviewingDelegate>
{
    _Bool _supportsForceTouch;
    UILabel *_titleLabel;
    NTESListHeader *_header;
    NSMutableDictionary *_previews;
    NIMSessionListHeaderView *_listHeaderView;
}

@property(retain, nonatomic) NIMSessionListHeaderView *listHeaderView; // @synthesize listHeaderView=_listHeaderView;
@property(retain, nonatomic) NSMutableDictionary *previews; // @synthesize previews=_previews;
@property(nonatomic) _Bool supportsForceTouch; // @synthesize supportsForceTouch=_supportsForceTouch;
@property(retain, nonatomic) NTESListHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)checkOnlineState:(id)arg1 content:(id)arg2;
- (void)checkNeedAtTip:(id)arg1 content:(id)arg2;
- (id)contentForRecentSession:(id)arg1;
- (id)titleView;
- (void)refreshSubview;
- (void)onSystemNotificationCountChanged:(long long)arg1;
- (void)onRecvMessages:(id)arg1;
- (void)onRecvSubscribeEvents:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onMultiLoginClientsChanged;
- (void)onLogin:(long long)arg1;
- (void)didSelectRowType:(long long)arg1;
- (id)customSortRecents:(id)arg1;
- (id)nameForRecentSession:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)onTopRecentAtIndexPath:(id)arg1 atIndexPath:(id)arg2 isTop:(_Bool)arg3;
- (void)onDeleteRecentAtIndexPath:(id)arg1 atIndexPath:(id)arg2;
- (void)onSelectedAvatar:(id)arg1 atIndexPath:(id)arg2;
- (void)onSelectedRecent:(id)arg1 atIndexPath:(id)arg2;
- (void)more:(id)arg1;
- (void)refresh;
- (void)setUpNavItem;
- (void)refreshUnreadCount;
- (void)clickPushSearchVC;
- (void)contactClick;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
