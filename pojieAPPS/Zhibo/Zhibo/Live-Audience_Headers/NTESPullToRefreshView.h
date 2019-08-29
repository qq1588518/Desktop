//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NTESPullToRefreshArrow, UIActivityIndicatorView, UIColor, UILabel, UIScrollView;

@interface NTESPullToRefreshView : UIView
{
    _Bool _showsPullToRefresh;
    _Bool _wasTriggeredByUser;
    _Bool _showsDateLabel;
    _Bool _isObserving;
    CDUnknownBlockType pullToRefreshActionHandler;
    UIColor *arrowColor;
    UIColor *textColor;
    UIColor *activityIndicatorViewColor;
    long long activityIndicatorViewStyle;
    unsigned long long _state;
    UIScrollView *_scrollView;
    NTESPullToRefreshArrow *_arrow;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_titleLabel;
    unsigned long long _position;
    UILabel *_subtitleLabel;
    NSMutableArray *_titles;
    NSMutableArray *_subtitles;
    NSMutableArray *_viewForState;
    double _originalTopInset;
    double _originalBottomInset;
}

@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) _Bool showsDateLabel; // @synthesize showsDateLabel=_showsDateLabel;
@property(nonatomic) _Bool wasTriggeredByUser; // @synthesize wasTriggeredByUser=_wasTriggeredByUser;
@property(nonatomic) double originalBottomInset; // @synthesize originalBottomInset=_originalBottomInset;
@property(nonatomic) double originalTopInset; // @synthesize originalTopInset=_originalTopInset;
@property(retain, nonatomic) NSMutableArray *viewForState; // @synthesize viewForState=_viewForState;
@property(retain, nonatomic) NSMutableArray *subtitles; // @synthesize subtitles=_subtitles;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NTESPullToRefreshArrow *arrow; // @synthesize arrow=_arrow;
@property(nonatomic) _Bool showsPullToRefresh; // @synthesize showsPullToRefresh=_showsPullToRefresh;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType pullToRefreshActionHandler; // @synthesize pullToRefreshActionHandler;
- (void).cxx_destruct;
- (void)rotateArrow:(float)arg1 hide:(_Bool)arg2;
- (void)stopAnimating;
- (void)startAnimating;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle;
@property(retain, nonatomic) UIColor *activityIndicatorViewColor; // @synthesize activityIndicatorViewColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
- (void)setCustomView:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIColor *arrowColor; // @synthesize arrowColor;
- (id)dateLabel;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setScrollViewContentInsetForLoading;
- (void)resetScrollViewContentInset;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

