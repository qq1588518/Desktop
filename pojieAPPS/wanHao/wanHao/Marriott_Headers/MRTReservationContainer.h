//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface MRTReservationContainer : NSObject
{
    _Bool _forceNextStayFetch;
    _Bool _activeQueryInProgress;
    _Bool _cancelledQueryInProgress;
    _Bool _pastQueryInProgress;
    NSDate *_fetchDate;
    NSDate *_cancelledFetchDate;
    NSDate *_pastFetchDate;
    NSArray *_currentReservations;
    NSArray *_activeReservations;
    NSArray *_cancelledReservations;
    NSArray *_pastReservations;
    NSMutableArray *_lookedUpReservations;
    unsigned long long _totalCurrentReservations;
    unsigned long long _totalCancelledReservations;
    unsigned long long _totalPastReservations;
    unsigned long long _fetchedCurrentReservations;
    unsigned long long _fetchedCancelledReservations;
    unsigned long long _fetchedPastReservations;
    NSMutableDictionary *_cachedNotNowResponses;
    NSMutableDictionary *_guestwarePrecreateLastAttemptDate;
    NSMutableSet *_guestwarePrecreateRetriesExceeded;
}

@property(retain, nonatomic) NSMutableSet *guestwarePrecreateRetriesExceeded; // @synthesize guestwarePrecreateRetriesExceeded=_guestwarePrecreateRetriesExceeded;
@property(retain, nonatomic) NSMutableDictionary *guestwarePrecreateLastAttemptDate; // @synthesize guestwarePrecreateLastAttemptDate=_guestwarePrecreateLastAttemptDate;
@property(nonatomic) _Bool pastQueryInProgress; // @synthesize pastQueryInProgress=_pastQueryInProgress;
@property(nonatomic) _Bool cancelledQueryInProgress; // @synthesize cancelledQueryInProgress=_cancelledQueryInProgress;
@property(nonatomic) _Bool activeQueryInProgress; // @synthesize activeQueryInProgress=_activeQueryInProgress;
@property(nonatomic) _Bool forceNextStayFetch; // @synthesize forceNextStayFetch=_forceNextStayFetch;
@property(retain, nonatomic) NSMutableDictionary *cachedNotNowResponses; // @synthesize cachedNotNowResponses=_cachedNotNowResponses;
@property(nonatomic) unsigned long long fetchedPastReservations; // @synthesize fetchedPastReservations=_fetchedPastReservations;
@property(nonatomic) unsigned long long fetchedCancelledReservations; // @synthesize fetchedCancelledReservations=_fetchedCancelledReservations;
@property(nonatomic) unsigned long long fetchedCurrentReservations; // @synthesize fetchedCurrentReservations=_fetchedCurrentReservations;
@property(nonatomic) unsigned long long totalPastReservations; // @synthesize totalPastReservations=_totalPastReservations;
@property(nonatomic) unsigned long long totalCancelledReservations; // @synthesize totalCancelledReservations=_totalCancelledReservations;
@property(nonatomic) unsigned long long totalCurrentReservations; // @synthesize totalCurrentReservations=_totalCurrentReservations;
@property(retain, nonatomic) NSMutableArray *lookedUpReservations; // @synthesize lookedUpReservations=_lookedUpReservations;
@property(retain, nonatomic) NSArray *pastReservations; // @synthesize pastReservations=_pastReservations;
@property(retain, nonatomic) NSArray *cancelledReservations; // @synthesize cancelledReservations=_cancelledReservations;
@property(retain, nonatomic) NSArray *activeReservations; // @synthesize activeReservations=_activeReservations;
@property(retain, nonatomic) NSArray *currentReservations; // @synthesize currentReservations=_currentReservations;
@property(retain, nonatomic) NSDate *pastFetchDate; // @synthesize pastFetchDate=_pastFetchDate;
@property(retain, nonatomic) NSDate *cancelledFetchDate; // @synthesize cancelledFetchDate=_cancelledFetchDate;
@property(retain, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
- (void).cxx_destruct;
- (id)activeReservationsWithMobileKey;
- (void)bookTripWithCartIdentifier:(id)arg1 modifyReservation:(id)arg2 paymentMethod:(id)arg3 product:(id)arg4 addOns:(id)arg5 guest:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (void)createChatConversationForReservation:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)createSalesforceChatConversationForReservation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)precreateGuestwareChatConversationsForReservations:(id)arg1;
- (_Bool)isGuestwarePrecreateNeeded:(id)arg1;
- (_Bool)foundInNotNowCachedResponses:(id)arg1;
- (void)addToCachedNotNowResponses:(id)arg1;
- (void)checkInWithReservation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)checkOutWithReservation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)checkOutWithConfirmationNumber:(id)arg1 currencyOption:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findReservationForConfirmationNumber:(id)arg1 forceStayFetch:(_Bool)arg2 keyDownloadType:(long long)arg3 waitForKeyFetch:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)findReservationForConfirmationNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCachedViewedStateIfNotInReservationList:(id)arg1;
- (void)removeCachedRoomInformationIfNotInReservationList:(id)arg1;
- (void)updateAttributesForReservation:(id)arg1 force:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateProductTotalPricingAndInfoForReservation:(id)arg1 force:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateProductIdentifierAndAcceptedPaymentMethodsForReservation:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchStayServicesForReservation:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)captureStayServicesFromFetchedReservations:(id)arg1 responseInfo:(id)arg2;
- (void)purgeStayCacheOldData;
- (void)invalidateStayCachesForReservation:(id)arg1;
- (void)invalidateStayCacheForConfirmationNumber:(id)arg1;
- (void)assignStayInfoToReservations:(id)arg1 force:(_Bool)arg2 keyDownloadType:(long long)arg3 waitForKeyFetch:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)postReservationDidChangeNotification:(id)arg1;
- (void)removeCachedInformationForReservationsNotInList:(id)arg1;
- (void)fillInCachedAttributesForReservation:(id)arg1 wantStay:(_Bool)arg2;
- (_Bool)_confirmationNumbersMatch:(id)arg1 with:(id)arg2;
- (id)_uniqueReservationsInArray:(id)arg1 comparingWithArray:(id)arg2;
- (_Bool)_confirmationNumber:(id)arg1 existsInArray:(id)arg2;
- (void)_updateWithReservations:(id)arg1 mode:(unsigned long long)arg2 force:(_Bool)arg3 fetchDate:(id)arg4 offset:(unsigned long long)arg5 batchCount:(unsigned long long)arg6 total:(unsigned long long)arg7 isCached:(_Bool)arg8;
- (void)assignPropertiesToReservations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performPastReservationSearchWithForce:(_Bool)arg1 offset:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performReservationSearch:(_Bool)arg1 force:(_Bool)arg2 offset:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performNextBatchPastReservationSearchWithCompletion:(CDUnknownBlockType)arg1;
- (void)performPastReservationSearchWithForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performNextBatchCancelledReservationSearchWithCompletion:(CDUnknownBlockType)arg1;
- (void)performCancelledReservationSearchWithForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performNextBatchReservationSearchWithCompletion:(CDUnknownBlockType)arg1;
- (void)performReservationSearchWithForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshPastReservationsUsingForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshPastReservationsUsingForce:(_Bool)arg1;
- (void)refreshCancelledReservationsUsingForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshCancelledReservationsUsingForce:(_Bool)arg1;
- (void)refreshReservationsUsingForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshReservationsUsingForce:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasUnfetchedPastReservations;
@property(readonly, nonatomic) _Bool hasUnfetchedCancelledReservations;
@property(readonly, nonatomic) _Bool hasUnfetchedCurrentReservations;
- (void)addLookedUpReservations:(id)arg1;
- (id)reservationForChatServiceRequestId:(id)arg1;
- (id)reservationForConfirmationNumber:(id)arg1;
- (id)rewardsNumber;
- (void)willBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end
