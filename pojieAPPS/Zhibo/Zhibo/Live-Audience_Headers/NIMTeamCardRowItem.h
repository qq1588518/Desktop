//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NTESCardBodyData-Protocol.h"

@class NSString;

@interface NIMTeamCardRowItem : NSObject <NTESCardBodyData>
{
    _Bool _actionDisabled;
    _Bool _switchOn;
    NSString *_title;
    NSString *_subTitle;
    double _rowHeight;
    SEL _action;
    long long _type;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) _Bool switchOn; // @synthesize switchOn=_switchOn;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool actionDisabled; // @synthesize actionDisabled=_actionDisabled;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
