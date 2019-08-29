//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTLogPluginProtocol-Protocol.h"

@class NSArray, NSString;

@interface MTLogPlugin : NSObject <MTLogPluginProtocol>
{
    _Bool _affectsFirstLogmessage;
    NSString *_name;
    NSString *_value;
    NSArray *_args;
}

+ (struct _NSRange)expectedNumberOfArgumentsForCommand:(id)arg1;
@property(nonatomic) _Bool affectsFirstLogmessage; // @synthesize affectsFirstLogmessage=_affectsFirstLogmessage;
@property(retain, nonatomic) NSArray *args; // @synthesize args=_args;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *pluginID;
- (id)initWithName:(id)arg1 value:(id)arg2 args:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
