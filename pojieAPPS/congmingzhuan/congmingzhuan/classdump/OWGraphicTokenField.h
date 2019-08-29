//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/FMTextField.h>

@class GraphicTokenApiManager, NSString, UIButton;

@interface OWGraphicTokenField : FMTextField
{
    UIButton *_graphicTokenButton;
    GraphicTokenApiManager *_graphicTokenApi;
    NSString *_nonce;
}

@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) GraphicTokenApiManager *graphicTokenApi; // @synthesize graphicTokenApi=_graphicTokenApi;
@property(retain, nonatomic) UIButton *graphicTokenButton; // @synthesize graphicTokenButton=_graphicTokenButton;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *nonceSecret;
- (void)graphicTokenButtonDidClick:(id)arg1;
- (void)refreshGraphicToken;
- (id)init;

@end

