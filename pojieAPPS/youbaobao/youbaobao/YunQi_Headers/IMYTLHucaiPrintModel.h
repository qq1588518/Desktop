//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIImage;

@interface IMYTLHucaiPrintModel : NSObject
{
    _Bool _hasSee;
    UIImage *_thumbImage;
    NSMutableDictionary *_thumbDic;
    NSMutableArray *_waitingCellDisapplearForThumbImgKeys;
}

@property(nonatomic) _Bool hasSee; // @synthesize hasSee=_hasSee;
@property(retain, nonatomic) NSMutableArray *waitingCellDisapplearForThumbImgKeys; // @synthesize waitingCellDisapplearForThumbImgKeys=_waitingCellDisapplearForThumbImgKeys;
@property(retain, nonatomic) NSMutableDictionary *thumbDic; // @synthesize thumbDic=_thumbDic;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
- (void).cxx_destruct;
- (unsigned long long)imageEidtStatus;
- (id)init;

@end
