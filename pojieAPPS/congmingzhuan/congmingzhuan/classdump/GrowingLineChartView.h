//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <OfferWallBase/Growing3rdLibUUChartDataSource-Protocol.h>

@class GrowingRealTimeData, NSString, UIActivityIndicatorView, UILabel;

@interface GrowingLineChartView : UIView <Growing3rdLibUUChartDataSource>
{
    GrowingRealTimeData *_data;
    UIView *_accessoryView;
    UIActivityIndicatorView *_busyIndicatorView;
    UILabel *_titleLabel;
    UIView *_chartView;
}

@property(retain, nonatomic) UIView *chartView; // @synthesize chartView=_chartView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *busyIndicatorView; // @synthesize busyIndicatorView=_busyIndicatorView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) GrowingRealTimeData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)Growing3rdLibUUChart:(id)arg1 ShowMaxMinAtIndex:(long long)arg2;
- (_Bool)Growing3rdLibUUChart:(id)arg1 ShowHorizonLineAtIndex:(long long)arg2;
- (id)Growing3rdLibUUChart_NameArray:(id)arg1;
- (id)Growing3rdLibUUChart_ColorArray:(id)arg1;
- (id)Growing3rdLibUUChart_yValueArray:(id)arg1;
- (id)Growing3rdLibUUChart_xLableArray:(id)arg1;
- (void)layoutSubviews;
- (_Bool)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeAllSubviews;
- (void)resetAccessoryView;
- (void)setBusy;
- (void)setText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

