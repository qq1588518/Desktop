//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSYUnivQuery : NSObject
{
    NSString *_hostStr;
    NSString *_method;
    NSString *_accesskey;
    NSString *_expire;
    NSString *_contmd5;
    NSString *_cont;
    NSString *_uniqname;
    CDUnknownBlockType _queryCallback;
}

+ (id)toArrayOrDictionary:(id)arg1;
+ (id)dictionaryToJson:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType queryCallback; // @synthesize queryCallback=_queryCallback;
@property(copy, nonatomic) NSString *uniqname; // @synthesize uniqname=_uniqname;
@property(copy, nonatomic) NSString *cont; // @synthesize cont=_cont;
@property(copy, nonatomic) NSString *contmd5; // @synthesize contmd5=_contmd5;
@property(copy, nonatomic) NSString *expire; // @synthesize expire=_expire;
@property(copy, nonatomic) NSString *accesskey; // @synthesize accesskey=_accesskey;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *hostStr; // @synthesize hostStr=_hostStr;
- (void).cxx_destruct;
- (id)getSendUrlWithBaseUrl;
- (void)univQueryRequest;
- (id)init;

@end
