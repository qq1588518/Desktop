//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YBBHomeLamaHeaderPhotoView, YBBHomeLamaTimelineModel;

@protocol YBBHomeLamaHeaderPhotoViewDataSource <NSObject>
- (NSString *)titleForEmpty;
- (_Bool)allowPlayVideoFor:(YBBHomeLamaHeaderPhotoView *)arg1 index:(long long)arg2;
- (long long)nextLoadedImageDataFor:(YBBHomeLamaHeaderPhotoView *)arg1 previousIndex:(long long)arg2;
- (YBBHomeLamaTimelineModel *)dataFor:(YBBHomeLamaHeaderPhotoView *)arg1 index:(long long)arg2;
@end
