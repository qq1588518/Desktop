//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface KSYReMuxer : NSObject
{
    struct AVFormatContext *_outFmtCtx;
    _Bool _bVideoKeyFrame;
    long long _aTsOffset;
    long long _vTsOffset;
    long long _lastVideoDts;
    _Bool _bPauseRecord;
    _Bool _mp4FastStart;
    NSDictionary *_metadata;
    NSURL *_recordURL;
    double _recordDuration;
    long long _recordState;
    long long _recordErrorCode;
}

@property(nonatomic) _Bool mp4FastStart; // @synthesize mp4FastStart=_mp4FastStart;
@property(readonly, nonatomic) long long recordErrorCode; // @synthesize recordErrorCode=_recordErrorCode;
@property(readonly, nonatomic) long long recordState; // @synthesize recordState=_recordState;
@property(nonatomic) _Bool bPauseRecord; // @synthesize bPauseRecord=_bPauseRecord;
@property(readonly, nonatomic) double recordDuration; // @synthesize recordDuration=_recordDuration;
@property(readonly, nonatomic) NSURL *recordURL; // @synthesize recordURL=_recordURL;
@property(copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *recordErrorName;
- (int)writeAV:(_Bool)arg1 Packet:(struct AVPacket *)arg2 from:(struct AVStream *)arg3;
- (void)finishRecord;
- (void)stopRecord;
- (_Bool)startRecordFrom:(struct AVFormatContext *)arg1 To:(id)arg2;
- (void)resetVar;
- (id)init;

@end

