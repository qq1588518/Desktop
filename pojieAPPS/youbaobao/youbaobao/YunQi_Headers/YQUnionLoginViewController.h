//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYLaunchBaseVC.h"

@interface YQUnionLoginViewController : IMYLaunchBaseVC
{
    CDUnknownBlockType _finishedBlock;
    CDUnknownBlockType _jumpBlock;
}

+ (void)postNotify;
+ (void)saveUserInfo:(id)arg1 loginType:(long long)arg2;
+ (void)tweetingBackgroup;
+ (void)updateAccount:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType jumpBlock; // @synthesize jumpBlock=_jumpBlock;
@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
- (void).cxx_destruct;
- (void)updateAccount:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;

@end
