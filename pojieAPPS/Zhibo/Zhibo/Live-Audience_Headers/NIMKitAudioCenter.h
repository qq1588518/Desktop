//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NIMMediaManagerDelegate-Protocol.h"

@class NIMMessage, NSString;

@interface NIMKitAudioCenter : NSObject <NIMMediaManagerDelegate>
{
    NIMMessage *_currentPlayingMessage;
    long long _retryCount;
}

+ (id)instance;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NIMMessage *currentPlayingMessage; // @synthesize currentPlayingMessage=_currentPlayingMessage;
- (void).cxx_destruct;
- (void)playAudio:(id)arg1 didCompletedWithError:(id)arg2;
- (void)playAudio:(id)arg1 didBeganWithError:(id)arg2;
- (void)play:(id)arg1;
- (void)resetRetryCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

