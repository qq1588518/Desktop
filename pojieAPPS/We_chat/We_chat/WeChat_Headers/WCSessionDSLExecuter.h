//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WCSessionDSLExplainer;

@interface WCSessionDSLExecuter : MMObject
{
    WCSessionDSLExplainer *_sessionDSLExplainer;
}

@property(retain, nonatomic) WCSessionDSLExplainer *sessionDSLExplainer; // @synthesize sessionDSLExplainer=_sessionDSLExplainer;
- (void).cxx_destruct;
- (_Bool)getVariableWithClass:(Class)arg1 withVariableName:(id)arg2;
- (_Bool)getPropertyWithClass:(Class)arg1 withPropertyName:(id)arg2;
- (id)executeInstruction:(id)arg1 withDataPath:(id)arg2;
- (id)init;

@end
