//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JPUSHUserPropertyController : NSObject
{
    double _uploadPropertyTime;
    unsigned char _uploadPropertyTimes;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)sendUserProperty:(id)arg1;
- (id)saveUserProperty:(id)arg1;
- (void)setUserProperty:(id)arg1;
- (void)notificationCompletionWith:(unsigned int)arg1 errorDescription:(id)arg2;
- (void)userCtrlNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end

