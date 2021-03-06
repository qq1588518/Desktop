//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ApptentiveTask.h"

#import "ApptentiveAPIRequestDelegate-Protocol.h"

@class ApptentiveAPIRequest, NSString;

@interface ApptentiveSurveyResponseTask : ApptentiveTask <ApptentiveAPIRequestDelegate>
{
    NSString *_pendingSurveyResponseID;
    ApptentiveAPIRequest *_request;
}

+ (void)load;
@property(retain, nonatomic) ApptentiveAPIRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *pendingSurveyResponseID; // @synthesize pendingSurveyResponseID=_pendingSurveyResponseID;
- (void).cxx_destruct;
- (_Bool)processResult:(id)arg1;
- (void)at_APIRequestDidFail:(id)arg1;
- (void)at_APIRequestDidProgress:(id)arg1;
- (void)at_APIRequestDidFinish:(id)arg1 result:(id)arg2;
- (id)taskName;
- (float)percentComplete;
- (void)stop;
- (void)start;
- (_Bool)canStart;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

