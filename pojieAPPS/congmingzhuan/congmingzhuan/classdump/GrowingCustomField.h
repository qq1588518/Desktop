//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface GrowingCustomField : NSObject
{
    NSMutableDictionary *_persistentData;
    NSString *_filePath;
    _Bool isFirstSetCS;
    _Bool userAccess;
    NSString *_cs1;
    NSDictionary *_growingVistorVar;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *growingVistorVar; // @synthesize growingVistorVar=_growingVistorVar;
@property(copy, nonatomic) NSString *cs1; // @synthesize cs1=_cs1;
- (void).cxx_destruct;
- (void)sendVisitorEvent:(id)arg1;
- (void)sendCustomTrackEventWithName:(id)arg1 andNumber:(id)arg2 andVariable:(id)arg3;
- (void)sendPeopleEvent:(id)arg1;
- (void)sendEvarEvent:(id)arg1;
- (void)persistence;
- (void)setCS;
- (void)handleFirstSetCS;
- (id)init;
@property(readonly, retain, nonatomic) NSDictionary *growingAttributesAvar;
- (id)growingAttributesMutableAvar;
- (void)removeGrowingAttributesAvar:(id)arg1;
- (void)mergeGrowingAttributesAvar:(id)arg1;

@end

