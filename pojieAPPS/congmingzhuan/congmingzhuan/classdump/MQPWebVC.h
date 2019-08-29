//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <OfferWallBase/UIScrollViewDelegate-Protocol.h>
#import <OfferWallBase/UIWebViewDelegate-Protocol.h>

@class APayH5WapViewToolbar, MQPWebProgress, MQPWebService, NSMutableURLRequest, NSString, UIWebView;

@interface MQPWebVC : UIViewController <UIWebViewDelegate, UIScrollViewDelegate>
{
    _Bool _isScrolling;
    _Bool _isEnding;
    MQPWebProgress *_progress;
    NSMutableURLRequest *_urlReqest;
    APayH5WapViewToolbar *_toolbar;
    MQPWebService *_service;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak MQPWebService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (double)safeAreaHeight;
- (id)imageViewWithImageName:(id)arg1;
- (id)labelWithFrame:(struct CGRect)arg1 isbold:(_Bool)arg2 size:(double)arg3 text:(id)arg4;
- (void)setupNaviBar4VC:(id)arg1 left:(id)arg2 title:(id)arg3 right:(id)arg4;
- (id)leftItem:(_Bool)arg1 text:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)rotateAccordingToStatusBarOrientationAndSupportedOrientations;
- (void)statusBarFrameOrOrientationChanged:(id)arg1;
- (void)pushWnd:(id)arg1;
- (void)hideToolbar;
- (void)showToolbar;
- (void)showRefreshButton:(_Bool)arg1;
- (void)showBackButton:(_Bool)arg1;
- (void)onExitWithResult:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)refresh;
- (void)back;
- (void)onWebErr:(id)arg1 log:(id)arg2;
- (void)onAction:(id)arg1;
- (id)subStrInStr:(id)arg1 between:(id)arg2 and:(id)arg3;
- (id)dictionaryFromString:(id)arg1;
- (void)onCallNativeFunc:(id)arg1;
- (void)loadJSBridge;
- (_Bool)onJSBridgeHandler:(id)arg1;
- (id)resultDicWithQuery:(id)arg1;
- (void)onH5PayWithError:(id)arg1;
- (_Bool)onH5PayHandler:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)doClickNaviRightAction:(id)arg1;
- (void)doClickNaviLeftAction:(id)arg1;
- (_Bool)openWithUrl:(id)arg1 method:(id)arg2 title:(id)arg3 h5mode:(long long)arg4;
- (void)dealloc;
- (id)initWithWebService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

