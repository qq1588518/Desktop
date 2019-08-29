//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveGiftShowCustom, NSMutableArray, NSTimer;

@interface LiveGiftShowCustomManager : NSObject
{
    LiveGiftShowCustom *_customGiftShow;
    NSMutableArray *_modelArray;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(nonatomic) __weak LiveGiftShowCustom *customGiftShow; // @synthesize customGiftShow=_customGiftShow;
- (void).cxx_destruct;
- (void)addModel;
- (void)addGiftModel:(id)arg1;
- (id)initWithView:(id)arg1;

@end

