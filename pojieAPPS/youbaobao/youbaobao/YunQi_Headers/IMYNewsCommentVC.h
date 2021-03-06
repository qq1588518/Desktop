//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYNewsCommentBaseVC.h"

#import "IMYNewsDetailViewProtocol-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, IMYNewsCommentViewModel, IMYSimpleTableView, NSString, UIScrollView;
@protocol IMYITableViewAdManager, IMYNewsContentDetailViewDelegate;

@interface IMYNewsCommentVC : IMYNewsCommentBaseVC <UITableViewDelegate, IMYNewsDetailViewProtocol>
{
    _Bool _isOpenComment;
    _Bool _isShowCommentView;
    _Bool _isHideCaptionView;
    _Bool _isShowCommentAll;
    _Bool _isShowTag;
    _Bool _isChildVC;
    _Bool _fromVideoFeeds;
    _Bool _showXiaoShiPinStyle;
    _Bool _is_show_partner_ad;
    _Bool _dataLoaded;
    _Bool _hasShowHotReview;
    id <IMYNewsContentDetailViewDelegate> _imyDelegate;
    long long _newsId;
    long long _type;
    long long _position;
    CDUnknownBlockType _showDetailComment;
    IMYSimpleTableView *_tableView;
    IMYCaptionView *_captionView;
    IMYNewsCommentViewModel *_viewModel;
    id <IMYITableViewAdManager> _adManager;
    id <IMYITableViewAdManager> _commentAdManager;
}

@property(retain, nonatomic) id <IMYITableViewAdManager> commentAdManager; // @synthesize commentAdManager=_commentAdManager;
@property(retain, nonatomic) id <IMYITableViewAdManager> adManager; // @synthesize adManager=_adManager;
@property(nonatomic) _Bool hasShowHotReview; // @synthesize hasShowHotReview=_hasShowHotReview;
@property(retain, nonatomic) IMYNewsCommentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) IMYSimpleTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType showDetailComment; // @synthesize showDetailComment=_showDetailComment;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(nonatomic) _Bool is_show_partner_ad; // @synthesize is_show_partner_ad=_is_show_partner_ad;
@property(nonatomic) _Bool showXiaoShiPinStyle; // @synthesize showXiaoShiPinStyle=_showXiaoShiPinStyle;
@property(nonatomic) _Bool fromVideoFeeds; // @synthesize fromVideoFeeds=_fromVideoFeeds;
@property(nonatomic) _Bool isChildVC; // @synthesize isChildVC=_isChildVC;
@property(nonatomic) _Bool isShowTag; // @synthesize isShowTag=_isShowTag;
@property(nonatomic) _Bool isShowCommentAll; // @synthesize isShowCommentAll=_isShowCommentAll;
@property(nonatomic) _Bool isHideCaptionView; // @synthesize isHideCaptionView=_isHideCaptionView;
@property(nonatomic) _Bool isShowCommentView; // @synthesize isShowCommentView=_isShowCommentView;
@property(nonatomic) _Bool isOpenComment; // @synthesize isOpenComment=_isOpenComment;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
@property(nonatomic) __weak id <IMYNewsContentDetailViewDelegate> imyDelegate; // @synthesize imyDelegate=_imyDelegate;
- (void).cxx_destruct;
- (id)getCellModelWithCommentId:(long long)arg1;
- (void)updateModelWithUpdateInfo:(id)arg1 CommentId:(long long)arg2 commentCount:(long long)arg3 subComments:(id)arg4;
- (id)newsCommentDetailViewController:(long long)arg1 gotoId:(long long)arg2 referenceName:(id)arg3 showKeyboard:(_Bool)arg4;
- (void)refresh;
- (void)commentButtonPressed:(id)arg1;
- (void)IMYNewsRecommendNewsDidDisplay;
- (void)IMYNewsDetailViewCommentReloadAction:(unsigned long long)arg1;
- (double)IMYNewsDetailCommentViewOffset:(_Bool)arg1;
- (void)scrollToFirstComment;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadNewsComment:(id)arg1;
- (void)commentViewCallBack:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
@property(readonly) UIScrollView *scrollView;
- (void)reloadData;
- (void)endFooterRefreshWithMore:(_Bool)arg1;
- (void)initCommentAdManager;
- (void)initAdManager;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNewsId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

