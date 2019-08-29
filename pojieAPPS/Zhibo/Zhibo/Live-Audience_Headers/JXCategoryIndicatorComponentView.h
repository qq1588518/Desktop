//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JXCategoryIndicatorProtocol-Protocol.h"

@class NSString;

@interface JXCategoryIndicatorComponentView : UIView <JXCategoryIndicatorProtocol>
{
    _Bool _scrollEnabled;
    unsigned long long _componentPosition;
    double _verticalMargin;
}

@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(nonatomic) unsigned long long componentPosition; // @synthesize componentPosition=_componentPosition;
- (void)jx_selectedCell:(struct CGRect)arg1 clickedRelativePosition:(unsigned long long)arg2;
- (void)jx_contentScrollViewDidScrollWithLeftCellFrame:(struct CGRect)arg1 rightCellFrame:(struct CGRect)arg2 selectedPosition:(unsigned long long)arg3 percent:(double)arg4;
- (void)jx_refreshState:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

