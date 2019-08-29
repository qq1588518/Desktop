//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/GrowingWindowView.h>

#import <OfferWallBase/GrowingEventManagerObserver-Protocol.h>

@class GrowingEventListMenuPopView, GrowingImageCache, NSMutableArray, NSString, UIViewController;

@interface GrowingEventListMenu : GrowingWindowView <GrowingEventManagerObserver>
{
    _Bool _showTable;
    GrowingImageCache *_imageCache;
    NSMutableArray *_allEventItems;
    UIViewController *_viewController;
    GrowingEventListMenuPopView *_popView;
}

+ (void)stopTrack;
+ (void)hide;
+ (void)startTrack;
+ (_Bool)isStart;
+ (void)clearAllEvent;
+ (_Bool)isReplay;
+ (void)setIsReplay:(_Bool)arg1;
@property(nonatomic) _Bool showTable; // @synthesize showTable=_showTable;
@property(retain, nonatomic) GrowingEventListMenuPopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSMutableArray *allEventItems; // @synthesize allEventItems=_allEventItems;
@property(retain, nonatomic) GrowingImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)_growingEventManagerWillAddEvent:(id)arg1 thisNode:(id)arg2 triggerNode:(id)arg3 withContext:(id)arg4;
- (void)popTipWithTitle:(id)arg1 eventType:(long long)arg2;
- (void)setGrowingEventListItem:(id)arg1 image:(id)arg2;
- (id)lastEventItem;
- (id)addItemIntoAllEventsItems:(id)arg1 type:(long long)arg2;
- (void)growingEventManagerWillAddEvent:(id)arg1 thisNode:(id)arg2 triggerNode:(id)arg3 withContext:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

