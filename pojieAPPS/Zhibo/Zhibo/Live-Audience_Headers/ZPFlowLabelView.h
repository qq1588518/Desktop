//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSMutableArray;
@protocol ZPFlowLabelViewDelegate;

@interface ZPFlowLabelView : UICollectionReusableView
{
    NSMutableArray *_dataArray;
    id <ZPFlowLabelViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ZPFlowLabelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)clickbtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

