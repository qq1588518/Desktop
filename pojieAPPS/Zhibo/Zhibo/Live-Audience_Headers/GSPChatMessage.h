//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSPChatMessage : NSObject
{
    NSString *_senderName;
    NSString *_text;
    NSString *_senderChatID;
}

@property(retain, nonatomic) NSString *senderChatID; // @synthesize senderChatID=_senderChatID;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
- (void).cxx_destruct;

@end

