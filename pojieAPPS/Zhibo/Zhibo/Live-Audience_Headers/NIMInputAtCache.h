//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NIMInputAtCache : NSObject
{
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)matchString:(id)arg1;
- (id)removeName:(id)arg1;
- (id)item:(id)arg1;
- (void)addAtItem:(id)arg1;
- (void)clean;
- (id)allAtUid:(id)arg1;
- (id)init;

@end

