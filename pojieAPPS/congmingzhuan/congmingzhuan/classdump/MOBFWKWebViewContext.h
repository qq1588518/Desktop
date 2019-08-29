//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/WKUIDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, WKNavigation, WKWebView;

@interface MOBFWKWebViewContext : NSObject <WKUIDelegate>
{
    WKWebView *_webView;
    id _jsParser;
    id _wkDelegate;
    NSMutableDictionary *_methods;
    NSMutableSet *_pluginNames;
    WKNavigation *_backNavigation;
    id _otherUIDelegate;
}

+ (id)defaultContext;
@property(nonatomic) __weak id otherUIDelegate; // @synthesize otherUIDelegate=_otherUIDelegate;
@property(retain, nonatomic) WKNavigation *backNavigation; // @synthesize backNavigation=_backNavigation;
@property(retain, nonatomic) NSMutableSet *pluginNames; // @synthesize pluginNames=_pluginNames;
@property(retain, nonatomic) NSMutableDictionary *methods; // @synthesize methods=_methods;
@property(nonatomic) __weak id wkDelegate; // @synthesize wkDelegate=_wkDelegate;
@property(retain, nonatomic) id jsParser; // @synthesize jsParser=_jsParser;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)callback:(id)arg1 resultData:(id)arg2;
- (void)runScript:(id)arg1;
- (void)loadPlugin:(id)arg1 forName:(id)arg2;
- (void)loadPluginWithPath:(id)arg1 forName:(id)arg2;
- (void)_configureImageBase64Decode;
- (void)setupWKWebViewNewJSParser;
- (id)callJSMethod:(id)arg1 arguments:(id)arg2;
- (id)_convertHttpStringParamValue:(id)arg1;
- (id)_convertHttpArrayParamValue:(id)arg1;
- (void)registerParseXMLMethod;
- (void)registerDownloadFileMethod;
- (void)registerIsPluginRegistedMethod;
- (void)registerIsPadMethod;
- (void)registerIsMultitaskingSupportedMethod;
- (void)registerOpenURLMethod;
- (void)registerCanOpenURLMethod;
- (void)registerGetAppConfigMethod;
- (void)registerGetCacheDataMethod;
- (void)registerSetCacheDataMethod;
- (void)registerHTTPMethod;
- (void)registerLogMethod;
- (void)registerMethods;
- (void)registerJSMethod:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)initWKWebViewDelegate:(id)arg1;
- (id)initWithWKWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

