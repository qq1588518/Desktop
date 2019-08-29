//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NIMMessageCellFactory, NSString;
@protocol NIMMessageCellDelegate, NIMSessionInteractor;

@interface NIMSessionTableAdapter : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    id <NIMSessionInteractor> _interactor;
    id <NIMMessageCellDelegate> _delegate;
    NIMMessageCellFactory *_cellFactory;
}

@property(retain, nonatomic) NIMMessageCellFactory *cellFactory; // @synthesize cellFactory=_cellFactory;
@property(nonatomic) __weak id <NIMMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NIMSessionInteractor> interactor; // @synthesize interactor=_interactor;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

