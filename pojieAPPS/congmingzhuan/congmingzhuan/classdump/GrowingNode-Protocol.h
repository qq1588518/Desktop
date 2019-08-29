//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, UIColor, UIImage, UIWindow;
@protocol GrowingNode;

@protocol GrowingNode <NSObject>
- (id)growingNodeAsyncNativeHandler;
- (id)growingNodeAttribute:(NSString *)arg1 forChild:(id <GrowingNode>)arg2;
- (id)growingNodeAttribute:(NSString *)arg1;
- (UIImage *)growingNodeScreenShotWithScale:(double)arg1;
- (UIImage *)growingNodeScreenShot:(UIImage *)arg1;
- (struct CGRect)growingNodeFrame;
- (void)growingNodeHighLight:(_Bool)arg1 withBorderColor:(UIColor *)arg2 andBackgroundColor:(UIColor *)arg3;
- (id <GrowingNode>)growingNodeAttachedInfoNode;
- (UIWindow *)growingNodeWindow;
- (NSDictionary *)growingNodeDataDict;
- (NSString *)growingNodeContent;
- (NSString *)growingNodeName;
- (_Bool)growingNodeUserInteraction;
- (_Bool)growingNodeDonotCircle;
- (_Bool)growingNodeDonotTrackImp;
- (_Bool)growingNodeDonotTrack;
- (id <GrowingNode>)growingNodeParent;
- (void)growingNodeOutChilds:(NSMutableArray *)arg1 outPaths:(NSMutableArray *)arg2 filterChildNode:(id <GrowingNode>)arg3;
- (void)growingNodeOutContainerChilds:(NSMutableArray *)arg1 outPaths:(NSMutableArray *)arg2 filterChildNode:(id <GrowingNode>)arg3;

@optional
- (unsigned long long)growingNodeEligibleEventCategory;
@end

