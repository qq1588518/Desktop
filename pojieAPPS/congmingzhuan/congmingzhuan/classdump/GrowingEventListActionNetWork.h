//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/GrowingEventListAction-Protocol.h>

@class NSString;

@interface GrowingEventListActionNetWork : NSObject <GrowingEventListAction>
{
}

- (id)replay_screenShotWithTriggerNode:(id)arg1 thisNode:(id)arg2 item:(id)arg3;
- (id)eventlist_screenShotWithTriggerNode:(id)arg1 thisNode:(id)arg2 item:(id)arg3;
- (void)eventlist_addElementFromItem:(id)arg1 chartStyle:(long long)arg2 forPanel:(id)arg3;
- (_Bool)eventlist_item:(id)arg1 canShowWithStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

