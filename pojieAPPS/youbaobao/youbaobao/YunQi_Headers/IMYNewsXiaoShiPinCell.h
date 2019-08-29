//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IMYAvatarImageView, IMYNewsXiaoShiPinLoadingStateView, IMYRecommendNewsModel, IMYTouchEXButton, RACDisposable, UIImageView, UILabel, UIView;
@protocol SDWebImageOperation;

@interface IMYNewsXiaoShiPinCell : UICollectionViewCell
{
    CDUnknownBlockType _refreshCell;
    CDUnknownBlockType _longPresssCoverViewAction;
    UIView *_contentBgView;
    UIImageView *_corverView;
    UIView *_infoView;
    IMYAvatarImageView *_avatarImageView;
    IMYTouchEXButton *_avatarImageButton;
    UIImageView *_vipIcon;
    UILabel *_nickNameLabel;
    UILabel *_titleLabel;
    UIImageView *_playIcon;
    UILabel *_playCountLabel;
    IMYNewsXiaoShiPinLoadingStateView *_loadingStateView;
    IMYRecommendNewsModel *_newsModel;
    RACDisposable *_stateDisposable;
    RACDisposable *_progressDisposable;
    unsigned long long _lastState;
    UIView *_promptView;
    id <SDWebImageOperation> _gifDownloadOperation;
}

@property(nonatomic) __weak id <SDWebImageOperation> gifDownloadOperation; // @synthesize gifDownloadOperation=_gifDownloadOperation;
@property(retain, nonatomic) UIView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) unsigned long long lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) RACDisposable *progressDisposable; // @synthesize progressDisposable=_progressDisposable;
@property(retain, nonatomic) RACDisposable *stateDisposable; // @synthesize stateDisposable=_stateDisposable;
@property(nonatomic) __weak IMYRecommendNewsModel *newsModel; // @synthesize newsModel=_newsModel;
@property(retain, nonatomic) IMYNewsXiaoShiPinLoadingStateView *loadingStateView; // @synthesize loadingStateView=_loadingStateView;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *vipIcon; // @synthesize vipIcon=_vipIcon;
@property(retain, nonatomic) IMYTouchEXButton *avatarImageButton; // @synthesize avatarImageButton=_avatarImageButton;
@property(retain, nonatomic) IMYAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIImageView *corverView; // @synthesize corverView=_corverView;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(copy, nonatomic) CDUnknownBlockType longPresssCoverViewAction; // @synthesize longPresssCoverViewAction=_longPresssCoverViewAction;
@property(copy, nonatomic) CDUnknownBlockType refreshCell; // @synthesize refreshCell=_refreshCell;
- (void).cxx_destruct;
- (id)countStringWithCount:(long long)arg1;
- (void)refreshWith:(id)arg1;
- (void)longPressCoverView:(id)arg1;
- (void)prepareUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
