//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UILabel;

@interface IMYRecommentWeiboIconoButton : UIControl
{
    UILabel *_iconLabel;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
- (void).cxx_destruct;
- (void)setupBtnWithTitle:(id)arg1 iconText:(id)arg2;
- (void)setupBtnWithTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
