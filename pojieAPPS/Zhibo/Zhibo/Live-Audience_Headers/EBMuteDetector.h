//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBMuteDetector : NSObject
{
    unsigned int _soundId;
    double _interval;
    CDUnknownBlockType _completeBlock;
}

+ (id)sharedDetecotr;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) unsigned int soundId; // @synthesize soundId=_soundId;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)dealloc;
- (void)detectComplete:(CDUnknownBlockType)arg1;

@end

