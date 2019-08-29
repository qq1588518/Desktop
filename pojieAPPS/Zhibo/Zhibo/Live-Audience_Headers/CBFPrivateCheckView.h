//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, RACSubject, TTTAttributedLabel, UIButton, UIImageView, UILabel, UITextField, UserModel;

@interface CBFPrivateCheckView : UIViewController <TTTAttributedLabelDelegate>
{
    _Bool _hasPromoteAward;
    _Bool _hasCoin;
    CDUnknownBlockType _actionButtonComplete;
    CDUnknownBlockType _actionButtonOneComplete;
    RACSubject *_exitSubject;
    RACSubject *_labelClickSubject;
    UserModel *_model;
    UIButton *_exitBtn;
    UILabel *_titleLabel;
    UILabel *_typeLabel;
    UIImageView *_headImgView;
    UILabel *_nickLabel;
    UILabel *_privateInfo;
    UILabel *_privateLimitLabel;
    UITextField *_privateLimitTF;
    UIButton *_chargeBtn;
    UIButton *_actionButton;
    UIButton *_actionButtonOne;
    TTTAttributedLabel *_tipLabel;
    TTTAttributedLabel *_tipOneLabel;
}

@property(nonatomic) _Bool hasCoin; // @synthesize hasCoin=_hasCoin;
@property(nonatomic) _Bool hasPromoteAward; // @synthesize hasPromoteAward=_hasPromoteAward;
@property(retain, nonatomic) TTTAttributedLabel *tipOneLabel; // @synthesize tipOneLabel=_tipOneLabel;
@property(retain, nonatomic) TTTAttributedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *actionButtonOne; // @synthesize actionButtonOne=_actionButtonOne;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIButton *chargeBtn; // @synthesize chargeBtn=_chargeBtn;
@property(retain, nonatomic) UITextField *privateLimitTF; // @synthesize privateLimitTF=_privateLimitTF;
@property(retain, nonatomic) UILabel *privateLimitLabel; // @synthesize privateLimitLabel=_privateLimitLabel;
@property(retain, nonatomic) UILabel *privateInfo; // @synthesize privateInfo=_privateInfo;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *exitBtn; // @synthesize exitBtn=_exitBtn;
@property(retain, nonatomic) UserModel *model; // @synthesize model=_model;
@property(retain, nonatomic) RACSubject *labelClickSubject; // @synthesize labelClickSubject=_labelClickSubject;
@property(retain, nonatomic) RACSubject *exitSubject; // @synthesize exitSubject=_exitSubject;
@property(copy, nonatomic) CDUnknownBlockType actionButtonOneComplete; // @synthesize actionButtonOneComplete=_actionButtonOneComplete;
@property(copy, nonatomic) CDUnknownBlockType actionButtonComplete; // @synthesize actionButtonComplete=_actionButtonComplete;
- (void).cxx_destruct;
- (void)dealloc;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)alertAction;
- (void)actionButtonOneAction:(id)arg1;
- (void)actionButtonAction:(id)arg1;
- (void)completeAction;
- (void)exitAction;
- (void)setupUI;
- (void)viewDidLoad;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

