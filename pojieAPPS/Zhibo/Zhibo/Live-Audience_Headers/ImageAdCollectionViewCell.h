//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ImageAdModel, ImageAdView;

@interface ImageAdCollectionViewCell : UICollectionViewCell
{
    ImageAdModel *_imageAdModel;
    ImageAdView *_imageView;
}

@property(retain, nonatomic) ImageAdView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) ImageAdModel *imageAdModel; // @synthesize imageAdModel=_imageAdModel;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
