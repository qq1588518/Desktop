//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HabitsModelData : NSObject
{
    _Bool _hasMultiLine;
    _Bool _isMultiLine;
    NSString *_dateString;
    NSString *_contentString;
    double _multiLineHeight;
}

@property(nonatomic) double multiLineHeight; // @synthesize multiLineHeight=_multiLineHeight;
@property(nonatomic) _Bool isMultiLine; // @synthesize isMultiLine=_isMultiLine;
@property(nonatomic) _Bool hasMultiLine; // @synthesize hasMultiLine=_hasMultiLine;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
- (void).cxx_destruct;

@end
