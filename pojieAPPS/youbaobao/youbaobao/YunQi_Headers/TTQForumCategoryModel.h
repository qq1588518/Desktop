//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTQForumCategoryModel : NSObject
{
    _Bool _has_new;
    long long _categoryID;
    NSString *_name;
    long long _forum_number;
    NSString *_icon;
    NSString *_desc;
    NSString *_title;
    NSString *_icon2;
}

+ (id)defaultMineCategoryModel;
+ (void)initialize;
@property(copy, nonatomic) NSString *icon2; // @synthesize icon2=_icon2;
@property(nonatomic) _Bool has_new; // @synthesize has_new=_has_new;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) long long forum_number; // @synthesize forum_number=_forum_number;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;

@end

