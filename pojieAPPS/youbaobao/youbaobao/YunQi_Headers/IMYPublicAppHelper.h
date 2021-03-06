//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYAppFeedbackProtocol-Protocol.h"
#import "IMYAppProtocol-Protocol.h"
#import "IMYAppStoreProtocol-Protocol.h"
#import "IMYAppUserProtocol-Protocol.h"

@class NSDate, NSString, RACSignal;

@interface IMYPublicAppHelper : NSObject <IMYAppProtocol, IMYAppStoreProtocol, IMYAppUserProtocol, IMYAppFeedbackProtocol>
{
    _Bool _todaySigned;
    _Bool _is_mp_vip;
    _Bool _hasMiYouQuan;
    _Bool _hasWatermark;
    _Bool _cannotAccess;
    _Bool _isNight;
    _Bool _isDefaultTheme;
    _Bool _hasLogin;
    _Bool _isSecretShowing;
    _Bool _isCloseChapingAds;
    _Bool _isNoAlterUpdate;
    NSString *_userid;
    unsigned long long _userMode;
    NSString *_nickName;
    NSString *_avatar;
    unsigned long long _coin;
    unsigned long long _level;
    NSDate *_lastSignDate;
    unsigned long long _user_type;
    NSString *_birthday;
    long long _msgCount;
    NSString *_channelID;
    NSString *_language;
    NSString *_themeID;
    NSString *_themeName;
    NSString *_userToken;
    NSString *_virtualToken;
    NSString *_myclient;
    NSString *_myid;
    long long _parsMensesDay;
    long long _parsInterval;
    double _height;
    double _tagetWeight;
    NSString *_lastTimeMenses;
    NSString *_lastTimeMensesInRecord;
    NSString *_lastTimeMensesEndInRecord;
    long long _pregnancyOdds;
    long long _today_diff_ovulatory_day;
    unsigned long long _gravidity_value;
    NSString *_pregnancy;
    long long _pregnancyStartDayDiff;
    NSString *_babyBirthday;
    NSString *_baby_nick;
    NSString *_baby_weight;
    long long _baby_sex;
    long long _is_eutocia;
}

+ (_Bool)userLowFlowModel;
+ (id)shareAppHelper;
+ (void)setShareAppHelper:(id)arg1;
+ (void)setUsingAppHelperClass:(Class)arg1;
+ (id)getUserModeChangedSubject;
+ (id)getUseridChangedSubject;
+ (void)initialize;
+ (_Bool)YYSuper;
+ (id)getDefaultChannelID;
+ (Class)usingAppHelperClass;
+ (id)YouzijieAppName;
+ (id)YuerAppName;
+ (id)YunqiProAppName;
+ (id)YunqiAppName;
+ (id)JingqiProAppName;
+ (id)JingqiAppName;
+ (_Bool)Yunqi;
+ (_Bool)Jingqi;
+ (_Bool)isBabyJournal;
+ (_Bool)isEBCoupon;
+ (_Bool)isYunqiPro;
+ (_Bool)isYouzijie;
+ (_Bool)isJingqiPro;
+ (_Bool)isFanhuan;
+ (_Bool)isYuer;
+ (_Bool)isShoushen;
+ (_Bool)isO2OClient;
+ (_Bool)isYunqi;
+ (_Bool)isJingqi;
+ (long long)AppID;
+ (void)jumpToYouzanWeb:(id)arg1;
+ (void)hidePhotoTabBubbleView;
+ (void)showPhotoTabBubbleViewText:(id)arg1 callBlack:(CDUnknownBlockType)arg2;
+ (id)changeToMotherNotificationName;
+ (id)userInfoChangeNotificationName;
+ (id)chanegeDueDateNotificationName;
+ (id)changeBabyInfoNotificationName;
+ (id)refreshFocusPhotoBabyMessageNotificationName;
+ (id)loginFriendNotificationName;
+ (id)loginFriendSignal;
+ (id)loginSuccessSignal;
+ (void)changeToFriendVer:(_Bool)arg1;
+ (_Bool)is_friend_version;
@property(nonatomic) long long is_eutocia; // @synthesize is_eutocia=_is_eutocia;
@property(nonatomic) long long baby_sex; // @synthesize baby_sex=_baby_sex;
@property(copy, nonatomic) NSString *baby_weight; // @synthesize baby_weight=_baby_weight;
@property(copy, nonatomic) NSString *baby_nick; // @synthesize baby_nick=_baby_nick;
@property(copy, nonatomic) NSString *babyBirthday; // @synthesize babyBirthday=_babyBirthday;
@property(nonatomic) long long pregnancyStartDayDiff; // @synthesize pregnancyStartDayDiff=_pregnancyStartDayDiff;
@property(retain, nonatomic) NSString *pregnancy; // @synthesize pregnancy=_pregnancy;
@property(nonatomic) unsigned long long gravidity_value; // @synthesize gravidity_value=_gravidity_value;
@property(readonly, nonatomic) long long today_diff_ovulatory_day; // @synthesize today_diff_ovulatory_day=_today_diff_ovulatory_day;
@property(readonly, nonatomic) long long pregnancyOdds; // @synthesize pregnancyOdds=_pregnancyOdds;
@property(readonly, nonatomic) NSString *lastTimeMensesEndInRecord; // @synthesize lastTimeMensesEndInRecord=_lastTimeMensesEndInRecord;
@property(readonly, nonatomic) NSString *lastTimeMensesInRecord; // @synthesize lastTimeMensesInRecord=_lastTimeMensesInRecord;
@property(retain, nonatomic) NSString *lastTimeMenses; // @synthesize lastTimeMenses=_lastTimeMenses;
@property(nonatomic) double tagetWeight; // @synthesize tagetWeight=_tagetWeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) long long parsInterval; // @synthesize parsInterval=_parsInterval;
@property(nonatomic) long long parsMensesDay; // @synthesize parsMensesDay=_parsMensesDay;
@property(copy, nonatomic) NSString *myid; // @synthesize myid=_myid;
@property(nonatomic) _Bool isNoAlterUpdate; // @synthesize isNoAlterUpdate=_isNoAlterUpdate;
@property(nonatomic) _Bool isCloseChapingAds; // @synthesize isCloseChapingAds=_isCloseChapingAds;
@property(nonatomic) _Bool isSecretShowing; // @synthesize isSecretShowing=_isSecretShowing;
@property(copy, nonatomic) NSString *myclient; // @synthesize myclient=_myclient;
@property(nonatomic) _Bool hasLogin; // @synthesize hasLogin=_hasLogin;
@property(copy, nonatomic) NSString *virtualToken; // @synthesize virtualToken=_virtualToken;
@property(copy, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(nonatomic) _Bool isDefaultTheme; // @synthesize isDefaultTheme=_isDefaultTheme;
@property(nonatomic) _Bool isNight; // @synthesize isNight=_isNight;
@property(copy, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
@property(copy, nonatomic) NSString *themeID; // @synthesize themeID=_themeID;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(nonatomic) _Bool cannotAccess; // @synthesize cannotAccess=_cannotAccess;
@property(nonatomic) long long msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) _Bool hasWatermark; // @synthesize hasWatermark=_hasWatermark;
@property(nonatomic) _Bool hasMiYouQuan; // @synthesize hasMiYouQuan=_hasMiYouQuan;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) _Bool is_mp_vip; // @synthesize is_mp_vip=_is_mp_vip;
@property(nonatomic) unsigned long long user_type; // @synthesize user_type=_user_type;
@property(nonatomic) _Bool todaySigned; // @synthesize todaySigned=_todaySigned;
@property(copy, nonatomic) NSDate *lastSignDate; // @synthesize lastSignDate=_lastSignDate;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) unsigned long long coin; // @synthesize coin=_coin;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long userMode; // @synthesize userMode=_userMode;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
- (void).cxx_destruct;
- (void)saveUserData:(id)arg1;
- (void)runActionBlockWithLaunchFinished:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)goRating;
@property(readonly, nonatomic) _Bool enabledNotification;
@property(readonly, nonatomic) NSString *getModeDate;
@property(readonly, nonatomic) NSString *modeKeyString;
@property(readonly, nonatomic) NSString *userModeString;
@property(readonly, nonatomic) RACSignal *userModeChangedSignal;
@property(readonly, nonatomic) RACSignal *useridChangedSignal;
@property(readonly, nonatomic) NSString *appSecretKey;
@property(readonly, nonatomic) NSString *appScheme;
@property(readonly, nonatomic) NSString *appleStoreID;
@property(readonly, nonatomic) NSString *appName;
@property(readonly, nonatomic) NSString *app_id;
- (void)changeToFriendVer;
@property(readonly, nonatomic) _Bool is_friend_version;
- (void)runActionBlockWithLaunchFinished:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (_Bool)isTestPaperRemindOpen;
- (_Bool)isTemperatureRemindOpen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

