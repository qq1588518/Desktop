//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRM80AttributedLabel.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class E_CursorView, E_MagnifiterView, NSString, UIGestureRecognizer, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol IMYSelectableAttributedLabelDelegate;

@interface IMYSelectableAttributedLabel : IMYRM80AttributedLabel <UIGestureRecognizerDelegate>
{
    struct _NSRange selectedRange;
    UIGestureRecognizer *panRecognizer;
    UITapGestureRecognizer *tapRecognizer;
    UILongPressGestureRecognizer *longRecognizer;
    _Bool _shouldRecognizeSimultaneouslyWithGestureRecognizer;
    E_CursorView *_leftCursor;
    E_CursorView *_rightCursor;
    E_MagnifiterView *_magnifierView;
    UIImage *_magnifiterImage;
    id <IMYSelectableAttributedLabelDelegate> _selectableDelegate;
}

@property(nonatomic) _Bool shouldRecognizeSimultaneouslyWithGestureRecognizer; // @synthesize shouldRecognizeSimultaneouslyWithGestureRecognizer=_shouldRecognizeSimultaneouslyWithGestureRecognizer;
@property(nonatomic) id <IMYSelectableAttributedLabelDelegate> selectableDelegate; // @synthesize selectableDelegate=_selectableDelegate;
@property(retain, nonatomic) UIImage *magnifiterImage; // @synthesize magnifiterImage=_magnifiterImage;
@property(retain, nonatomic) E_MagnifiterView *magnifierView; // @synthesize magnifierView=_magnifierView;
@property(retain, nonatomic) E_CursorView *rightCursor; // @synthesize rightCursor=_rightCursor;
@property(retain, nonatomic) E_CursorView *leftCursor; // @synthesize leftCursor=_leftCursor;
- (void).cxx_destruct;
- (id)text;
- (struct __CTFrame *)getCTFrame;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)copyword:(id)arg1;
- (void)resetting;
- (struct _NSRange)rangeIntersection:(struct _NSRange)arg1 withSecond:(struct _NSRange)arg2;
- (struct _NSRange)characterRangeAtIndex:(long long)arg1 doFrame:(struct __CTFrame *)arg2;
- (long long)getTouchIndexWithTouchPoint:(struct CGPoint)arg1;
- (void)removeMaginfierView;
- (id)getMenuRects;
- (struct CGRect)convertedRectFromRect:(struct CGRect)arg1;
- (void)showMenuUI;
- (void)hideMenuUI;
- (void)panAction:(id)arg1;
- (void)longPressAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)removeCursor;
- (void)showCursor;
- (void)resetCursor:(id)arg1;
- (void)drawPathFromRects:(id)arg1;
- (void)showSelectRect:(struct _NSRange)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)pointInHandler:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cancelSelector;
- (void)setSelectable:(_Bool)arg1;
- (void)drawExtraContentInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

