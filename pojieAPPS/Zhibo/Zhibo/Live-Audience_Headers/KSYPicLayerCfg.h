//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSYPicLayerCfg : NSObject
{
    int _picRotation;
    double _picAlpha;
    struct CGRect _picRect;
}

@property(nonatomic) int picRotation; // @synthesize picRotation=_picRotation;
@property(nonatomic) double picAlpha; // @synthesize picAlpha=_picAlpha;
@property(nonatomic) struct CGRect picRect; // @synthesize picRect=_picRect;
- (void)fillLayerVertex:(float *)arg1 from:(struct CGSize)arg2 to:(struct CGSize)arg3;
- (id)init;

@end

