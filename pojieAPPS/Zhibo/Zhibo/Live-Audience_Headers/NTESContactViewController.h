//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NIMContactDataCellDelegate-Protocol.h"
#import "NIMEventSubscribeManagerDelegate-Protocol.h"
#import "NIMLoginManagerDelegate-Protocol.h"
#import "NIMSystemNotificationManagerDelegate-Protocol.h"
#import "NIMUserManagerDelegate-Protocol.h"
#import "NTESContactUtilCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, NTESGroupedContacts, UIRefreshControl, UITableView;

@interface NTESContactViewController : UIViewController <NIMUserManagerDelegate, NIMSystemNotificationManagerDelegate, NTESContactUtilCellDelegate, NIMContactDataCellDelegate, NIMLoginManagerDelegate, NIMEventSubscribeManagerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIRefreshControl *_refreshControl;
    NTESGroupedContacts *_contacts;
    UITableView *_tableView;
    NSArray *_datas;
}

@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)presentMemberSelector:(CDUnknownBlockType)arg1;
- (void)enterPersonalCard:(id)arg1;
- (void)onRecvSubscribeEvents:(id)arg1;
- (void)refresh;
- (void)onMuteListChanged;
- (void)onBlackListChanged;
- (void)onFriendChanged:(id)arg1;
- (void)onUserInfoChanged:(id)arg1;
- (void)onLogin:(long long)arg1;
- (void)onSystemNotificationCountChanged:(long long)arg1;
- (void)didFinishedSelect:(id)arg1;
- (void)onPressUtilImage:(id)arg1;
- (void)onPressAvatar:(id)arg1;
- (void)deleteFried:(id)arg1;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onOpera:(id)arg1;
- (void)onEnterMyComputer;
- (void)prepareData;
- (void)clickPushSearchVC;
- (void)setUpNavItem;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

