//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface PNError : NSObject
{
    NSError *_error;
}

+ (id)errorWithError:(id)arg1;
+ (id)errorWithInvalidCondition:(id)arg1;
+ (id)errorWithInvalidElements:(id)arg1;
+ (id)errorWithInvalidArgument:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithSysError:(id)arg1;

@end

