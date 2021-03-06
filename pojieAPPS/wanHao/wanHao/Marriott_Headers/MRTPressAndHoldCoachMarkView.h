//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MRTStyledButton, UIImageView, UILabel;

@interface MRTPressAndHoldCoachMarkView : UIView
{
    MRTStyledButton *_skipButton;
    UILabel *_messageLabel;
    UIImageView *_messageImageView;
    UIImageView *_arrowImageView;
}

@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UIImageView *messageImageView; // @synthesize messageImageView=_messageImageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) MRTStyledButton *skipButton; // @synthesize skipButton=_skipButton;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1 backgroundShapeImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configure:(id)arg1;

@end

