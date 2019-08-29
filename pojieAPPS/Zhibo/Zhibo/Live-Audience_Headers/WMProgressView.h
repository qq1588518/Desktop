//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray;

@interface WMProgressView : UIView
{
    int sign;
    double gap;
    double step;
    CADisplayLink *_link;
    NSArray *_itemFrames;
    struct CGColor *_color;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) struct CGColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSArray *itemFrames; // @synthesize itemFrames=_itemFrames;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)progressChanged;
- (void)moveToPostion:(long long)arg1;
- (void)setProgressWithOutAnimate:(double)arg1;

@end

