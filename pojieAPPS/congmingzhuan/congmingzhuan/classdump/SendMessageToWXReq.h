//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/BaseReq.h>

@class NSString, WXMediaMessage;

@interface SendMessageToWXReq : BaseReq
{
    _Bool _bText;
    int _scene;
    NSString *_text;
    WXMediaMessage *_message;
    NSString *_toUserOpenId;
}

@property(copy, nonatomic) NSString *toUserOpenId; // @synthesize toUserOpenId=_toUserOpenId;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool bText; // @synthesize bText=_bText;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
