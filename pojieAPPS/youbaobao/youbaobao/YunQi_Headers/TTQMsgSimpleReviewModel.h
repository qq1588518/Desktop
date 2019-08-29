//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTQMsgSimpleReviewModel : NSObject
{
    int _read;
    unsigned long long _topicId;
    unsigned long long _reviewId;
}

+ (void)deleteMessageForTopic:(unsigned long long)arg1;
+ (void)deleteMessage:(unsigned long long)arg1;
+ (void)removeUnreadMessagesForTopic:(unsigned long long)arg1;
+ (void)removeUnreadMessages:(id)arg1;
+ (id)unreadMessagesForTopic:(unsigned long long)arg1;
+ (id)messagesForTopic:(unsigned long long)arg1;
+ (id)getPrimaryKey;
+ (id)getTableName;
@property(nonatomic) int read; // @synthesize read=_read;
@property(nonatomic) unsigned long long reviewId; // @synthesize reviewId=_reviewId;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;

@end
