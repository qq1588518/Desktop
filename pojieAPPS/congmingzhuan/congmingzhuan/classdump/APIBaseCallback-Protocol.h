//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class APIBase, APIResponse;

@protocol APIBaseCallback <NSObject>
- (void)apiBase:(APIBase *)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)apiBase:(APIBase *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)apiBase:(APIBase *)arg1 didResponse:(APIResponse *)arg2;
@end

