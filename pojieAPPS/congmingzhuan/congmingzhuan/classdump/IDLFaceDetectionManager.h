//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, NSDate, NSMutableDictionary;

@interface IDLFaceDetectionManager : NSObject
{
    _Bool _enableSound;
    _Bool _notFirstLoad;
    _Bool _startRequeat;
    long long _maxFaceCount;
    double _lastFrameTime;
    AVAudioPlayer *_player;
    unsigned long long _lastRemind;
    NSDate *_lastRemindTime;
    NSDate *_timeoutTime;
    long long _noFaceCount;
    CDUnknownBlockType _detectCompletion;
    NSMutableDictionary *_logDictionary;
    NSMutableDictionary *_msgDict;
    NSMutableDictionary *_liveImgs;
    long long _maxFaceId;
    struct CGRect _maxRect;
    struct CGRect _minRect;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool startRequeat; // @synthesize startRequeat=_startRequeat;
@property(nonatomic) long long maxFaceId; // @synthesize maxFaceId=_maxFaceId;
@property(retain, nonatomic) NSMutableDictionary *liveImgs; // @synthesize liveImgs=_liveImgs;
@property(retain, nonatomic) NSMutableDictionary *msgDict; // @synthesize msgDict=_msgDict;
@property(retain, nonatomic) NSMutableDictionary *logDictionary; // @synthesize logDictionary=_logDictionary;
@property(copy, nonatomic) CDUnknownBlockType detectCompletion; // @synthesize detectCompletion=_detectCompletion;
@property(nonatomic) long long noFaceCount; // @synthesize noFaceCount=_noFaceCount;
@property(retain, nonatomic) NSDate *timeoutTime; // @synthesize timeoutTime=_timeoutTime;
@property(nonatomic) struct CGRect minRect; // @synthesize minRect=_minRect;
@property(nonatomic) struct CGRect maxRect; // @synthesize maxRect=_maxRect;
@property(retain, nonatomic) NSDate *lastRemindTime; // @synthesize lastRemindTime=_lastRemindTime;
@property(nonatomic) unsigned long long lastRemind; // @synthesize lastRemind=_lastRemind;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool notFirstLoad; // @synthesize notFirstLoad=_notFirstLoad;
@property(nonatomic) double lastFrameTime; // @synthesize lastFrameTime=_lastFrameTime;
@property(nonatomic) _Bool enableSound; // @synthesize enableSound=_enableSound;
@property(nonatomic) long long maxFaceCount; // @synthesize maxFaceCount=_maxFaceCount;
- (void).cxx_destruct;
- (void)logUploadingRequest;
- (void)timeoutManage;
- (void)remindControlWithRemindCode:(unsigned long long)arg1 remindString:(id)arg2;
- (void)playSoundWithResource:(id)arg1 ofType:(id)arg2;
- (void)resetFaceAbility;
- (void)playerStop;
- (void)reset;
- (void)startInitial;
- (void)detectStratrgyWithImage:(id)arg1 previewRect:(struct CGRect)arg2 detectRect:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)detectTurnstileImage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)detectMultiFacesImage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end

