//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/WKScriptMessageHandler-Protocol.h>

@class NSString, UIView;

@interface WKPrivateScriptMessageHandler : NSObject <WKScriptMessageHandler>
{
    UIView *_wkWebView;
}

+ (id)wkWebView_growingHook_JavascriptCore:(id)arg1;
@property(readonly, nonatomic) __weak UIView *wkWebView; // @synthesize wkWebView=_wkWebView;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithWKWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

