//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PPingResModel : NSObject
{
    float _timeMilliseconds;
    NSString *_originalAddress;
    NSString *_IPAddress;
    unsigned long long _dateBytesLength;
    long long _timeToLive;
    long long _tracertCount;
    long long _ICMPSequence;
    long long _status;
}

+ (id)pingResultWithPingItems:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long ICMPSequence; // @synthesize ICMPSequence=_ICMPSequence;
@property(nonatomic) long long tracertCount; // @synthesize tracertCount=_tracertCount;
@property(nonatomic) long long timeToLive; // @synthesize timeToLive=_timeToLive;
@property(nonatomic) float timeMilliseconds; // @synthesize timeMilliseconds=_timeMilliseconds;
@property(nonatomic) unsigned long long dateBytesLength; // @synthesize dateBytesLength=_dateBytesLength;
@property(copy, nonatomic) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
@property(retain, nonatomic) NSString *originalAddress; // @synthesize originalAddress=_originalAddress;
- (void).cxx_destruct;
- (id)description;

@end

