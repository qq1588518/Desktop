//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RACSubject, UISlider;

@interface TigerSliderView : UIView
{
    RACSubject *_sliderSubject;
    UISlider *_slider;
}

+ (id)instance;
@property(nonatomic) __weak UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) RACSubject *sliderSubject; // @synthesize sliderSubject=_sliderSubject;
- (void).cxx_destruct;

@end

