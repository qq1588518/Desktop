//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MOBFComponentManager : NSObject
{
    NSMutableArray *_regComponents;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableArray *regComponents; // @synthesize regComponents=_regComponents;
- (void).cxx_destruct;
- (id)getSolutionName:(id)arg1;
- (id)getComponentVersion:(id)arg1;
- (id)getComponentName:(id)arg1;
- (id)getComponents:(id)arg1;
- (void)unregComponent:(Class)arg1;
- (void)regComponent:(Class)arg1;
- (id)init;

@end

