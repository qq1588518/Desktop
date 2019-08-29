//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BarrageWalkSprite.h"

#import "BarrageTextProtocol-Protocol.h"

@class NSAttributedString, NSString, UIColor;

@interface BarrageWalkTextSprite : BarrageWalkSprite <BarrageTextProtocol>
{
    double _fontSize;
    UIColor *_textColor;
    NSString *_text;
    NSString *_fontFamily;
    UIColor *_shadowColor;
    NSAttributedString *_attributedText;
    struct CGSize _shadowOffset;
}

@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (id)bindingView;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) UIColor *borderColor;
@property(nonatomic) double borderWidth;
@property(nonatomic) double cornerRadius;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct CGSize mandatorySize;
@property(readonly) Class superclass;

@end

