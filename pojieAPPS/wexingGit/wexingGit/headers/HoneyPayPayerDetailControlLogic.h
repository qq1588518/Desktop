//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayHoneyPayBaseControlLogic.h"

#import "HoneyPayGetMCreditLineTokenCgiDelegate-Protocol.h"
#import "HoneyPayModifyMaximumAmountViewControllerDelegate-Protocol.h"
#import "HoneyPayPayerCardDetailViewControllerDelegate-Protocol.h"
#import "WCPayGetPayPwdTokenCgiDelegate-Protocol.h"
#import "WCPayModifyHoneyPayerCreditLineCgiDelegate-Protocol.h"
#import "WCPayModifyHoneyPayerNotifyCgiDelegate-Protocol.h"
#import "WCPayModifyHoneyPayerPayWayCgiDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayQryHoneyPayerDetailCgiDelegate-Protocol.h"
#import "WCPayUnbindHoneyPayCardCgiDelegate-Protocol.h"

@class HoneyPayGetMCreditLineTokenCgi, HoneyPayPayerCardDetailViewController, NSString, WCPayGetPayPwdTokenCgi, WCPayModifyHoneyPayerCreditLineCgi, WCPayModifyHoneyPayerNotifyCgi, WCPayModifyHoneyPayerPayWayCgi, WCPayQryHoneyPayerDetailCgi, WCPayUnbindHoneyPayCardCgi;
@protocol HoneyPayPayerDetailControlLogicDelegate;

@interface HoneyPayPayerDetailControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayPayerCardDetailViewControllerDelegate, WCPayQryHoneyPayerDetailCgiDelegate, HoneyPayModifyMaximumAmountViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayModifyHoneyPayerCreditLineCgiDelegate, WCPayUnbindHoneyPayCardCgiDelegate, WCPayModifyHoneyPayerPayWayCgiDelegate, WCPayModifyHoneyPayerNotifyCgiDelegate, HoneyPayGetMCreditLineTokenCgiDelegate, WCPayGetPayPwdTokenCgiDelegate>
{
    id <HoneyPayPayerDetailControlLogicDelegate> _delegate;
    unsigned long long _entranceType;
    unsigned long long _verifyPasswordScene;
    WCPayQryHoneyPayerDetailCgi *_detailCgi;
    HoneyPayPayerCardDetailViewController *_detailVC;
    WCPayModifyHoneyPayerCreditLineCgi *_modifyCgi;
    WCPayUnbindHoneyPayCardCgi *_unbindCgi;
    WCPayModifyHoneyPayerPayWayCgi *_modifyPayWayCgi;
    WCPayModifyHoneyPayerNotifyCgi *_modifyNotifyCgi;
    HoneyPayGetMCreditLineTokenCgi *_getMCreditLineTokenCgi;
    WCPayGetPayPwdTokenCgi *_getPayPwdTokenCgi;
}

@property(retain, nonatomic) WCPayGetPayPwdTokenCgi *getPayPwdTokenCgi; // @synthesize getPayPwdTokenCgi=_getPayPwdTokenCgi;
@property(retain, nonatomic) HoneyPayGetMCreditLineTokenCgi *getMCreditLineTokenCgi; // @synthesize getMCreditLineTokenCgi=_getMCreditLineTokenCgi;
@property(retain, nonatomic) WCPayModifyHoneyPayerNotifyCgi *modifyNotifyCgi; // @synthesize modifyNotifyCgi=_modifyNotifyCgi;
@property(retain, nonatomic) WCPayModifyHoneyPayerPayWayCgi *modifyPayWayCgi; // @synthesize modifyPayWayCgi=_modifyPayWayCgi;
@property(retain, nonatomic) WCPayUnbindHoneyPayCardCgi *unbindCgi; // @synthesize unbindCgi=_unbindCgi;
@property(retain, nonatomic) WCPayModifyHoneyPayerCreditLineCgi *modifyCgi; // @synthesize modifyCgi=_modifyCgi;
@property(retain, nonatomic) HoneyPayPayerCardDetailViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(retain, nonatomic) WCPayQryHoneyPayerDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(nonatomic) unsigned long long verifyPasswordScene; // @synthesize verifyPasswordScene=_verifyPasswordScene;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak id <HoneyPayPayerDetailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tokenMess;
- (id)cardNo;
- (void)modifyHoneyPayerNotifyCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)modifyHoneyPayerNotifyCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)modifyHoneyPayerPayWayCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)modifyHoneyPayerPayWayCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)unbindHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)unbindHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)modifyHoneyPayerCreditLineCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)modifyHoneyPayerCreditLineCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getMCreditLineTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getMCreditLineTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyPayerDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryHoneyPayerDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)modifyMaximumAmountVC:(id)arg1 didClickNextWithAmount:(id)arg2;
- (void)payerCardDetailVCDidClickCreatedDoneButton:(id)arg1;
- (void)payerCardDetailVC:(id)arg1 changePayWay:(id)arg2;
- (void)payerCardDetailVCDidClickUnbindCard:(id)arg1;
- (void)payerCardDetailVCDidClickChangeMaximumAmount:(id)arg1;
- (void)popAndPushDetailVC:(_Bool)arg1;
- (void)verifyPassword:(unsigned long long)arg1;
- (void)requestDetail;
- (void)requestCreatedDetail;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
