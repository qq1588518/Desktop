//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface QNNQue : NSObject
{
    NSObject<OS_dispatch_queue> *_que;
}

+ (void)async_run_main:(CDUnknownBlockType)arg1;
+ (void)async_run_serial:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *que; // @synthesize que=_que;
- (void).cxx_destruct;
- (id)init;

@end

