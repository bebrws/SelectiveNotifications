//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NCTodayItem.h"

@class NCTodaySummaryItemEntry, NSArray, NSLocale, NSMutableArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_source;

@interface NCTodaySummaryItem : NCTodayItem
{
    NSMutableArray *_staticSummaries;
    NSMutableArray *_appSummaries;
    NSMutableArray *_summaries;
    _Bool _upToDate;
    NSLocale *_locale;
    BOOL _useCelcius;
    double _lastWeatherUpdateTime;
    NSXPCConnection *_weatherConnection;
    NSObject<OS_dispatch_source> *_refreshTimer;
    _Bool _forToday;
    _Bool _screenTimeWeatherRestricted;
    _Bool _screenTimeCalendarRestricted;
    NCTodaySummaryItemEntry *_weatherSummary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NCTodaySummaryItemEntry *weatherSummary; // @synthesize weatherSummary=_weatherSummary;
@property(nonatomic) _Bool screenTimeCalendarRestricted; // @synthesize screenTimeCalendarRestricted=_screenTimeCalendarRestricted;
@property(nonatomic) _Bool screenTimeWeatherRestricted; // @synthesize screenTimeWeatherRestricted=_screenTimeWeatherRestricted;
@property(nonatomic) _Bool forToday; // @synthesize forToday=_forToday;
- (void)_actuallyUpdateWeather;
- (void)_updateWeatherSummary;
- (void)_updateSummaries;
- (void)invalidateSummaries;
- (void)refreshWeatherIfNecessary;
- (void)removeTextualSummary:(id)arg1;
- (void)addTextualSummary:(id)arg1 image:(id)arg2 identifier:(id)arg3 action:(CDUnknownBlockType)arg4;
- (void)setEnabled:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *summaries;
@property(nonatomic, readonly) NSArray *_appOrder;
- (void)_addSummariesFor:(id)arg1 summaries:(id)arg2 appSummaries:(id)arg3;

@end

