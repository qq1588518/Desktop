//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRTStayFolio, MRTStayFolioPDFPageFooterView, MRTStayFolioPDFPageHeaderView, MRTStayFolioPDFReportFooterView, MRTStayFolioPDFReportHeaderView, MRTStayFolioPDFSplitItemFooterView, MRTStayFolioPDFSplitItemHeaderView, MRTStayFolioPDFSplitItemView, NSMutableArray, UIView;

@interface MRTStayFolioPDFDocument : NSObject
{
    _Bool _supportsPDFPrivacyWebLink;
    MRTStayFolio *_folio;
    MRTStayFolioPDFPageHeaderView *_pageHeaderView;
    MRTStayFolioPDFReportHeaderView *_reportHeaderView;
    MRTStayFolioPDFReportFooterView *_reportFooterView;
    MRTStayFolioPDFPageFooterView *_pageFooterView;
    MRTStayFolioPDFSplitItemView *_splitItemView;
    MRTStayFolioPDFSplitItemHeaderView *_splitItemHeaderView;
    MRTStayFolioPDFSplitItemFooterView *_splitItemFooterView;
    double _reportHeaderViewHeight;
    double _reportFooterViewHeight;
    double _pageHeaderViewHeight;
    double _pageFooterViewHeight;
    double _splitItemViewHeight;
    double _splitItemHeaderViewHeight;
    double _splitItemFooterViewHeight;
    UIView *_pageView;
    NSMutableArray *_numItemsPerPDFPage;
    unsigned long long _splitItemFooterPageNumber;
    unsigned long long _numberOfPDFPages;
}

@property(nonatomic) _Bool supportsPDFPrivacyWebLink; // @synthesize supportsPDFPrivacyWebLink=_supportsPDFPrivacyWebLink;
@property(nonatomic) unsigned long long numberOfPDFPages; // @synthesize numberOfPDFPages=_numberOfPDFPages;
@property(nonatomic) unsigned long long splitItemFooterPageNumber; // @synthesize splitItemFooterPageNumber=_splitItemFooterPageNumber;
@property(retain, nonatomic) NSMutableArray *numItemsPerPDFPage; // @synthesize numItemsPerPDFPage=_numItemsPerPDFPage;
@property(retain, nonatomic) UIView *pageView; // @synthesize pageView=_pageView;
@property(nonatomic) double splitItemFooterViewHeight; // @synthesize splitItemFooterViewHeight=_splitItemFooterViewHeight;
@property(nonatomic) double splitItemHeaderViewHeight; // @synthesize splitItemHeaderViewHeight=_splitItemHeaderViewHeight;
@property(nonatomic) double splitItemViewHeight; // @synthesize splitItemViewHeight=_splitItemViewHeight;
@property(nonatomic) double pageFooterViewHeight; // @synthesize pageFooterViewHeight=_pageFooterViewHeight;
@property(nonatomic) double pageHeaderViewHeight; // @synthesize pageHeaderViewHeight=_pageHeaderViewHeight;
@property(nonatomic) double reportFooterViewHeight; // @synthesize reportFooterViewHeight=_reportFooterViewHeight;
@property(nonatomic) double reportHeaderViewHeight; // @synthesize reportHeaderViewHeight=_reportHeaderViewHeight;
@property(retain, nonatomic) MRTStayFolioPDFSplitItemFooterView *splitItemFooterView; // @synthesize splitItemFooterView=_splitItemFooterView;
@property(retain, nonatomic) MRTStayFolioPDFSplitItemHeaderView *splitItemHeaderView; // @synthesize splitItemHeaderView=_splitItemHeaderView;
@property(retain, nonatomic) MRTStayFolioPDFSplitItemView *splitItemView; // @synthesize splitItemView=_splitItemView;
@property(retain, nonatomic) MRTStayFolioPDFPageFooterView *pageFooterView; // @synthesize pageFooterView=_pageFooterView;
@property(retain, nonatomic) MRTStayFolioPDFReportFooterView *reportFooterView; // @synthesize reportFooterView=_reportFooterView;
@property(retain, nonatomic) MRTStayFolioPDFReportHeaderView *reportHeaderView; // @synthesize reportHeaderView=_reportHeaderView;
@property(retain, nonatomic) MRTStayFolioPDFPageHeaderView *pageHeaderView; // @synthesize pageHeaderView=_pageHeaderView;
@property(retain, nonatomic) MRTStayFolio *folio; // @synthesize folio=_folio;
- (void).cxx_destruct;
- (_Bool)_performSaveAsPDFToFilename:(id)arg1;
- (void)_updateLogoImageViewsWithImage:(id)arg1;
- (id)_imagePreparedForDisplayFromImage:(id)arg1;
- (void)_flushCurrentQueue;
- (void)_fetchPropertyLogoImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_populatePDFReportFooterView;
- (void)_populatePDFReportHeaderView;
- (void)_populatePDFPageFooterView;
- (void)_populatePDFPageHeaderView;
- (void)_populatePDFSplitItemFooterView;
- (void)_populateSplitViewForIndex:(unsigned long long)arg1;
- (void)_populatePDFSplitItemHeaderView;
- (void)_populatePDFViews;
- (void)_addPDFPrivacyWebLink;
- (void)_updatePDFSectionHeights;
- (void)_updateViewUsingSystemLayoutSize:(id)arg1;
- (void)_determinePDFPageStrategy;
- (void)_prepareAllPDFViewsForHighResolutionRendering;
- (void)_scaleViewHierarchyOfView:(id)arg1;
- (void)_renderPDFView:(id)arg1 inContext:(struct CGContext *)arg2 yPosition:(double)arg3 height:(double)arg4;
- (void)_loadPDFNibIfNeeded;
- (void)saveToFilename:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithStayFolio:(id)arg1;

@end
