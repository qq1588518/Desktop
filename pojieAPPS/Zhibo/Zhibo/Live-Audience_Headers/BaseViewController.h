//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIBarButtonItem;

@interface BaseViewController : UIViewController
{
    unsigned long long _preferredBarStyle;
    UIBarButtonItem *_backItem;
}

@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)action_BarButtonPressed;
- (_Bool)tabBarFirstPage;
@property(nonatomic) unsigned long long preferredBarStyle; // @synthesize preferredBarStyle=_preferredBarStyle;
- (void)updateNavBar:(unsigned long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
