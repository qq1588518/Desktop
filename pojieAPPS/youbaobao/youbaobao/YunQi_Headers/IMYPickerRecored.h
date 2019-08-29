//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YYPickerViewDataSource-Protocol.h"
#import "YYPickerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UILabel, YYPickerView;

@interface IMYPickerRecored : UIView <YYPickerViewDelegate, YYPickerViewDataSource>
{
    int columeNumble;
    unsigned long long _recoredType;
    YYPickerView *_pickerView;
    UILabel *_textLabel;
    NSMutableArray *_list1;
    NSMutableArray *_list2;
    NSArray *_originList1;
    NSArray *_originList2;
}

+ (id)new;
@property(retain, nonatomic) NSArray *originList2; // @synthesize originList2=_originList2;
@property(retain, nonatomic) NSArray *originList1; // @synthesize originList1=_originList1;
@property(retain, nonatomic) NSMutableArray *list2; // @synthesize list2=_list2;
@property(retain, nonatomic) NSMutableArray *list1; // @synthesize list1=_list1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) YYPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) unsigned long long recoredType; // @synthesize recoredType=_recoredType;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 forRow:(long long)arg2 forComponent:(long long)arg3 cell:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerViewWillScrollEnd;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setSelectedValue:(float)arg1;
@property(readonly) NSString *currentShowText;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
