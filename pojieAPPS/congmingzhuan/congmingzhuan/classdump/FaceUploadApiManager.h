//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/FMBaseApiManager.h>

#import <OfferWallBase/FMApiManager-Protocol.h>

@class NSDictionary, NSObject, NSString;
@protocol FMRequestGenerator, FMResponseGenerator, OS_dispatch_queue;

@interface FaceUploadApiManager : FMBaseApiManager <FMApiManager>
{
}

@property(readonly, nonatomic) unsigned long long responseGeneratorType;
@property(readonly, nonatomic) unsigned long long requestGeneratorType;
@property(readonly, copy, nonatomic) NSString *serviceName;

// Remaining properties
@property(readonly, nonatomic) unsigned long long cachePolicy;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <FMRequestGenerator> requestGenerator;
@property(readonly, nonatomic) NSDictionary *requestHeaders;
@property(readonly, nonatomic) unsigned long long requestType;
@property(readonly, nonatomic) id <FMResponseGenerator> responseGenerator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *runningQueue;
@property(readonly, nonatomic) unsigned long long serviceProvider;
@property(readonly) Class superclass;

@end

