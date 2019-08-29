//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, JCommonReportTimerManager, NSMutableArray, NSString, NSTimer;

@interface JCommonCollectLocationManager : NSObject <CLLocationManagerDelegate>
{
    unsigned long long _collectLocationFlag;
    int _locationAuthorizationStatus;
    NSTimer *_locationUpdateTimer;
    CLLocation *_latestLocation;
    JCommonReportTimerManager *_collectTimerManager;
    double _lastCollectLocationTimestamp;
    _Bool _alreadyCollect;
    NSMutableArray *_locationInfoArray;
    double _collectLocationFrequency;
    CLLocationManager *_locationManager;
    CDUnknownBlockType _collectLBSLoactionHandle;
}

@property(copy, nonatomic) CDUnknownBlockType collectLBSLoactionHandle; // @synthesize collectLBSLoactionHandle=_collectLBSLoactionHandle;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) double collectLocationFrequency; // @synthesize collectLocationFrequency=_collectLocationFrequency;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)cellInfo;
- (id)wifiInfo;
- (void)addLocationInfo:(id)arg1;
- (void)saveLatestLocation;
- (void)collectLocation;
- (void)handleCollectLocationBeforeSendReport:(CDUnknownBlockType)arg1;
- (void)stopTimer;
- (void)resetCollectTimer;
- (void)startCollectLocationTimer;
- (void)setLBSCollectFrequency:(double)arg1;
- (void)clearReportLoacationData;
- (id)locationReportArray;
- (void)setupLocationManager;
- (_Bool)authorized;
- (id)latestLocation;
- (void)dealloc;
- (id)initWith:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

