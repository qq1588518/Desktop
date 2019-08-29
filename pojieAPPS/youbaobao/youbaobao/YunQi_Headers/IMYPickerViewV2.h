//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YYPickerViewDataSource-Protocol.h"
#import "YYPickerViewDelegate-Protocol.h"

@class IMYButton, NSArray, NSString, UIImageView, UILabel, YYPickerView;

@interface IMYPickerViewV2 : UIView <YYPickerViewDataSource, YYPickerViewDelegate>
{
    YYPickerView *_picker;
    IMYButton *_leftButton;
    IMYButton *_rightButton;
    UILabel *_title;
    NSArray *_datas;
    CDUnknownBlockType _selectedRowChanged;
    UIImageView *_toolbar;
}

+ (id)pickerView;
+ (id)addPickerViewToView:(id)arg1;
@property(nonatomic) __weak UIImageView *toolbar; // @synthesize toolbar=_toolbar;
@property(copy, nonatomic) CDUnknownBlockType selectedRowChanged; // @synthesize selectedRowChanged=_selectedRowChanged;
@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) IMYButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) IMYButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak YYPickerView *picker; // @synthesize picker=_picker;
- (void).cxx_destruct;
- (id)buttonWithTitle:(id)arg1;
- (void)dealloc;
- (void)languageChange;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)selectedRowInComponent:(unsigned long long)arg1;
- (id)currentTitleForComponent:(unsigned long long)arg1;
- (void)hide;
- (void)show;
- (void)toggle;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
