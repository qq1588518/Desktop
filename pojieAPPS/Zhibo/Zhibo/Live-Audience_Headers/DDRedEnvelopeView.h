//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SendGiftModel, UIButton, UIImageView, UILabel;
@protocol DDRedEnvelopeViewDelegate;

@interface DDRedEnvelopeView : UIView
{
    double contentViewWidth;
    double contentViewHeight;
    id <DDRedEnvelopeViewDelegate> _delegate;
    SendGiftModel *_model;
    NSString *_curroomnum;
    UIView *_backgroundView;
    UIView *_contentView;
    UIButton *_closeBtn;
    UIImageView *_iocnImage;
    UILabel *_userNameLabel;
    UILabel *_titleLable;
    UIButton *_getHongBao;
}

@property(retain, nonatomic) UIButton *getHongBao; // @synthesize getHongBao=_getHongBao;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *iocnImage; // @synthesize iocnImage=_iocnImage;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *curroomnum; // @synthesize curroomnum=_curroomnum;
@property(retain, nonatomic) SendGiftModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <DDRedEnvelopeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAnimation;
- (void)addAnimation;
- (void)hide;
- (void)show;
- (void)clickedGethongBao:(id)arg1;
- (void)initContentView;
- (id)initWithRedEnvelopeViewWithRoomID:(id)arg1;

@end

