//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/GrowingCircleListBaseViewController.h>

@class GrowingEventListItem, NSArray, NSMutableDictionary, UIView;

@interface GrowingCircleListAddTagViewController : GrowingCircleListBaseViewController
{
    GrowingEventListItem *_item;
    NSMutableDictionary *_tableDict;
    UIView *_curTableView;
    NSArray *_typeArray;
}

@property(retain, nonatomic) NSArray *typeArray; // @synthesize typeArray=_typeArray;
@property(retain, nonatomic) UIView *curTableView; // @synthesize curTableView=_curTableView;
@property(retain, nonatomic) NSMutableDictionary *tableDict; // @synthesize tableDict=_tableDict;
@property(retain, nonatomic) GrowingEventListItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)selectDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)createTableView:(long long)arg1;
- (void)savePane:(id)arg1 name:(id)arg2 origElement:(id)arg3 filterElement:(id)arg4;
- (void)alertTextBoxWithTitle:(id)arg1 text:(id)arg2 placeHolder:(id)arg3 onFinish:(CDUnknownBlockType)arg4;
- (long long)styleForStyle:(long long)arg1;
- (void)selectIndex:(long long)arg1;
- (void)viewDidLoad;
- (void)buildTitleView;
- (id)initWithItem:(id)arg1;

@end

