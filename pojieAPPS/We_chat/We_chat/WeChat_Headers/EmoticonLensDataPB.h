//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EmoticonLensDataPB : MMObject <PBCoding>
{
    _Bool nsHasUsingBundleResource;
    _Bool emoticonLensHadNotReLoadInUpdate;
    NSMutableArray *emoticonLensList;
    NSMutableDictionary *emoticonLensLanguageResouceDic;
}

+ (void)initialize;
@property(nonatomic) _Bool emoticonLensHadNotReLoadInUpdate; // @synthesize emoticonLensHadNotReLoadInUpdate;
@property(retain, nonatomic) NSMutableDictionary *emoticonLensLanguageResouceDic; // @synthesize emoticonLensLanguageResouceDic;
@property(retain, nonatomic) NSMutableArray *emoticonLensList; // @synthesize emoticonLensList;
@property(nonatomic) _Bool nsHasUsingBundleResource; // @synthesize nsHasUsingBundleResource;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
