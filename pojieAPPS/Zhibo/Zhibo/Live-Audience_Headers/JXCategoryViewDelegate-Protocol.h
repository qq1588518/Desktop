//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JXCategoryBaseView;

@protocol JXCategoryViewDelegate <NSObject>

@optional
- (void)categoryView:(JXCategoryBaseView *)arg1 scrollingFromLeftIndex:(long long)arg2 toRightIndex:(long long)arg3 ratio:(double)arg4;
- (void)categoryView:(JXCategoryBaseView *)arg1 contentScrollViewTransitionToIndex:(long long)arg2;
- (void)categoryView:(JXCategoryBaseView *)arg1 didScrollSelectedItemAtIndex:(long long)arg2;
- (void)categoryView:(JXCategoryBaseView *)arg1 didClickSelectedItemAtIndex:(long long)arg2;
- (void)categoryView:(JXCategoryBaseView *)arg1 didSelectedItemAtIndex:(long long)arg2;
@end

