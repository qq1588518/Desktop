//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, RACSubject, UIButton, UITableView, UserModel;

@interface MessageView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id taskBlock;
    UITableView *_messageTableView;
    UserModel *_anchorModel;
    RACSubject *_didClickMessageSubject;
    NSMutableArray *_messageArray;
    UIButton *_unreadButton;
    long long _unreadCount;
}

@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) UIButton *unreadButton; // @synthesize unreadButton=_unreadButton;
@property(retain, nonatomic) NSMutableArray *messageArray; // @synthesize messageArray=_messageArray;
@property(retain, nonatomic) RACSubject *didClickMessageSubject; // @synthesize didClickMessageSubject=_didClickMessageSubject;
@property(retain, nonatomic) UserModel *anchorModel; // @synthesize anchorModel=_anchorModel;
@property(retain, nonatomic) UITableView *messageTableView; // @synthesize messageTableView=_messageTableView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)addMessageDict:(id)arg1;
- (void)hideUnreadButton;
- (void)updateUnreadButton;
- (void)addMessage:(id)arg1;
- (void)setupUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

