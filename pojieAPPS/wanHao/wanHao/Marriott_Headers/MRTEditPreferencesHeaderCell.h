//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTReviewReservationTableCell.h"

@class MRTStyledLabel, UIButton;

@interface MRTEditPreferencesHeaderCell : MRTReviewReservationTableCell
{
    _Bool _shouldShowSeparator;
    MRTStyledLabel *_roomPreferencesTitleLabel;
    UIButton *_cancelButton;
}

@property(nonatomic) _Bool shouldShowSeparator; // @synthesize shouldShowSeparator=_shouldShowSeparator;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MRTStyledLabel *roomPreferencesTitleLabel; // @synthesize roomPreferencesTitleLabel=_roomPreferencesTitleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

