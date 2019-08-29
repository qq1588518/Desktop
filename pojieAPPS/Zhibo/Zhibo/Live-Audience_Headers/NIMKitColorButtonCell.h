//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NIMCommonTableRow, NIMKitColorButton;

@interface NIMKitColorButtonCell : UITableViewCell
{
    NIMKitColorButton *_button;
    NIMCommonTableRow *_rowData;
}

@property(retain, nonatomic) NIMCommonTableRow *rowData; // @synthesize rowData=_rowData;
@property(retain, nonatomic) NIMKitColorButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)refreshData:(id)arg1 tableView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

