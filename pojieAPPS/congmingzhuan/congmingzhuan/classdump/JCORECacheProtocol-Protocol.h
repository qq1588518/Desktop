//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class NSString;

@protocol JCORECacheProtocol <NSObject>
@property(retain, nonatomic) NSString *dirName;
@property(retain, nonatomic) NSString *key;
@property(nonatomic) long long type;

@optional
@property(nonatomic) _Bool compress;
@property(nonatomic) _Bool encrypt;
@property(retain, nonatomic) id content;
@end

