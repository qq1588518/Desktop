//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMYPublicIServiceResult <NSObject>
@property(copy, nonatomic) NSString *message;
@property(nonatomic) long long code;
@property(nonatomic) unsigned long long status;
@property(copy, nonatomic) CDUnknownBlockType callback;
@property(readonly, copy, nonatomic) Class dataClass;
@property(retain, nonatomic) id data;
@end

