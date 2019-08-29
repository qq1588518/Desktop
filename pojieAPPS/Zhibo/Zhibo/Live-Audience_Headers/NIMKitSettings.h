//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NIMKitSetting;

@interface NIMKitSettings : NSObject
{
    _Bool _isRight;
    NIMKitSetting *_textSetting;
    NIMKitSetting *_audioSetting;
    NIMKitSetting *_videoSetting;
    NIMKitSetting *_fileSetting;
    NIMKitSetting *_imageSetting;
    NIMKitSetting *_locationSetting;
    NIMKitSetting *_tipSetting;
    NIMKitSetting *_robotSetting;
    NIMKitSetting *_unsupportSetting;
    NIMKitSetting *_teamNotificationSetting;
    NIMKitSetting *_chatroomNotificationSetting;
    NIMKitSetting *_netcallNotificationSetting;
}

@property(retain, nonatomic) NIMKitSetting *netcallNotificationSetting; // @synthesize netcallNotificationSetting=_netcallNotificationSetting;
@property(retain, nonatomic) NIMKitSetting *chatroomNotificationSetting; // @synthesize chatroomNotificationSetting=_chatroomNotificationSetting;
@property(retain, nonatomic) NIMKitSetting *teamNotificationSetting; // @synthesize teamNotificationSetting=_teamNotificationSetting;
@property(retain, nonatomic) NIMKitSetting *unsupportSetting; // @synthesize unsupportSetting=_unsupportSetting;
@property(retain, nonatomic) NIMKitSetting *robotSetting; // @synthesize robotSetting=_robotSetting;
@property(retain, nonatomic) NIMKitSetting *tipSetting; // @synthesize tipSetting=_tipSetting;
@property(retain, nonatomic) NIMKitSetting *locationSetting; // @synthesize locationSetting=_locationSetting;
@property(retain, nonatomic) NIMKitSetting *imageSetting; // @synthesize imageSetting=_imageSetting;
@property(retain, nonatomic) NIMKitSetting *fileSetting; // @synthesize fileSetting=_fileSetting;
@property(retain, nonatomic) NIMKitSetting *videoSetting; // @synthesize videoSetting=_videoSetting;
@property(retain, nonatomic) NIMKitSetting *audioSetting; // @synthesize audioSetting=_audioSetting;
@property(retain, nonatomic) NIMKitSetting *textSetting; // @synthesize textSetting=_textSetting;
- (void).cxx_destruct;
- (void)applyDefaultNetcallNotificationSettings;
- (void)applyDefaultChatroomNotificationSettings;
- (void)applyDefaultTeamNotificationSettings;
- (void)applyDefaultUnsupportSettings;
- (void)applyDefaultRobotSettings;
- (void)applyDefaultTipSettings;
- (void)applyDefaultLocationSettings;
- (void)applyDefaultImageSettings;
- (void)applyDefaultFileSettings;
- (void)applyDefaultVideoSettings;
- (void)applyDefaultAudioSettings;
- (void)applyDefaultTextSettings;
- (void)applyDefaultSettings;
- (id)init:(_Bool)arg1;

@end

