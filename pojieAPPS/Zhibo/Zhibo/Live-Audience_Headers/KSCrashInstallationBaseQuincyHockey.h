//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSCrashInstallation.h"

@class NSArray, NSString;

@interface KSCrashInstallationBaseQuincyHockey : KSCrashInstallation
{
    _Bool _waitUntilReachable;
    NSString *_userID;
    NSString *_userIDKey;
    NSString *_userName;
    NSString *_userNameKey;
    NSString *_contactEmail;
    NSString *_contactEmailKey;
    NSString *_crashDescription;
    NSString *_crashDescriptionKey;
    NSArray *_extraDescriptionKeys;
}

@property(nonatomic) _Bool waitUntilReachable; // @synthesize waitUntilReachable=_waitUntilReachable;
@property(retain, nonatomic) NSArray *extraDescriptionKeys; // @synthesize extraDescriptionKeys=_extraDescriptionKeys;
@property(retain, nonatomic) NSString *crashDescriptionKey; // @synthesize crashDescriptionKey=_crashDescriptionKey;
@property(retain, nonatomic) NSString *crashDescription; // @synthesize crashDescription=_crashDescription;
@property(retain, nonatomic) NSString *contactEmailKey; // @synthesize contactEmailKey=_contactEmailKey;
@property(retain, nonatomic) NSString *contactEmail; // @synthesize contactEmail=_contactEmail;
@property(retain, nonatomic) NSString *userNameKey; // @synthesize userNameKey=_userNameKey;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userIDKey; // @synthesize userIDKey=_userIDKey;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)allCrashDescriptionKeys;
- (id)initWithRequiredProperties:(id)arg1;

@end

