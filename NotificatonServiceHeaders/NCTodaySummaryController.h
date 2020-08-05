//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NCTodayItemViewController.h"

@class NCTodaySummaryItem, NSLayoutConstraint, NSMutableArray, NSStackView;

@interface NCTodaySummaryController : NCTodayItemViewController
{
    NSMutableArray *_summaryItemControllers;
    double _originalTopMargin;
    _Bool _hasTopMargin;
    NSLayoutConstraint *_topMarginConstraint;
    NSStackView *_summaryStack;
    double _extraTopMargin;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double extraTopMargin; // @synthesize extraTopMargin=_extraTopMargin;
@property(nonatomic) NSStackView *summaryStack; // @synthesize summaryStack=_summaryStack;
@property(nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(nonatomic) _Bool hasTopMargin; // @synthesize hasTopMargin=_hasTopMargin;
- (void)refreshSummaries;
- (id)_summaryControllerAtIndex:(unsigned long long)arg1;
- (id)_addTextSummaryItemViewController;
@property(readonly, nonatomic) NCTodaySummaryItem *summaryItem;
- (void)setDelegate:(id)arg1;
- (_Bool)hasHeader;
- (void)periodicUpdate;
- (void)willBeShown;
- (void)viewDidLoad;
- (id)initWithItem:(id)arg1;

@end
