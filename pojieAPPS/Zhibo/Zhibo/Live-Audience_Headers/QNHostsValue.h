//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QNHostsValue : NSObject
{
    int _provider;
    NSString *_ip;
}

@property(readonly) int provider; // @synthesize provider=_provider;
@property(readonly, copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (id)init:(id)arg1 provider:(int)arg2;

@end

