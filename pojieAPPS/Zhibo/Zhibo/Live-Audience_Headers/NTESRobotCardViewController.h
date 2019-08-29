//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NIMAvatarImageView, NSString, NTESColorButton, UILabel;

@interface NTESRobotCardViewController : UIViewController
{
    NIMAvatarImageView *_avatarImageView;
    UILabel *_userIdLabel;
    UILabel *_nickLabel;
    UILabel *_introLabel;
    NSString *_userId;
    NTESColorButton *_chatButton;
}

@property(retain, nonatomic) NTESColorButton *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UILabel *userIdLabel; // @synthesize userIdLabel=_userIdLabel;
@property(retain, nonatomic) NIMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)refresh;
- (void)chat:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserId:(id)arg1;

@end

