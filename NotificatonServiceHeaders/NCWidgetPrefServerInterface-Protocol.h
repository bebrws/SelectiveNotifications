//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol NCWidgetPrefServerInterface
- (void)prefsWidgetUpdateState:(NSString *)arg1 enabled:(_Bool)arg2;
- (void)prefsWidgetRequestItems:(void (^)(NSArray *))arg1;
- (void)prefsWidgetReorderItem:(NSString *)arg1 afterItem:(NSString *)arg2;
@end

