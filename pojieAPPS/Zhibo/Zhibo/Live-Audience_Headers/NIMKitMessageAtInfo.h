//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NIMKitMessageAtInfo : NSObject
{
    NSMutableArray *_atMessageListArray;
}

@property(retain, nonatomic) NSMutableArray *atMessageListArray; // @synthesize atMessageListArray=_atMessageListArray;
- (void).cxx_destruct;
- (void)addTextWithReplaceRange:(struct _NSRange)arg1 text:(id)arg2;
- (struct _NSRange)deleteTextWithRange:(struct _NSRange)arg1 text:(id)arg2;
- (void)addSendAtMessageData:(id)arg1;
- (id)initSendAtMessageInfo;

@end

