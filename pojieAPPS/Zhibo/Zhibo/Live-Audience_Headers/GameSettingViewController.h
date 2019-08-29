//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class JVFloatLabeledTextField, NSIndexPath, NSMutableArray, NSNumber, NSString, RACSubject, UIButton, UICollectionView, UIView;

@interface GameSettingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSString *currentGame;
    NSString *seleted_game_id;
    RACSubject *_dismissSubject;
    UIView *_backView;
    UIView *_contentView;
    UICollectionView *_gameCollectionView;
    NSMutableArray *_dataSorce;
    NSIndexPath *_selectedIndexPath;
    JVFloatLabeledTextField *_oneTextField;
    JVFloatLabeledTextField *_twoTextField;
    JVFloatLabeledTextField *_threeTextField;
    NSNumber *_selectedTipTag;
    UIView *_openShowTipView;
    UIView *_closeShowTipView;
    UIButton *_resetButton;
    UIButton *_confirmButton;
}

+ (id)instance;
@property(nonatomic) __weak UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(nonatomic) __weak UIView *closeShowTipView; // @synthesize closeShowTipView=_closeShowTipView;
@property(nonatomic) __weak UIView *openShowTipView; // @synthesize openShowTipView=_openShowTipView;
@property(retain, nonatomic) NSNumber *selectedTipTag; // @synthesize selectedTipTag=_selectedTipTag;
@property(nonatomic) __weak JVFloatLabeledTextField *threeTextField; // @synthesize threeTextField=_threeTextField;
@property(nonatomic) __weak JVFloatLabeledTextField *twoTextField; // @synthesize twoTextField=_twoTextField;
@property(nonatomic) __weak JVFloatLabeledTextField *oneTextField; // @synthesize oneTextField=_oneTextField;
@property(nonatomic) __weak NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSMutableArray *dataSorce; // @synthesize dataSorce=_dataSorce;
@property(nonatomic) __weak UICollectionView *gameCollectionView; // @synthesize gameCollectionView=_gameCollectionView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) RACSubject *dismissSubject; // @synthesize dismissSubject=_dismissSubject;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dismiss;
- (void)show;
- (id)updateGame_Profit;
- (id)updateGame_flag:(id)arg1;
- (id)updateGame_type;
- (void)reset;
- (void)updateGame;
- (void)switchTip;
- (id)gameConfigSignal;
- (id)gameListSignal;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

