//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewModel.h"

@class IMYPickerView, NSMutableArray, NSString;
@protocol IMYTLInviteService;

@interface IMYTLInputInviteCodeVM : IMYTLViewModel
{
    NSMutableArray *_tvData;
    unsigned long long _step;
    NSString *_inviteCode;
    NSString *_inviteAnswer;
    id <IMYTLInviteService> _inviteCodeService;
    IMYPickerView *_birthdayPicker;
}

@property(retain, nonatomic) IMYPickerView *birthdayPicker; // @synthesize birthdayPicker=_birthdayPicker;
@property(retain, nonatomic) id <IMYTLInviteService> inviteCodeService; // @synthesize inviteCodeService=_inviteCodeService;
@property(copy, nonatomic) NSString *inviteAnswer; // @synthesize inviteAnswer=_inviteAnswer;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(nonatomic) unsigned long long step; // @synthesize step=_step;
@property(retain, nonatomic) NSMutableArray *tvData; // @synthesize tvData=_tvData;
- (void).cxx_destruct;
- (id)validateInviteAnswer;
- (id)validateInviteCode;
- (void)initData;
- (id)init;

@end

