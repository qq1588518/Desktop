//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NIMCommonTableViewCell-Protocol.h"

@class NSString, UISwitch;

@interface NIMKitSwitcherCell : UITableViewCell <NIMCommonTableViewCell>
{
    UISwitch *_switcher;
}

@property(readonly, nonatomic) UISwitch *switcher; // @synthesize switcher=_switcher;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshData:(id)arg1 tableView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

