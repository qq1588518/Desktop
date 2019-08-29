//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JXCategoryIndicatorComponentView.h"

@class UIColor;

@interface JXCategoryIndicatorLineView : JXCategoryIndicatorComponentView
{
    unsigned long long _lineStyle;
    double _lineScrollOffsetX;
    double _indicatorLineViewHeight;
    double _indicatorLineWidth;
    double _indicatorLineViewCornerRadius;
    UIColor *_indicatorLineViewColor;
}

@property(retain, nonatomic) UIColor *indicatorLineViewColor; // @synthesize indicatorLineViewColor=_indicatorLineViewColor;
@property(nonatomic) double indicatorLineViewCornerRadius; // @synthesize indicatorLineViewCornerRadius=_indicatorLineViewCornerRadius;
@property(nonatomic) double indicatorLineWidth; // @synthesize indicatorLineWidth=_indicatorLineWidth;
@property(nonatomic) double indicatorLineViewHeight; // @synthesize indicatorLineViewHeight=_indicatorLineViewHeight;
@property(nonatomic) double lineScrollOffsetX; // @synthesize lineScrollOffsetX=_lineScrollOffsetX;
@property(nonatomic) unsigned long long lineStyle; // @synthesize lineStyle=_lineStyle;
- (void).cxx_destruct;
- (double)getIndicatorLineViewWidth:(struct CGRect)arg1;
- (double)getIndicatorLineViewCornerRadius;
- (void)jx_selectedCell:(struct CGRect)arg1 clickedRelativePosition:(unsigned long long)arg2;
- (void)jx_contentScrollViewDidScrollWithLeftCellFrame:(struct CGRect)arg1 rightCellFrame:(struct CGRect)arg2 selectedPosition:(unsigned long long)arg3 percent:(double)arg4;
- (void)jx_refreshState:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

