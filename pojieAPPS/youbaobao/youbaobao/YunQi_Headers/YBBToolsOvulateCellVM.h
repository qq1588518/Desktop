//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYToolsOvulateModel, NSIndexPath, NSNumber, NSString, UIImage, YBBToolsOvulateTablePageVM;

@interface YBBToolsOvulateCellVM : NSObject
{
    _Bool _isInvert;
    UIImage *_showImage;
    NSString *_imageDateString;
    NSString *_imageURLString;
    unsigned long long _state;
    unsigned long long _opState;
    long long _fromType;
    IMYToolsOvulateModel *_ovulate;
    NSIndexPath *_cellIndex;
    NSNumber *_isDeleting;
    NSNumber *_tagDelete;
    YBBToolsOvulateTablePageVM *_pageVM;
    NSString *_ooxxTips;
    _Bool *_isStateRed;
    UIImage *_normalImage;
    UIImage *_invertedImage;
}

@property(retain, nonatomic) UIImage *invertedImage; // @synthesize invertedImage=_invertedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(nonatomic) _Bool *isStateRed; // @synthesize isStateRed=_isStateRed;
@property(copy, nonatomic) NSString *ooxxTips; // @synthesize ooxxTips=_ooxxTips;
@property(nonatomic) __weak YBBToolsOvulateTablePageVM *pageVM; // @synthesize pageVM=_pageVM;
@property(retain, nonatomic, getter=isTagDelete) NSNumber *tagDelete; // @synthesize tagDelete=_tagDelete;
@property(retain, nonatomic) NSNumber *isDeleting; // @synthesize isDeleting=_isDeleting;
@property(retain, nonatomic) NSIndexPath *cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) IMYToolsOvulateModel *ovulate; // @synthesize ovulate=_ovulate;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) unsigned long long opState; // @synthesize opState=_opState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) NSString *imageDateString; // @synthesize imageDateString=_imageDateString;
@property(retain, nonatomic) UIImage *showImage; // @synthesize showImage=_showImage;
@property(nonatomic) _Bool isInvert; // @synthesize isInvert=_isInvert;
- (void).cxx_destruct;
- (void)refreshOvulateOPState;
- (void)changeImage:(id)arg1;
- (void)getInvertImage;
- (void)getNormalImageWithImge:(id)arg1;
- (void)writeImage:(id)arg1 toFileWithOvulate:(id)arg2;
- (void)deleteOvulate;
- (void)saveOvulate;
- (id)getStateImage;
- (id)getBetterXXOOTip;
- (id)previousOvulate;
- (void)setImageURLStringWithImage:(id)arg1 ovulate:(id)arg2;
- (id)initWithOvulate:(id)arg1 image:(id)arg2 isInvert:(_Bool)arg3 fromCamera:(_Bool)arg4;
- (void)dealloc;

@end
