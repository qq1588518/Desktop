//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MCScenekitNodePropertyElement : NSObject
{
    float _transparent;
    NSString *_nodeName;
    long long _blendMode;
    NSDictionary *_materials;
}

@property(retain, nonatomic) NSDictionary *materials; // @synthesize materials=_materials;
@property(nonatomic) long long blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) float transparent; // @synthesize transparent=_transparent;
@property(retain, nonatomic) NSString *nodeName; // @synthesize nodeName=_nodeName;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

