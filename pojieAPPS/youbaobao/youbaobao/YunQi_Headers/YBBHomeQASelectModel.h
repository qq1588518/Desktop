//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBBToolsQAModel.h"

#import "YBBHomeModel-Protocol.h"

@class NSString;

@interface YBBHomeQASelectModel : YBBToolsQAModel <YBBHomeModel>
{
    _Bool _isShow;
    double rowHeight;
    NSString *cellClass;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(copy, nonatomic) NSString *cellClass; // @synthesize cellClass;
- (void).cxx_destruct;
- (id)targetWithContext:(id)arg1;
@property(nonatomic) double rowHeight; // @synthesize rowHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
