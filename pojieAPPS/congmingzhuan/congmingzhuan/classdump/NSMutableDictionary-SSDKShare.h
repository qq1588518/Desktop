//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (SSDKShare)
- (void)SSDKSetupDouyinParamesByAssetLocalIds:(id)arg1 type:(unsigned long long)arg2;
- (void)SSDKSetupTwitterParamsByText:(id)arg1 video:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 tag:(id)arg5;
- (void)SSDKSetupTwitterParamsByText:(id)arg1 images:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 type:(unsigned long long)arg5;
- (void)SSDKEnableExtensionShare;
- (void)SSDKEnableUseClientShare;
- (id)_convertToImages:(id)arg1;
- (void)SSDKSetupTelegramParamsByText:(id)arg1 image:(id)arg2 audio:(id)arg3 video:(id)arg4 file:(id)arg5 menuDisplayPoint:(struct CGPoint)arg6 type:(unsigned long long)arg7;
- (void)SSDKSetupYouDaoNoteParamsByText:(id)arg1 images:(id)arg2 title:(id)arg3 source:(id)arg4 author:(id)arg5 notebook:(id)arg6;
- (void)SSDKSetupRenRenParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 albumId:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupMailParamsByText:(id)arg1 title:(id)arg2 images:(id)arg3 attachments:(id)arg4 recipients:(id)arg5 ccRecipients:(id)arg6 bccRecipients:(id)arg7 type:(unsigned long long)arg8;
- (void)SSDKSetupTencentWeiboShareParamsByText:(id)arg1 images:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupWhatsAppParamsByText:(id)arg1 image:(id)arg2 audio:(id)arg3 video:(id)arg4 menuDisplayPoint:(struct CGPoint)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupYouTubeParamsByVideo:(id)arg1 parts:(id)arg2 jsonString:(id)arg3;
- (void)SSDKSetupYouTubeParamsByVideo:(id)arg1 title:(id)arg2 description:(id)arg3 tags:(id)arg4 privacyStatus:(unsigned long long)arg5;
- (void)SSDKSetupVKontakteParamsByText:(id)arg1 images:(id)arg2 url:(id)arg3 groupId:(id)arg4 friendsOnly:(_Bool)arg5 latitude:(double)arg6 longitude:(double)arg7 type:(unsigned long long)arg8;
- (void)SSDKSetupMingDaoParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 title:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupKaiXinParamsByText:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3;
- (void)SSDKSetupCopyParamsByText:(id)arg1 images:(id)arg2 url:(id)arg3 type:(unsigned long long)arg4;
- (void)SSDKSetupSMSParamsByText:(id)arg1 title:(id)arg2 images:(id)arg3 attachments:(id)arg4 recipients:(id)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupPocketParamsByUrl:(id)arg1 title:(id)arg2 tags:(id)arg3 tweetId:(id)arg4;
- (void)SSDKSetupMeiPaiParamsByUrl:(id)arg1 type:(unsigned long long)arg2;
- (void)SSDKSetupMeiPaiParamsByUrl:(id)arg1 contentType:(unsigned long long)arg2;
- (void)SSDKSetupTumblrParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 title:(id)arg4 blogName:(id)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupLinkedInParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 title:(id)arg4 urlDesc:(id)arg5 visibility:(id)arg6 type:(unsigned long long)arg7;
- (void)SSDKSetupKakaoStoryParamsByContent:(id)arg1 title:(id)arg2 images:(id)arg3 url:(id)arg4 permission:(int)arg5 sharable:(_Bool)arg6 androidExecParam:(id)arg7 iosExecParam:(id)arg8;
- (void)SSDKSetupKaKaoTalkParamsByUrl:(id)arg1 templateId:(id)arg2 templateArgs:(id)arg3;
- (void)SSDKSetupKaKaoParamsByText:(id)arg1 images:(id)arg2 title:(id)arg3 url:(id)arg4 permission:(id)arg5 enableShare:(_Bool)arg6 imageSize:(struct CGSize)arg7 appButtonTitle:(id)arg8 androidExecParam:(id)arg9 androidMarkParam:(id)arg10 iphoneExecParams:(id)arg11 iphoneMarkParam:(id)arg12 ipadExecParams:(id)arg13 ipadMarkParam:(id)arg14 type:(unsigned long long)arg15 forPlatformSubType:(unsigned long long)arg16;
- (void)SSDKSetupGooglePlusParamsByText:(id)arg1 url:(id)arg2 type:(unsigned long long)arg3;
- (void)SSDKSetupEvernoteParamsByText:(id)arg1 images:(id)arg2 title:(id)arg3 notebook:(id)arg4 tags:(id)arg5 platformType:(unsigned long long)arg6;
- (void)SSDKSetupEvernoteParamsByText:(id)arg1 images:(id)arg2 video:(id)arg3 title:(id)arg4 notebook:(id)arg5 tags:(id)arg6 platformType:(unsigned long long)arg7;
- (void)SSDKSetupLineParamsByText:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3;
- (void)SSDKSetupInstapaperParamsByUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 content:(id)arg4 isPrivateFromSource:(_Bool)arg5 folderId:(long long)arg6 resolveFinalUrl:(_Bool)arg7;
- (void)SSDKSetupFlickrParamsByText:(id)arg1 image:(id)arg2 title:(id)arg3 tags:(id)arg4 isPublic:(_Bool)arg5 isFriend:(_Bool)arg6 isFamily:(_Bool)arg7 safetyLevel:(long long)arg8 contentType:(long long)arg9 hidden:(long long)arg10;
- (void)SSDKSetupYiXinParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 thumbImage:(id)arg4 image:(id)arg5 musicFileURL:(id)arg6 extInfo:(id)arg7 fileData:(id)arg8 comment:(id)arg9 toUserId:(id)arg10 type:(unsigned long long)arg11 forPlatformSubType:(unsigned long long)arg12;
- (void)SSDKSetupDropboxParamsByAttachment:(id)arg1;
- (void)SSDKSetupDouBanParamsByText:(id)arg1 image:(id)arg2 title:(id)arg3 url:(id)arg4 urlDesc:(id)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupPinterestParamsByImage:(id)arg1 desc:(id)arg2 url:(id)arg3 boardName:(id)arg4;
- (void)SSDKSetupAliSocialParamsByText:(id)arg1 image:(id)arg2 title:(id)arg3 url:(id)arg4 type:(unsigned long long)arg5 platformType:(unsigned long long)arg6;
- (void)SSDKSetupDingTalkParamsByText:(id)arg1 image:(id)arg2 title:(id)arg3 url:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupInstagramByVideo:(id)arg1;
- (void)SSDKSetupInstagramByImage:(id)arg1 menuDisplayPoint:(struct CGPoint)arg2;
- (void)SSDKSetupFacebookMessengerParamsByTitle:(id)arg1 url:(id)arg2 quoteText:(id)arg3 images:(id)arg4 gif:(id)arg5 audio:(id)arg6 video:(id)arg7 type:(unsigned long long)arg8;
- (void)SSDKSetupFacebookMessengerParamsByImage:(id)arg1 gif:(id)arg2 audio:(id)arg3 video:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupFacebookParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 urlTitle:(id)arg4 urlName:(id)arg5 attachementUrl:(id)arg6 hashtag:(id)arg7 quote:(id)arg8 type:(unsigned long long)arg9;
- (void)SSDKSetupFacebookParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 urlTitle:(id)arg4 urlName:(id)arg5 attachementUrl:(id)arg6 type:(unsigned long long)arg7;
- (void)SSDKSetupTwitterParamsByText:(id)arg1 images:(id)arg2 video:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupSinaWeiboLinkCardShareParamsByText:(id)arg1 cardTitle:(id)arg2 cardSummary:(id)arg3 images:(id)arg4 url:(id)arg5;
- (void)SSDKSetupSinaWeiboShareParamsByText:(id)arg1 title:(id)arg2 images:(id)arg3 video:(id)arg4 url:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 objectID:(id)arg8 isShareToStory:(_Bool)arg9 type:(unsigned long long)arg10;
- (void)SSDKSetupQQParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 thumbImage:(id)arg4 image:(id)arg5 type:(unsigned long long)arg6 forPlatformSubType:(unsigned long long)arg7;
- (void)SSDKSetupQQParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 audioFlashURL:(id)arg4 videoFlashURL:(id)arg5 thumbImage:(id)arg6 images:(id)arg7 type:(unsigned long long)arg8 forPlatformSubType:(unsigned long long)arg9;
- (void)SSDKSetupWeChatMiniProgramShareParamsByTitle:(id)arg1 description:(id)arg2 webpageUrl:(id)arg3 path:(id)arg4 thumbImage:(id)arg5 hdThumbImage:(id)arg6 userName:(id)arg7 withShareTicket:(_Bool)arg8 miniProgramType:(unsigned long long)arg9 forPlatformSubType:(unsigned long long)arg10;
- (void)SSDKSetupWeChatParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 thumbImage:(id)arg4 image:(id)arg5 musicFileURL:(id)arg6 extInfo:(id)arg7 fileData:(id)arg8 emoticonData:(id)arg9 sourceFileExtension:(id)arg10 sourceFileData:(id)arg11 type:(unsigned long long)arg12 forPlatformSubType:(unsigned long long)arg13;
- (void)SSDKSetupShareParamsByText:(id)arg1 images:(id)arg2 url:(id)arg3 title:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetShareFlags:(id)arg1;
@end

