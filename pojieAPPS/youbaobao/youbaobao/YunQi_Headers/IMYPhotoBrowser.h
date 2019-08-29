//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYPhotoViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IMYButton, IMYImageSelectButton, IMYPhotoToolbar, NSMutableArray, NSMutableSet, NSString, UIScrollView, UIView;
@protocol IMYPhotoBrowserDelegate;

@interface IMYPhotoBrowser : IMYPublicBaseViewController <IMYPhotoViewDelegate, UIScrollViewDelegate>
{
    NSMutableSet *_visiblePhotoViews;
    NSMutableSet *_reusablePhotoViews;
    _Bool _statusBarHiddenInited;
    _Bool _navBarTranslucentInited;
    long long _statusBarStyleInited;
    _Bool _hideUseFadeAnimation;
    _Bool _bMultipleToolbar;
    _Bool _showSave;
    _Bool _showDelete;
    _Bool _needShowCicrle;
    _Bool _enableSwipeToDismiss;
    _Bool _popVertical;
    _Bool _resetPanGestureDirection;
    _Bool _shouldCompletePopAnimation;
    id <IMYPhotoBrowserDelegate> _delegate;
    NSMutableArray *_photos;
    long long _currentPhotoIndex;
    CDUnknownBlockType _deleteBlock;
    IMYPhotoToolbar *_toolbar;
    UIView *_multipleToolbar;
    IMYButton *_btn_done;
    NSMutableArray *_selectedAssetUrls;
    CDUnknownBlockType _selectCompleteBlock;
    long long _showType;
    unsigned long long _maxPhotos;
    CDUnknownBlockType _completeBlock;
    long long _pageControlStyle;
    UIScrollView *_photoScrollView;
    IMYImageSelectButton *_btn_topRight;
    UIView *_coverView;
    UIView *_lastPushView;
}

+ (id)showWithPhotos:(id)arg1 atIndex:(unsigned long long)arg2 fromRect:(struct CGRect)arg3 isNeedShowCicrle:(_Bool)arg4;
+ (id)showWithPhotos:(id)arg1 atIndex:(unsigned long long)arg2 fromRect:(struct CGRect)arg3;
+ (id)showWithPhotos:(id)arg1 isNeedShowCicrle:(_Bool)arg2;
+ (id)showWithPhotos:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)showWithPhotos:(id)arg1;
+ (id)showWithPhoto:(id)arg1;
@property(nonatomic) _Bool shouldCompletePopAnimation; // @synthesize shouldCompletePopAnimation=_shouldCompletePopAnimation;
@property(nonatomic) _Bool resetPanGestureDirection; // @synthesize resetPanGestureDirection=_resetPanGestureDirection;
@property(nonatomic) _Bool popVertical; // @synthesize popVertical=_popVertical;
@property(retain, nonatomic) UIView *lastPushView; // @synthesize lastPushView=_lastPushView;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool enableSwipeToDismiss; // @synthesize enableSwipeToDismiss=_enableSwipeToDismiss;
@property(retain, nonatomic) IMYImageSelectButton *btn_topRight; // @synthesize btn_topRight=_btn_topRight;
@property(retain, nonatomic) UIScrollView *photoScrollView; // @synthesize photoScrollView=_photoScrollView;
@property(nonatomic) _Bool needShowCicrle; // @synthesize needShowCicrle=_needShowCicrle;
@property(nonatomic) long long pageControlStyle; // @synthesize pageControlStyle=_pageControlStyle;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) unsigned long long maxPhotos; // @synthesize maxPhotos=_maxPhotos;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(nonatomic) _Bool showDelete; // @synthesize showDelete=_showDelete;
@property(nonatomic) _Bool showSave; // @synthesize showSave=_showSave;
@property(copy, nonatomic) CDUnknownBlockType selectCompleteBlock; // @synthesize selectCompleteBlock=_selectCompleteBlock;
@property(retain, nonatomic) NSMutableArray *selectedAssetUrls; // @synthesize selectedAssetUrls=_selectedAssetUrls;
@property(retain, nonatomic) IMYButton *btn_done; // @synthesize btn_done=_btn_done;
@property(retain, nonatomic) UIView *multipleToolbar; // @synthesize multipleToolbar=_multipleToolbar;
@property(nonatomic) _Bool bMultipleToolbar; // @synthesize bMultipleToolbar=_bMultipleToolbar;
@property(retain, nonatomic) IMYPhotoToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property _Bool hideUseFadeAnimation; // @synthesize hideUseFadeAnimation=_hideUseFadeAnimation;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(nonatomic) long long currentPhotoIndex; // @synthesize currentPhotoIndex=_currentPhotoIndex;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(nonatomic) __weak id <IMYPhotoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)verticalPanGestureEnd;
- (void)verticalPanGestureMove:(double)arg1;
- (void)pan:(id)arg1;
- (void)done:(id)arg1;
- (void)updateMultipleToolbar;
- (void)updateTopRightBtn;
- (void)createMultipToolbar;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTollbarState;
- (id)dequeueReusablePhotoView;
- (_Bool)isShowingPhotoViewAtIndex:(unsigned long long)arg1;
- (void)loadImageNearIndex:(long long)arg1;
- (void)showPhotoViewAtIndex:(long long)arg1;
- (void)showPhotos;
- (void)reloadData;
- (void)photoViewShouldLongPress:(id)arg1;
- (void)photoViewImageFail:(id)arg1;
- (void)photoViewImageFinishLoad:(id)arg1;
- (void)photoViewDidEndZoom:(id)arg1;
- (void)photoViewSingleTap:(id)arg1;
- (_Bool)photoViewHideAnimationUseFade;
- (void)hide;
- (void)setupPanGestureRecognizer;
- (void)createScrollView;
- (void)createToolbar;
- (void)msgTouch:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showWithAnimationAtIndex:(unsigned long long)arg1 fromRect:(struct CGRect)arg2;
- (void)dismiss;
- (void)show;
- (void)deleteImage:(id)arg1;
- (void)rightButtonAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (id)init;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
