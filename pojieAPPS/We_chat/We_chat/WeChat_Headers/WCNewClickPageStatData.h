//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCNewClickPageStatData : MMObject <PBCoding>
{
    unsigned int errType;
    unsigned int errCnt;
    unsigned int firstEnterTimeStamp;
    unsigned int lastQuitTimeStamp;
    NSMutableDictionary *dicPageDatas;
}

+ (void)initialize;
@property(nonatomic) unsigned int lastQuitTimeStamp; // @synthesize lastQuitTimeStamp;
@property(nonatomic) unsigned int firstEnterTimeStamp; // @synthesize firstEnterTimeStamp;
@property(retain, nonatomic) NSMutableDictionary *dicPageDatas; // @synthesize dicPageDatas;
@property(nonatomic) unsigned int errCnt; // @synthesize errCnt;
@property(nonatomic) unsigned int errType; // @synthesize errType;
- (void).cxx_destruct;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
