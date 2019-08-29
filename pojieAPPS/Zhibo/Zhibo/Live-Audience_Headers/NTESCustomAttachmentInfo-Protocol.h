//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NIMMessage, NSString, UIImage;

@protocol NTESCustomAttachmentInfo <NSObject>

@optional
- (_Bool)canBeForwarded;
- (_Bool)canBeRevoked;
- (void)setShowCoverImage:(UIImage *)arg1;
- (_Bool)shouldShowAvatar;
- (UIImage *)showCoverImage;
- (NSString *)formatedMessage;
- (struct UIEdgeInsets)contentViewInsets:(NIMMessage *)arg1;
- (struct CGSize)contentSize:(NIMMessage *)arg1 cellWidth:(double)arg2;
- (NSString *)cellContent:(NIMMessage *)arg1;
@end

