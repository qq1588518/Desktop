//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class JCORELogMessage, NSObject, NSString;
@protocol JCORELogFormatter, OS_dispatch_queue;

@protocol JCORELogger <NSObject>
@property(retain, nonatomic) id <JCORELogFormatter> logFormatter;
- (void)logMessage:(JCORELogMessage *)arg1;

@optional
@property(readonly, nonatomic) NSString *loggerName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@end

