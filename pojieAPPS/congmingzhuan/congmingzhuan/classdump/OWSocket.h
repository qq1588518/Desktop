//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfferWallBase/FMSocketDelegate-Protocol.h>

@class FMSocketManager, NSString, OWSocketMessageDecoder;

@interface OWSocket : NSObject <FMSocketDelegate>
{
    FMSocketManager *_socket;
    OWSocketMessageDecoder *_decoder;
}

+ (id)defaultSocket;
@property(retain, nonatomic) OWSocketMessageDecoder *decoder; // @synthesize decoder=_decoder;
@property(retain, nonatomic) FMSocketManager *socket; // @synthesize socket=_socket;
- (void).cxx_destruct;
- (void)socketDidConnected;
- (void)send:(id)arg1;
@property(readonly, nonatomic) _Bool isConnected;
- (void)connect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

