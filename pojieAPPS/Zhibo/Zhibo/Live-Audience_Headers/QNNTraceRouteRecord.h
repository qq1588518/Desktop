//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QNNTraceRouteRecord : NSObject
{
    long long _hop;
    NSString *_ip;
    double *_durations;
    long long _count;
}

@property(readonly) long long count; // @synthesize count=_count;
@property double *durations; // @synthesize durations=_durations;
@property(retain) NSString *ip; // @synthesize ip=_ip;
@property(readonly) long long hop; // @synthesize hop=_hop;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init:(long long)arg1 count:(long long)arg2;

@end
