//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/BLYAbstractModule.h>

@class NSMutableArray, NSString;

@interface BLYExtensionExceptionManager : BLYAbstractModule
{
    _Bool _uploading;
    _Bool _wcsessionExist;
    _Bool _appGroupAvailable;
    NSString *_appGroupIdentifier;
    NSMutableArray *_uploadingFiles;
}

+ (id)constructSelector;
+ (id)sharedManager;
@property(nonatomic, getter=isAppGroupAvailable) _Bool appGroupAvailable; // @synthesize appGroupAvailable=_appGroupAvailable;
@property(nonatomic) _Bool wcsessionExist; // @synthesize wcsessionExist=_wcsessionExist;
@property(retain, nonatomic) NSMutableArray *uploadingFiles; // @synthesize uploadingFiles=_uploadingFiles;
@property(nonatomic, getter=isUploading) _Bool uploading; // @synthesize uploading=_uploading;
@property(copy, nonatomic) NSString *appGroupIdentifier; // @synthesize appGroupIdentifier=_appGroupIdentifier;
- (void).cxx_destruct;
- (void)saveException:(id)arg1;
- (void)checkAndUpload;
- (id)exceptionFromFileURL:(id)arg1;
- (id)exceptionsFromOldPath;
- (id)appGroupDirectoryPath;
- (id)documentDirectoryPath;
- (id)packetExtraValues:(id)arg1;
- (id)packageDataWithException:(id)arg1;
- (void)buglyMartian_wcSessionDelegate;
- (_Bool)disableModule;
- (_Bool)enableModule;

@end

