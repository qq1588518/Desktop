//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NIMMessage, NSMutableArray, NSString, UICollectionView, UISegmentedControl;

@interface NTESTeamReceiptDetailViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UISegmentedControl *_segmentControl;
    UICollectionView *_unreadUsers;
    UICollectionView *_readUsers;
    NIMMessage *_message;
    NSMutableArray *_readMembers;
    NSMutableArray *_unreadMembers;
}

@property(retain, nonatomic) NSMutableArray *unreadMembers; // @synthesize unreadMembers=_unreadMembers;
@property(retain, nonatomic) NSMutableArray *readMembers; // @synthesize readMembers=_readMembers;
@property(retain, nonatomic) NIMMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) UICollectionView *readUsers; // @synthesize readUsers=_readUsers;
@property(retain, nonatomic) UICollectionView *unreadUsers; // @synthesize unreadUsers=_unreadUsers;
@property(retain, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
- (void).cxx_destruct;
- (long long)collectionItemNumber;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)indexPathForData:(id)arg1 collectionView:(id)arg2;
- (id)dataAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)data:(id)arg1;
- (void)request;
- (void)refreshOnSegment:(id)arg1;
- (void)onSegmentChanged:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

