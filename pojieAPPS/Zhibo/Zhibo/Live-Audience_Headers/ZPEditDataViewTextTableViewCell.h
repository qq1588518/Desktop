//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface ZPEditDataViewTextTableViewCell : UITableViewCell
{
    unsigned long long _arrowTyp;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_arrowImage;
    UIImageView *_sexImage;
}

@property(retain, nonatomic) UIImageView *sexImage; // @synthesize sexImage=_sexImage;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long arrowTyp; // @synthesize arrowTyp=_arrowTyp;
- (void).cxx_destruct;
- (void)setUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

