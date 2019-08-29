//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QYCustomContentView, QYCustomModel, UIImageView, UILongPressGestureRecognizer, YSFAvatarImageView;
@protocol QYCustomContentViewDelegate;

@interface YSFCustomMessageCell : UITableViewCell
{
    QYCustomModel *_model;
    id <QYCustomContentViewDelegate> _messageDelegate;
    YSFAvatarImageView *_avatarView;
    UIImageView *_bubbleView;
    QYCustomContentView *_customContentView;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) QYCustomContentView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) YSFAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <QYCustomContentViewDelegate> messageDelegate; // @synthesize messageDelegate=_messageDelegate;
@property(retain, nonatomic) QYCustomModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)highlightedBubbleImage;
- (id)normalBubbleImage;
- (struct CGSize)bubbleViewSize:(id)arg1 maxWidth:(double)arg2;
- (void)resetCustomContentView;
- (void)longGesturePress:(id)arg1;
- (void)onTapAvatar:(id)arg1;
- (void)refreshSubviews;
- (void)layoutSubviews;
- (void)refreshLayout;
- (void)refreshData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
