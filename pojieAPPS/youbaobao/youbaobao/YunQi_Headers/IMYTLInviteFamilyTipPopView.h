//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton, UIButton, UIImageView, UILabel;

@interface IMYTLInviteFamilyTipPopView : UIView
{
    UIView *_bgView;
    UIView *_contentView;
    UILabel *_titleLabel;
    IMYButton *_inviteBtn;
    UIButton *_cancelBtn;
    UIView *_line;
    UIImageView *_onePhoto;
    UIImageView *_threePhoto1;
    UIImageView *_threePhoto2;
    UIImageView *_threePhoto3;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) __weak UIImageView *threePhoto3; // @synthesize threePhoto3=_threePhoto3;
@property(nonatomic) __weak UIImageView *threePhoto2; // @synthesize threePhoto2=_threePhoto2;
@property(nonatomic) __weak UIImageView *threePhoto1; // @synthesize threePhoto1=_threePhoto1;
@property(nonatomic) __weak UIImageView *onePhoto; // @synthesize onePhoto=_onePhoto;
@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak IMYButton *inviteBtn; // @synthesize inviteBtn=_inviteBtn;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)setImageView:(id)arg1 image:(id)arg2;
- (id)getImageWithEventID:(long long)arg1;
- (void)hideView;
- (void)showView;
- (void)updateTitle:(id)arg1 btnTitle:(id)arg2 eventID:(long long)arg3 okHandle:(CDUnknownBlockType)arg4;
- (void)inviteBtnAction:(id)arg1;
- (void)cancelBtnAction:(id)arg1;
- (void)awakeFromNib;

@end
