//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLHomeCellBaseVM.h"

@class NSString;

@interface IMYTLHomeCellMessageVM : IMYTLHomeCellBaseVM
{
    NSString *_iconUrl;
    long long _countMessage;
}

+ (long long)getBabyStateWithoutBabyID:(id)arg1;
+ (long long)getBabyStateWithBabyID:(id)arg1;
+ (long long)getMessageCountWithoutBabyID:(id)arg1;
+ (id)getMessageVM:(id)arg1;
+ (void)setAllNewPhotoMessageNil;
+ (void)setNewPhotoMessageNilBayBabyID:(id)arg1;
+ (void)setNewMessageNilBayBabyID:(id)arg1;
+ (void)setNewMessage:(id)arg1 babyID:(id)arg2;
@property(nonatomic) long long countMessage; // @synthesize countMessage=_countMessage;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;
- (id)init;

@end
