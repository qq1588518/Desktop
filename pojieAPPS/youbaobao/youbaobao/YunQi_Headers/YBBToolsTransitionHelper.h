//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, YBBToolsTransitionNavDelegate;

@interface YBBToolsTransitionHelper : NSObject
{
    NSMutableArray *_filterVCs;
    id _oldDelegate;
    YBBToolsTransitionNavDelegate *_nowDelegate;
}

+ (id)shareInstance;
@property(retain, nonatomic) YBBToolsTransitionNavDelegate *nowDelegate; // @synthesize nowDelegate=_nowDelegate;
@property(retain, nonatomic) id oldDelegate; // @synthesize oldDelegate=_oldDelegate;
@property(retain, nonatomic) NSMutableArray *filterVCs; // @synthesize filterVCs=_filterVCs;
- (void).cxx_destruct;
- (void)transilateStyle:(long long)arg1 fromVC:(id)arg2 toVC:(id)arg3 didShow:(CDUnknownBlockType)arg4;
- (id)init;

@end

