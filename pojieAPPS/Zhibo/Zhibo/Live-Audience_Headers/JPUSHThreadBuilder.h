//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JPUSHThread;

@interface JPUSHThreadBuilder : NSObject
{
    JPUSHThread *_resultThread;
}

@property(retain) JPUSHThread *resultThread; // @synthesize resultThread=_resultThread;
- (void).cxx_destruct;
- (void)checkInitialized;
- (unsigned long long)type;
- (_Bool)hasType;
- (id)clearThreadName;
- (id)setThreadName:(id)arg1;
- (id)threadName;
- (_Bool)hasThreadName;
- (id)mergeFrom:(id)arg1;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)buildPartial;
- (id)build;
- (id)internalGetResult;
- (id)initWithRunLoopMode:(unsigned long long)arg1;

@end

