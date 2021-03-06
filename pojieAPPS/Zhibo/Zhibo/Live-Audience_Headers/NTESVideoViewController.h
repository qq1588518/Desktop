//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MPMoviePlayerController, NTESVideoViewItem;

@interface NTESVideoViewController : UIViewController
{
    MPMoviePlayerController *_moviePlayer;
    NTESVideoViewItem *_item;
}

@property(retain, nonatomic) NTESVideoViewItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPMoviePlayerController *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
- (void)onTap:(id)arg1;
- (void)topStatusUIHidden:(_Bool)arg1;
- (void)moviePlayStateChanged:(id)arg1;
- (void)moviePlaybackComplete:(id)arg1;
- (void)startPlay;
- (void)downLoadVideo:(CDUnknownBlockType)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)previewObjectByImage:(id)arg1;
- (id)previewObjectByVideo:(id)arg1;
- (void)onMore:(id)arg1;
- (void)setupRightNavItem;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithVideoViewItem:(id)arg1;

@end

