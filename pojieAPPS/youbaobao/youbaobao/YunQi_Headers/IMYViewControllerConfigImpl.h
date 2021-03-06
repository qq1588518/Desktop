//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYViewControllerConfig-Protocol.h"

@class NSString, UIViewController;

@interface IMYViewControllerConfigImpl : NSObject <IMYViewControllerConfig>
{
    _Bool _prefersStatusBarHidden;
    UIViewController *_viewController;
    long long _preferredStatusBarStyle;
    long long _preferredStatusBarUpdateAnimation;
}

@property(nonatomic) long long preferredStatusBarUpdateAnimation; // @synthesize preferredStatusBarUpdateAnimation=_preferredStatusBarUpdateAnimation;
@property(nonatomic) _Bool prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property(nonatomic) long long preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

