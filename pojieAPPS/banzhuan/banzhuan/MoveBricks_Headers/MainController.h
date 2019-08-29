//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GCDWebServerDelegate-Protocol.h"
#import "PaiDaXingDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"
#import "WXApiDelegate-Protocol.h"

@class CALayer, GCDWebServer, NSDictionary, NSString, NSTimer, PaiDaXing, UIAlertView, UIButton, UITextView, UIView, WKWebView;

@interface MainController : UIViewController <GCDWebServerDelegate, WKNavigationDelegate, WKUIDelegate, WXApiDelegate, UIAlertViewDelegate, PaiDaXingDelegate>
{
    GCDWebServer *_localServer;
    NSString *_idfa;
    NSDictionary *_jsonDic;
    NSString *_Clipboard;
    NSString *_uidcode;
    NSString *UserID;
    NSString *_aID;
    NSString *_code;
    NSString *_tType;
    int _timeOut;
    id _webJson;
    id _WeiChatInfo;
    NSString *ShareHead;
    NSString *ShareText;
    NSString *ShareUrl;
    NSString *ShareImage;
    NSTimer *Timer;
    UIAlertView *AlertView;
    int net;
    NSString *PhoneNumber;
    NSString *BunID;
    NSString *phoneTestType;
    NSString *_VerifyId;
    NSString *_phoneType;
    int _phonetime;
    PaiDaXing *_PaiDaXing_Delegate;
    WKWebView *_webview;
    UIButton *_RefreshBtn;
    CALayer *_progresslayer;
    UITextView *_textview;
    UITextView *_LabelView;
    NSString *_NetStatus;
    UIView *_MBHud;
}

@property(retain, nonatomic) UIView *MBHud; // @synthesize MBHud=_MBHud;
@property(nonatomic) int phonetime; // @synthesize phonetime=_phonetime;
@property(copy, nonatomic) NSString *NetStatus; // @synthesize NetStatus=_NetStatus;
@property(nonatomic) __weak UITextView *LabelView; // @synthesize LabelView=_LabelView;
@property(nonatomic) __weak UITextView *textview; // @synthesize textview=_textview;
@property(nonatomic) __weak CALayer *progresslayer; // @synthesize progresslayer=_progresslayer;
@property(nonatomic) __weak UIButton *RefreshBtn; // @synthesize RefreshBtn=_RefreshBtn;
@property(nonatomic) __weak WKWebView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) PaiDaXing *PaiDaXing_Delegate; // @synthesize PaiDaXing_Delegate=_PaiDaXing_Delegate;
- (void).cxx_destruct;
- (void)DissMissHud;
- (void)GetJsonDict;
- (void)timejudge;
- (id)getInternetDate;
- (id)getCurrentTimestamp;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)jPushSetingAlias:(id)arg1;
- (void)ReturnRequest:(id)arg1;
- (_Bool)musicStart:(id)arg1;
- (void)GetUserUd;
- (void)Clipboard;
- (id)deviceModelName;
- (void)finishCard:(id)arg1;
- (void)TakeCard:(id)arg1;
- (void)PickZfb:(id)arg1;
- (void)HidenBar;
- (void)DescriptionInfo:(id)arg1;
- (void)DescriptionFile:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showNetworkStatusAlert:(id)arg1;
- (_Bool)isVPNOn;
- (void)setupFlagLabelWithStatus:(long long)arg1 isVPNOn:(_Bool)arg2 accessType:(long long)arg3;
- (void)VPNStatusChanged:(id)arg1;
- (void)networkChanged:(id)arg1;
- (void)NetTest;
- (_Bool)SIM;
- (void)DelegateTest;
- (void)DelegateTimeLoad;
- (void)webServerDidStart:(id)arg1;
- (id)httppost:(id)arg1;
- (void)listenningInterface:(id)arg1 withSelector:(SEL)arg2;
- (id)paramsCheck:(id)arg1;
- (id)createResponseJsonWithCode:(int)arg1 message:(id)arg2 webJson:(id)arg3;
- (id)responseForRequest:(id)arg1 webSelector:(SEL)arg2;
- (void)responseHeaderSetting:(id)arg1 originName:(id)arg2;
- (id)legalDominName;
- (void)InitLocalServer;
- (void)getPhoneCode:(id)arg1;
- (void)paiDaXingPhoneNumVerifyStatus:(id)arg1;
- (void)paiDaXingPhoneNumDectectDidLoad:(id)arg1;
- (void)PhoneNumbTest:(id)arg1;
- (id)getImageFromURL:(id)arg1;
- (void)sharecallback;
- (void)shareWebPageToPlatformType:(long long)arg1;
- (void)Share:(id)arg1;
- (void)WechatLogin:(id)arg1;
- (void)GetWechatToken:(id)arg1;
- (void)onResp:(id)arg1;
- (void)weixinLoginView;
- (void)GiveUpCallBack:(id)arg1;
- (void)SubCallBack:(id)arg1;
- (void)CallBackTime:(id)arg1;
- (void)PickCallBack:(id)arg1;
- (void)GiveUpComment:(id)arg1;
- (void)SubComment:(id)arg1;
- (void)CommentTime:(id)arg1;
- (void)PickUpComment:(id)arg1;
- (void)VerifyBundleId:(id)arg1;
- (void)GiveUpQuick:(id)arg1;
- (void)SubQuick:(id)arg1;
- (void)QuickTime:(id)arg1;
- (void)PickUpQuick:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)LoadingWebView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)RefreshWeb;
- (void)SetRefreshBtn;
- (_Bool)checkAp:(id)arg1;
- (void)GetingUserInformation;
- (void)GetUserIdfa;
- (void)jumping;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
