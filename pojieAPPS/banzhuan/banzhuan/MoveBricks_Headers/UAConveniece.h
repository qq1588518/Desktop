//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UAConveniece : NSObject
{
}

+ (id)requestWithURL:(id)arg1 method:(id)arg2 headerFields:(id)arg3 params:(id)arg4 timeout:(double)arg5;
+ (id)requestWithURL:(id)arg1 method:(id)arg2 headerFields:(id)arg3 params:(id)arg4;
+ (id)URLEncodingWithSource:(id)arg1;
+ (_Bool)verificationObject:(id)arg1 withTargetClass:(Class)arg2;
+ (id)textFromJSON:(id)arg1 withError:(id *)arg2;
+ (id)dataFromJSON:(id)arg1 withError:(id *)arg2;
+ (id)JSONFromText:(id)arg1 withError:(id *)arg2;
+ (id)JSONFromData:(id)arg1 withError:(id *)arg2;
+ (void)printConsoleWithTitle:(id)arg1 content:(id)arg2 inPart:(_Bool)arg3;
+ (void)printConsoleWithTitle:(id)arg1 content:(id)arg2;
+ (void)configureDebugLog:(_Bool)arg1;
+ (_Bool)deviceWasJailed;
+ (id)systemUpTime;
+ (id)currentTimeStamp;
+ (id)IMEI;
+ (id)IMSI;
+ (id)deviceModel;
+ (id)deviceBrand;
+ (id)deviceSystem;
+ (void)printSDKServerDebug:(id)arg1 withTitle:(id)arg2;
+ (void)printSDKLocalDebug:(id)arg1 withTitle:(id)arg2;
+ (void)printSDKLogReport:(id)arg1 withTitle:(id)arg2;
+ (_Bool)isSuccessResult:(id)arg1;

@end

