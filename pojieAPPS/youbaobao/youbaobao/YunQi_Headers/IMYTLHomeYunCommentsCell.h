//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYTLHomeYunCommentCellModel, UIImageView, UILabel, UIView;

@interface IMYTLHomeYunCommentsCell : UITableViewCell
{
    IMYTLHomeYunCommentCellModel *_model;
    CDUnknownBlockType _selectedBlock;
    UIImageView *_emojImgView;
    UILabel *_lable;
    UIView *_bgView;
    UILabel *_emojLable;
}

@property(retain, nonatomic) UILabel *emojLable; // @synthesize emojLable=_emojLable;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *lable; // @synthesize lable=_lable;
@property(retain, nonatomic) UIImageView *emojImgView; // @synthesize emojImgView=_emojImgView;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) IMYTLHomeYunCommentCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
