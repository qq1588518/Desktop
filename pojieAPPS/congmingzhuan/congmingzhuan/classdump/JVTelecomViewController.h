//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <OfferWallBase/UITextViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIActivityIndicatorView, UIButton, UIImageView;

@interface JVTelecomViewController : UIViewController <UITextViewDelegate>
{
    _Bool _checked;
    _Bool _horizontal;
    NSString *_mobile;
    UIActivityIndicatorView *_indicatorView;
    CDUnknownBlockType _loginBlk;
    CDUnknownBlockType _cancelBlk;
    UIButton *_loginButton;
    UIImageView *_checkImageView;
    NSMutableDictionary *_privacy_linkDic;
    long long _orientation;
}

@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSMutableDictionary *privacy_linkDic; // @synthesize privacy_linkDic=_privacy_linkDic;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(copy, nonatomic) CDUnknownBlockType cancelBlk; // @synthesize cancelBlk=_cancelBlk;
@property(copy, nonatomic) CDUnknownBlockType loginBlk; // @synthesize loginBlk=_loginBlk;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)checkTap:(id)arg1;
- (void)cancelButtonTouch:(id)arg1;
- (void)loginButtonTouch:(id)arg1;
- (void)configUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

