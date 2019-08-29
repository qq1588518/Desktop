//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/GrowingEventManagerObserver-Protocol.h>
#import <OfferWallBase/GrowingWebSocketServerDelegate-Protocol.h>
#import <OfferWallBase/WebScoketDelegate-Protocol.h>

@class GrowingHTTPServer, GrowingStatusBar, GrowingWebSocketActionItem, GrowingWebSocketServer, NSMutableArray, NSString, NSTimer;

@interface GrowingWebSocket : NSObject <GrowingWebSocketServerDelegate, GrowingEventManagerObserver, WebScoketDelegate>
{
    NSMutableArray *tempArray;
    _Bool _isConnected;
    int _nodeZLevel;
    int _zLevel;
    GrowingWebSocketServer *_webSocket;
    NSTimer *_keepAliveTimer;
    GrowingWebSocketActionItem *_rootAction;
    CDUnknownBlockType _onReadyBlock;
    CDUnknownBlockType _onFinishBlock;
    GrowingStatusBar *_statusWindow;
    NSMutableArray *_cachedEvents;
    GrowingHTTPServer *_httpServer;
    NSMutableArray *_gWebViewArray;
    NSString *_randomNumber;
}

+ (void)retrieveAllElementsAsync:(CDUnknownBlockType)arg1;
+ (_Bool)isContainer:(id)arg1;
+ (double)impressScale;
+ (_Bool)isRunning;
+ (void)stop;
+ (void)runWithCircleRoomNumber:(id)arg1 ReadyBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (id)shareInstance;
+ (void)setNeedUpdateScreen;
@property(copy, nonatomic) NSString *randomNumber; // @synthesize randomNumber=_randomNumber;
@property(nonatomic) int zLevel; // @synthesize zLevel=_zLevel;
@property(nonatomic) int nodeZLevel; // @synthesize nodeZLevel=_nodeZLevel;
@property(retain, nonatomic) NSMutableArray *gWebViewArray; // @synthesize gWebViewArray=_gWebViewArray;
@property(retain, nonatomic) GrowingHTTPServer *httpServer; // @synthesize httpServer=_httpServer;
@property(retain, nonatomic) NSMutableArray *cachedEvents; // @synthesize cachedEvents=_cachedEvents;
@property(retain, nonatomic) GrowingStatusBar *statusWindow; // @synthesize statusWindow=_statusWindow;
@property(copy, nonatomic) CDUnknownBlockType onFinishBlock; // @synthesize onFinishBlock=_onFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType onReadyBlock; // @synthesize onReadyBlock=_onReadyBlock;
@property(retain, nonatomic) GrowingWebSocketActionItem *rootAction; // @synthesize rootAction=_rootAction;
@property(retain, nonatomic) NSTimer *keepAliveTimer; // @synthesize keepAliveTimer=_keepAliveTimer;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) GrowingWebSocketServer *webSocket; // @synthesize webSocket=_webSocket;
- (void).cxx_destruct;
- (_Bool)growingEventManagerShouldAddEvent:(id)arg1 triggerNode:(id)arg2 withContext:(id)arg3;
- (void)growingEventManagerWillAddEvent:(id)arg1 thisNode:(id)arg2 triggerNode:(id)arg3 withContext:(id)arg4;
- (id)getNodeName:(id)arg1 withXPath:(id)arg2 withKeyIndex:(long long)arg3 withContent:(id)arg4 withPage:(id)arg5;
- (id)getViewControllerName:(id)arg1;
- (void)webSocketServerDidClose:(id)arg1;
- (void)webSocketServerDidOpen:(id)arg1;
- (void)webSocketServer:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendJson:(id)arg1;
- (_Bool)isRunning;
- (void)_stopWithError:(id)arg1;
- (void)stop;
- (void)keepAlive;
- (void)endKeepAlive;
- (void)beginKeepAlive;
- (id)getIPAddress;
- (void)runWithCircleRoomNumber:(id)arg1 ReadyBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)addActions;
- (void)remoteReady;
- (void)sendClickOrTouchAction;
- (void)sendScreenShotWithEventType:(id)arg1 optionalTargets:(id)arg2 optionalNodeName:(id)arg3 optionalPageName:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)sendScreenShot;
- (id)dictForUserAction:(id)arg1;
- (void)onDomChangeWkWebivew;
- (void)didRecieveWkWebivewMesage:(id)arg1 andWebview:(id)arg2;
- (void)fillAllViewsForWebCircle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)changeXYtoWeb:(id)arg1 andWeb:(id)arg2;
- (id)changeXYtoHybrid:(id)arg1 andWeb:(id)arg2;
- (void)exchangeHybridWithWeb:(id)arg1 andDic:(id)arg2;
- (_Bool)isInView:(id)arg1 andPoint:(struct CGPoint)arg2;
- (id)getHitWebview:(struct CGPoint)arg1;
- (void)webSendData:(id)arg1;
- (id)getSK;
- (void)getElementLevelInWindow:(id)arg1 andWindow:(id)arg2;
- (id)dictFromNode:(id)arg1 pageData:(id)arg2 keyIndex:(long long)arg3 xPath:(id)arg4 nodeType:(id)arg5 isContainer:(_Bool)arg6;
- (_Bool)isContainer:(id)arg1;
- (id)screenShot;
- (void)setNeedUpdateScreen;
- (void)_setNeedUpdateScreen;
- (void)runActionWithJsonObj:(id)arg1;
- (_Bool)runActionWithJsonObj:(id)arg1 atPathItem:(id)arg2 unRunObj:(id *)arg3;
- (void)addActionItemAtPath:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

