//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SegmentsModel, UILabel, UIView;

@interface SegmentsCell : UITableViewCell
{
    SegmentsModel *_model;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    UILabel *_numberLabel;
    UILabel *_biaoqianLabel;
    UIView *_xiaHuaXian;
}

@property(retain, nonatomic) UIView *xiaHuaXian; // @synthesize xiaHuaXian=_xiaHuaXian;
@property(retain, nonatomic) UILabel *biaoqianLabel; // @synthesize biaoqianLabel=_biaoqianLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SegmentsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)compareCurrentTime:(id)arg1;
- (void)DDSetTitle;
- (void)initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

