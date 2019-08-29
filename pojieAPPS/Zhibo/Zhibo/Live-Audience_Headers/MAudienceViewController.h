//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseRoomViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class JHUD, KSYMoviePlayerController, NSString, NSTimer, RACSubject, UIButton;

@interface MAudienceViewController : BaseRoomViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _mybeautifyModeOn;
    _Bool _iskicked;
    _Bool _isStartPlaying;
    RACSubject *_didStartPlayingSubject;
    RACSubject *_exitSubject;
    KSYMoviePlayerController *_ksPlayer;
    NSTimer *_timer;
    JHUD *_hudView;
    UIButton *_gameButton;
    NSTimer *_shareButtonAnimationTimer;
    NSTimer *_statisticalTimer;
    long long _residenceTime;
    unsigned long long _pullStramStatus;
}

@property(nonatomic) _Bool isStartPlaying; // @synthesize isStartPlaying=_isStartPlaying;
@property(nonatomic) unsigned long long pullStramStatus; // @synthesize pullStramStatus=_pullStramStatus;
@property(nonatomic) long long residenceTime; // @synthesize residenceTime=_residenceTime;
@property(retain, nonatomic) NSTimer *statisticalTimer; // @synthesize statisticalTimer=_statisticalTimer;
@property(retain, nonatomic) NSTimer *shareButtonAnimationTimer; // @synthesize shareButtonAnimationTimer=_shareButtonAnimationTimer;
@property(retain, nonatomic) UIButton *gameButton; // @synthesize gameButton=_gameButton;
@property(retain, nonatomic) JHUD *hudView; // @synthesize hudView=_hudView;
@property(nonatomic) _Bool iskicked; // @synthesize iskicked=_iskicked;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool mybeautifyModeOn; // @synthesize mybeautifyModeOn=_mybeautifyModeOn;
@property(retain, nonatomic) KSYMoviePlayerController *ksPlayer; // @synthesize ksPlayer=_ksPlayer;
@property(retain, nonatomic) RACSubject *exitSubject; // @synthesize exitSubject=_exitSubject;
@property(retain, nonatomic) RACSubject *didStartPlayingSubject; // @synthesize didStartPlayingSubject=_didStartPlayingSubject;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onLoginUserKicked;
- (void)clickcloseRoomBtn:(_Bool)arg1;
- (void)clearRoom;
- (void)showLiveEndWithAnchor:(id)arg1;
- (void)giftPopUpViewControllerDidDismiss;
- (void)clickGameVC;
- (void)invalidStatisticalTimer;
- (void)timer_func;
- (void)configStatisticalTimer;
- (void)invalidAnimationTimer;
- (void)startButtonAnimation;
- (void)configAnimation;
- (void)clickedBaseRoomBottombarBtn:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handlePlayerNitofication;
- (void)appDidEnterPlayGround;
- (void)appDidEnterBackground;
- (void)livePull:(id)arg1;
- (void)startPlayer:(id)arg1;
- (_Bool)isAnchorLiveStatus:(id)arg1;
- (void)clickWatchNextLive;
- (void)handleContenViewCallBack;
- (void)startDataFlow;
- (void)setAnchorInfoData:(id)arg1;
- (void)setupHudView;
- (void)setUI;
- (void)bindLogic;
- (void)viewDidLoad;
- (id)initWithUserType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
