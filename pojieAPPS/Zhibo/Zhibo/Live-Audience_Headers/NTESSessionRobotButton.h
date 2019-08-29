//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface NTESSessionRobotButton : UIButton
{
    NSString *_target;
    NSString *_url;
    NSString *_param;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *param; // @synthesize param=_param;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (double)itemSpacing;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

