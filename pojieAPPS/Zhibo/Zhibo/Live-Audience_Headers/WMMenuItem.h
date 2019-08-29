//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;
@protocol WMMenuItemDelegate;

@interface WMMenuItem : UILabel
{
    double _selectedRed;
    double _selectedGreen;
    double _selectedBlue;
    double _selectedAlpha;
    double _normalRed;
    double _normalGreen;
    double _normalBlue;
    double _normalAlpha;
    _Bool _selected;
    double _rate;
    double _normalSize;
    double _selectedSize;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    id <WMMenuItemDelegate> _delegate;
}

@property(nonatomic) __weak id <WMMenuItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) double selectedSize; // @synthesize selectedSize=_selectedSize;
@property(nonatomic) double normalSize; // @synthesize normalSize=_normalSize;
@property(nonatomic) double rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)deselectedItemWithoutAnimation;
- (void)selectedItemWithoutAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
