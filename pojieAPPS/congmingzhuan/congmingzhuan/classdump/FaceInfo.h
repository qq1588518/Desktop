//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FaceInfo : NSObject
{
    long long _faceId;
    NSArray *_landMarks;
    double _score;
    NSArray *_headPose;
    NSArray *_cropImages;
    struct CGRect _faceRect;
}

@property(retain, nonatomic) NSArray *cropImages; // @synthesize cropImages=_cropImages;
@property(retain, nonatomic) NSArray *headPose; // @synthesize headPose=_headPose;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSArray *landMarks; // @synthesize landMarks=_landMarks;
@property(nonatomic) long long faceId; // @synthesize faceId=_faceId;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
- (void).cxx_destruct;

@end

