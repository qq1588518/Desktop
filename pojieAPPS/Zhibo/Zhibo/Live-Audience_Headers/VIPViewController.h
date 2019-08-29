//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DZNEmptyDataSetDelegate-Protocol.h"
#import "DZNEmptyDataSetSource-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, RACSubject, UILabel, UITableView, UIView;

@interface VIPViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
{
    int _page;
    _Bool noMoreData;
    RACSubject *_dismissSubject;
    NSString *_anchorID;
    NSString *_roomID;
    UILabel *_headerLabel;
    UIView *_backView;
    UIView *_contentView;
    UIView *_headerView;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSString *anchorID; // @synthesize anchorID=_anchorID;
@property(retain, nonatomic) RACSubject *dismissSubject; // @synthesize dismissSubject=_dismissSubject;
- (void).cxx_destruct;
- (_Bool)emptyDataSetShouldAllowScroll:(id)arg1;
- (id)titleForEmptyDataSet:(id)arg1;
- (_Bool)emptyDataSetShouldDisplay:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dismiss;
- (void)show;
- (void)loadData;
- (void)pullToRefresh;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

