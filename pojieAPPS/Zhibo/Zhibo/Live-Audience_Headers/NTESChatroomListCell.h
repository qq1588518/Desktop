//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NTESChatroomListCellInfoView, UIImageView;

@interface NTESChatroomListCell : UICollectionViewCell
{
    UIImageView *_coverImageView;
    NTESChatroomListCellInfoView *_infoView;
}

@property(retain, nonatomic) NTESChatroomListCellInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refresh:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

