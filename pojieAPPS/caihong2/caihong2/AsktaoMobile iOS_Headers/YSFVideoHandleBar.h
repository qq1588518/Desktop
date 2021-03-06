//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, YSFVideoProgressView;
@protocol YSFVideoHandleBarDelegate;

@interface YSFVideoHandleBar : UIView
{
    id <YSFVideoHandleBarDelegate> _delegate;
    YSFVideoProgressView *_progressView;
    UIButton *_playButton;
    UILabel *_curTimeLabel;
    UILabel *_totalTimeLabel;
    UIButton *_clickButton;
}

@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *curTimeLabel; // @synthesize curTimeLabel=_curTimeLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) YSFVideoProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <YSFVideoHandleBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)convertTimeString:(long long)arg1;
- (void)clickButton:(id)arg1;
- (void)clickPlayButton:(id)arg1;
- (void)updatePlayButton:(_Bool)arg1;
- (void)updateCurTime:(double)arg1 totalTime:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

