//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NIMCommonTableDelegate, NSArray, NSString, UITableView;

@interface NTESEmailSettingViewController : UIViewController
{
    UITableView *_tableView;
    NIMCommonTableDelegate *_delegator;
    NSArray *_data;
    NSString *_email;
    long long _inputLimit;
}

@property(nonatomic) long long inputLimit; // @synthesize inputLimit=_inputLimit;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NIMCommonTableDelegate *delegator; // @synthesize delegator=_delegator;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)buildData;
- (void)onDone:(id)arg1;
- (void)setUpNav;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

