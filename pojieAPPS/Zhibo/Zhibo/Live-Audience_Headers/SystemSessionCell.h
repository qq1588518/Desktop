//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NTESCustomNotificationObject, UILabel, UITextView, UIView;

@interface SystemSessionCell : UITableViewCell
{
    NTESCustomNotificationObject *_notification;
    UILabel *_timeLabel;
    UIView *_content;
    UITextView *_contentTextView;
}

@property(nonatomic) __weak UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak UIView *content; // @synthesize content=_content;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NTESCustomNotificationObject *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

