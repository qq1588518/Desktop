//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

#import "NSCopying-Protocol.h"
#import "NSStreamDelegate-Protocol.h"

@class NSEnumerator, NSError, NSMutableArray, NSMutableData, NSOutputStream, NSString, ZOAUHTTPBodyPart;
@protocol NSStreamDelegate;

@interface ZOAUMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate>
{
    id <NSStreamDelegate> delegate;
    unsigned long long streamStatus;
    NSError *streamError;
    unsigned long long _numberOfBytesInPacket;
    double _delay;
    NSInputStream *_inputStream;
    unsigned long long _stringEncoding;
    NSMutableArray *_HTTPBodyParts;
    NSEnumerator *_HTTPBodyPartEnumerator;
    ZOAUHTTPBodyPart *_currentHTTPBodyPart;
    NSOutputStream *_outputStream;
    NSMutableData *_buffer;
}

@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) ZOAUHTTPBodyPart *currentHTTPBodyPart; // @synthesize currentHTTPBodyPart=_currentHTTPBodyPart;
@property(retain, nonatomic) NSEnumerator *HTTPBodyPartEnumerator; // @synthesize HTTPBodyPartEnumerator=_HTTPBodyPartEnumerator;
@property(retain, nonatomic) NSMutableArray *HTTPBodyParts; // @synthesize HTTPBodyParts=_HTTPBodyParts;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) unsigned long long numberOfBytesInPacket; // @synthesize numberOfBytesInPacket=_numberOfBytesInPacket;
- (void)setStreamError:(id)arg1;
- (id)streamError;
- (void)setStreamStatus:(unsigned long long)arg1;
- (unsigned long long)streamStatus;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
@property(readonly, nonatomic) unsigned long long contentLength;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)close;
- (void)open;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)appendHTTPBodyPart:(id)arg1;
- (void)setInitialAndFinalBoundaries;
- (id)initWithStringEncoding:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

