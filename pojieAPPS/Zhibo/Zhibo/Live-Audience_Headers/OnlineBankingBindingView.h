//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField;

@interface OnlineBankingBindingView : UIView <UITextFieldDelegate>
{
    UITextField *_nameField;
    UITextField *_alipayField;
    UITextField *_moneyField;
    UITextField *_phoneNumField;
    UITextField *_contactInfoield;
    UILabel *_headLabel;
    UIButton *_submitBtn;
    UIButton *_closeBtn;
    UIButton *_huishou;
    double _money;
}

@property(nonatomic) double money; // @synthesize money=_money;
@property(retain, nonatomic) UIButton *huishou; // @synthesize huishou=_huishou;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) UITextField *contactInfoield; // @synthesize contactInfoield=_contactInfoield;
@property(retain, nonatomic) UITextField *phoneNumField; // @synthesize phoneNumField=_phoneNumField;
@property(retain, nonatomic) UITextField *moneyField; // @synthesize moneyField=_moneyField;
@property(retain, nonatomic) UITextField *alipayField; // @synthesize alipayField=_alipayField;
@property(retain, nonatomic) UITextField *nameField; // @synthesize nameField=_nameField;
- (void).cxx_destruct;
- (void)submitBtnTaped:(id)arg1;
- (void)dealloc;
- (void)keyboardDidlHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)addNotification;
- (void)huishou:(id)arg1;
- (void)closeBtnTaped:(id)arg1;
- (void)show;
- (void)initUi;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

