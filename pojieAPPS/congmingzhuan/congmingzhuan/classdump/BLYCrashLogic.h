//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/BLYCommonUploadLogic.h>

@class BLYExceptionUpload, BLYJceObjectV2;

@interface BLYCrashLogic : BLYCommonUploadLogic
{
    _Bool _isCrashed;
    BLYJceObjectV2 *_jceModel;
    BLYExceptionUpload *_crashModel;
}

@property(retain, nonatomic) BLYExceptionUpload *crashModel; // @synthesize crashModel=_crashModel;
@property(nonatomic) _Bool isCrashed; // @synthesize isCrashed=_isCrashed;
- (void)setJceModel:(id)arg1;
- (void).cxx_destruct;
- (void)reportSuccessed:(_Bool)arg1;
- (void)persistentSuccessed:(_Bool)arg1;
- (_Bool)shouldUpload;
- (_Bool)shouldPersist;
- (id)jceCMDString;
- (long long)persistType;
- (id)persistFileKey;
- (id)exceptionUploadPackage;
- (id)jceModel;
- (id)initWithExceptionModel:(id)arg1;

@end

