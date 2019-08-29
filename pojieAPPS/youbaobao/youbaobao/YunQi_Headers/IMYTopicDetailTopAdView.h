//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class IMYADCloseView, IMYCapsuleButton, UIImageView, UILabel;
@protocol IMYIAdvertiserModel;

@interface IMYTopicDetailTopAdView : IMYBaseAdView
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_titleLabel;
    IMYCapsuleButton *_downloadButton;
    IMYADCloseView *_closeButton;
    id <IMYIAdvertiserModel> _model;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) id <IMYIAdvertiserModel> model; // @synthesize model=_model;
@property(retain, nonatomic) IMYADCloseView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) IMYCapsuleButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)actionView;
- (id)tagView;
- (void)clickDownloadButton;
- (void)layoutWithModel:(id)arg1;
- (void)setupStyleDownload;
- (void)setupStyleTextAndImage;
- (void)setupStyleText;
- (void)closeWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)setupCloseButton;
- (void)setupSubviews;

@end
