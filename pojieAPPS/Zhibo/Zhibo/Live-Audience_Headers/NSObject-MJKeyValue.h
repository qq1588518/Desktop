//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MJKeyValue-Protocol.h"

@class NSString;

@interface NSObject (MJKeyValue) <MJKeyValue>
+ (id)mj_keyValuesArrayWithObjectArray:(id)arg1 keys:(id)arg2 ignoredKeys:(id)arg3;
+ (id)mj_keyValuesArrayWithObjectArray:(id)arg1 ignoredKeys:(id)arg2;
+ (id)mj_keyValuesArrayWithObjectArray:(id)arg1 keys:(id)arg2;
+ (id)mj_keyValuesArrayWithObjectArray:(id)arg1;
+ (id)mj_objectArrayWithFile:(id)arg1;
+ (id)mj_objectArrayWithFilename:(id)arg1;
+ (id)mj_objectArrayWithKeyValuesArray:(id)arg1 context:(id)arg2;
+ (id)mj_objectArrayWithKeyValuesArray:(id)arg1;
+ (id)mj_objectWithFile:(id)arg1;
+ (id)mj_objectWithFilename:(id)arg1;
+ (id)mj_objectWithKeyValues:(id)arg1 context:(id)arg2;
+ (id)mj_objectWithKeyValues:(id)arg1;
+ (void)load;
+ (_Bool)mj_isReferenceReplacedKeyWhenCreatingKeyValues;
+ (void)mj_referenceReplacedKeyWhenCreatingKeyValues:(_Bool)arg1;
+ (void)setMj_error:(id)arg1;
+ (id)mj_error;
- (id)mj_JSONString;
- (id)mj_JSONObject;
- (id)mj_JSONData;
- (id)mj_keyValuesWithKeys:(id)arg1 ignoredKeys:(id)arg2;
- (id)mj_keyValuesWithIgnoredKeys:(id)arg1;
- (id)mj_keyValuesWithKeys:(id)arg1;
- (id)mj_keyValues;
- (id)mj_setKeyValues:(id)arg1 context:(id)arg2;
- (id)mj_setKeyValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

