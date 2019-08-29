//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "HoneyPayHomeControlLogicDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCPayCustomModalViewDelegate-Protocol.h"
#import "WCPayQueryWeChatWalletCgiDelegate-Protocol.h"
#import "WCPaySecuritySettingViewControllerDelegate-Protocol.h"
#import "WCPayVoidCallbackDelegate-Protocol.h"
#import "WCPayWalletUpdateExt-Protocol.h"

@class NSMutableArray, NSString, QueryWeChatWalletResponse, WCPayControlData, WCPayCustomModalView, WCPayQueryWeChatWalletCgi;
@protocol WCPayWalletViewControllerDelegate;

@interface WCPayWalletViewController : WCPayBaseViewController <WCPayWalletUpdateExt, WCPaySecuritySettingViewControllerDelegate, MMWebViewDelegate, WCPayCustomModalViewDelegate, WCPayVoidCallbackDelegate, HoneyPayHomeControlLogicDelegate, WCPayQueryWeChatWalletCgiDelegate>
{
    _Bool _m_hasShowModalView;
    id <WCPayWalletViewControllerDelegate> _m_delegate;
    WCPayControlData *_m_oPayData;
    WCPayQueryWeChatWalletCgi *_m_walletCgi;
    QueryWeChatWalletResponse *_m_walletCgiResp;
    NSMutableArray *_m_bottomTextArray;
    WCPayCustomModalView *_m_modalView;
}

@property _Bool m_hasShowModalView; // @synthesize m_hasShowModalView=_m_hasShowModalView;
@property(retain) WCPayCustomModalView *m_modalView; // @synthesize m_modalView=_m_modalView;
@property(retain) NSMutableArray *m_bottomTextArray; // @synthesize m_bottomTextArray=_m_bottomTextArray;
@property(retain) QueryWeChatWalletResponse *m_walletCgiResp; // @synthesize m_walletCgiResp=_m_walletCgiResp;
@property(retain) WCPayQueryWeChatWalletCgi *m_walletCgi; // @synthesize m_walletCgi=_m_walletCgi;
@property(retain, nonatomic) WCPayControlData *m_oPayData; // @synthesize m_oPayData=_m_oPayData;
@property __weak id <WCPayWalletViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onWCPaySecuritySettingViewControllerDidCallUpdate;
- (void)onWCPaySecuritySettingViewControllerBack;
- (void)reportWithAction:(unsigned long long)arg1 CellId:(id)arg2 CellType:(unsigned long long)arg3;
- (void)onWCPayWalletUpdateDidCall;
- (void)webViewDidReturn:(id)arg1;
- (void)onWCPayCustomModalViewDidConfirm:(id)arg1;
- (void)onWCPayCustomModalViewDidCancel:(id)arg1;
- (void)onWCPayCustomModalViewToWeb:(id)arg1 fromButton:(_Bool)arg2;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)honeyPayHomeLogicDidStop:(id)arg1;
- (void)onWCPayQueryWeChatWalletCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayQueryWeChatWalletCgiResp:(id)arg1 fromServer:(_Bool)arg2;
- (void)onRealnameVerfitySuccessNotification:(id)arg1;
- (void)clickRealname;
- (void)clickPaySecurity;
- (void)clickHoneyPay;
- (void)clickLqtWithTraceInfo:(id)arg1;
- (void)clickLqt;
- (void)clickBalance;
- (void)clickBankCard;
- (void)clickTinyAppCell:(id)arg1;
- (void)clickH5Cell:(id)arg1;
- (void)clickCell:(struct WCTableViewNormalCellManager *)arg1;
- (void)makeCellWithLine:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)makeCell:(id)arg1 CellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (struct WCTableViewNormalCellManager *)cellInfoWithLineWith:(id)arg1;
- (struct WCTableViewNormalCellManager *)cellInfoWith:(id)arg1;
- (void)reloadTableView;
- (void)onRightBarButtonClick;
- (void)updateNavigationBar;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)updateView;
- (void)mayDelayUpdateWalletData;
- (void)updateWalletData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
