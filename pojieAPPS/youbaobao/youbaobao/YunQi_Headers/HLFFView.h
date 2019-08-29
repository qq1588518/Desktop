//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HLVBaseView.h"

@class NSTimer, UIImageView, UILabel, UIProgressView, UIView;

@interface HLFFView : HLVBaseView
{
    _Bool _animating;
    _Bool _waiting;
    float _time;
    float _total;
    UIProgressView *_progressView;
    NSTimer *_timer;
    UIImageView *_imageView;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    UILabel *_separatorLabel;
    UIView *_backgroundView;
}

+ (void)hideFFView;
+ (float)currentTime;
+ (void)fastForwardEnded;
+ (void)fastForwardChanged:(float)arg1;
+ (void)fastForwardBegan:(float)arg1 total:(float)arg2;
+ (id)defaultFFView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *separatorLabel; // @synthesize separatorLabel=_separatorLabel;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) float total; // @synthesize total=_total;
@property(nonatomic) float time; // @synthesize time=_time;
- (void).cxx_destruct;
- (void)updateProgress;
- (void)hideFFViewImmediately;
- (void)hide;
- (void)timerExpired;
- (void)restartTimer;
- (void)show:(_Bool)arg1;
- (void)sendUpdateRequest:(_Bool)arg1;
- (void)layoutForOrientation:(long long)arg1;
- (id)initWithTheme:(id)arg1;

@end
