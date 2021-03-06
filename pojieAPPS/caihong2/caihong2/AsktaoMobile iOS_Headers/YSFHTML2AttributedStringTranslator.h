//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol YSFHTMLParserProtocol;

@interface YSFHTML2AttributedStringTranslator : NSObject
{
    NSString *_text;
    id <YSFHTMLParserProtocol> _parser;
    NSDictionary *_defaultAttributes;
}

@property(retain, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
@property(retain, nonatomic) id <YSFHTMLParserProtocol> parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (id)colorFromHex:(id)arg1;
- (void)applyAttributeName:(id)arg1 attribute:(id)arg2 toText:(id)arg3 range:(struct _NSRange)arg4;
- (void)applyCenterStyle:(id)arg1 ToText:(id)arg2 range:(struct _NSRange)arg3;
- (void)applyParagraphStyle:(id)arg1 ToText:(id)arg2 range:(struct _NSRange)arg3;
- (void)applyFontAttributes:(id)arg1 toText:(id)arg2 range:(struct _NSRange)arg3;
- (void)applyUnderlineColor:(id)arg1 toText:(id)arg2 range:(struct _NSRange)arg3;
- (void)applyDoubleUnderlineText:(id)arg1 range:(struct _NSRange)arg2;
- (void)applySingleUnderlineText:(id)arg1 range:(struct _NSRange)arg2;
- (void)applyColor:(id)arg1 toText:(id)arg2 range:(struct _NSRange)arg3;
- (void)applyImage:(id)arg1 ToText:(id)arg2 range:(struct _NSRange)arg3;
- (void)applyLink:(id)arg1 ToText:(id)arg2 range:(struct _NSRange)arg3;
- (void)applyBoldItalicStyleToText:(id)arg1 range:(struct _NSRange)arg2;
- (void)applyBoldStyleToText:(id)arg1 range:(struct _NSRange)arg2;
- (void)applyItalicStyleToText:(id)arg1 range:(struct _NSRange)arg2;
- (void)applyHTMLStyle:(id)arg1 toText:(id)arg2;
- (id)translate;
- (id)initWithHTMLString:(id)arg1;

@end

