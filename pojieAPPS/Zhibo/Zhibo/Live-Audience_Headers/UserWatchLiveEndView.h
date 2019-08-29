//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIButton, UILabel, UIViewController, UserModel;
@protocol UserWatchLiveEndViewDeldegate;

@interface UserWatchLiveEndView : UIView
{
    NSMutableArray *_buttonArray;
    NSString *_shareName;
    NSArray *_shareNameArray;
    UserModel *_userModel;
    UIViewController *_superViewController;
    NSString *_client;
    NSString *_coin;
    id <UserWatchLiveEndViewDeldegate> _delegate;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_numberWatchLabel;
    UILabel *_revenuesLabel;
    UIButton *_backRoomBtn;
    UIButton *_guanzhuBtn;
    UIView *_shareBtnView;
    UILabel *_fenxiang;
}

@property(retain, nonatomic) UILabel *fenxiang; // @synthesize fenxiang=_fenxiang;
@property(retain, nonatomic) UIView *shareBtnView; // @synthesize shareBtnView=_shareBtnView;
@property(retain, nonatomic) UIButton *guanzhuBtn; // @synthesize guanzhuBtn=_guanzhuBtn;
@property(retain, nonatomic) UIButton *backRoomBtn; // @synthesize backRoomBtn=_backRoomBtn;
@property(retain, nonatomic) UILabel *revenuesLabel; // @synthesize revenuesLabel=_revenuesLabel;
@property(retain, nonatomic) UILabel *numberWatchLabel; // @synthesize numberWatchLabel=_numberWatchLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <UserWatchLiveEndViewDeldegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *coin; // @synthesize coin=_coin;
@property(retain, nonatomic) NSString *client; // @synthesize client=_client;
@property(retain, nonatomic) UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(retain, nonatomic) UserModel *userModel; // @synthesize userModel=_userModel;
- (void).cxx_destruct;
- (void)clickBtnNextLive;
- (void)clickguanzhu;
- (void)clickShareBtn:(id)arg1;
- (void)addShareBtn;
- (void)initialization;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

