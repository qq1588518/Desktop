//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class GrowingChildContentPanel, GrowingEventListItem, UIImage;
@protocol GrowingNode;

@protocol GrowingEventListAction <NSObject>
- (UIImage *)replay_screenShotWithTriggerNode:(id <GrowingNode>)arg1 thisNode:(id <GrowingNode>)arg2 item:(GrowingEventListItem *)arg3;
- (UIImage *)eventlist_screenShotWithTriggerNode:(id <GrowingNode>)arg1 thisNode:(id <GrowingNode>)arg2 item:(GrowingEventListItem *)arg3;
- (_Bool)eventlist_item:(GrowingEventListItem *)arg1 canShowWithStyle:(long long)arg2;
- (void)eventlist_addElementFromItem:(GrowingEventListItem *)arg1 chartStyle:(long long)arg2 forPanel:(GrowingChildContentPanel *)arg3;
@end

