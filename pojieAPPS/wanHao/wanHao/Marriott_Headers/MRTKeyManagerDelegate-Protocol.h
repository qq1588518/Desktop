//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRTKeyContext, MRTKeyManager, NSDictionary, NSError, NSString;

@protocol MRTKeyManagerDelegate <NSObject>

@optional
- (void)keyManager:(MRTKeyManager *)arg1 didFailToPrintKeyCardWithError:(NSError *)arg2;
- (void)keyManager:(MRTKeyManager *)arg1 didReceivePrintNotification:(NSDictionary *)arg2;
- (void)keyManager:(MRTKeyManager *)arg1 didFailToReleaseLockWithError:(NSError *)arg2;
- (void)keyManager:(MRTKeyManager *)arg1 didReleaseLockUsingContext:(MRTKeyContext *)arg2;
- (void)keyManager:(MRTKeyManager *)arg1 didFailToPresentKeyCardEntryWithError:(NSError *)arg2;
- (void)keyManager:(MRTKeyManager *)arg1 didStopPresentKeyCardEntryFromContext:(MRTKeyContext *)arg2;
- (void)keyManager:(MRTKeyManager *)arg1 didPresentKeyCardEntryFromContext:(MRTKeyContext *)arg2;
- (void)keyManager:(MRTKeyManager *)arg1 didReceiveChangeInRegistrationStatus:(long long)arg2 withContext:(MRTKeyContext *)arg3;
- (NSString *)digitalKeyCardPayloadAssociatedWithSessionToken:(NSString *)arg1;
- (unsigned long long)numberOfMaxAttemptsToPrintKeys;
- (unsigned long long)numberOfKeysPrinted;
@end
