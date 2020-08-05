//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCNotificationWindow, NSEvent;

@protocol NCNotificationWindowDelegate
- (void)notificationWindow:(NCNotificationWindow *)arg1 velocity:(double)arg2 draggedCompleted:(BOOL)arg3;
- (void)notificationWindow:(NCNotificationWindow *)arg1 dragged:(NSEvent *)arg2;
- (BOOL)notificationWindow:(NCNotificationWindow *)arg1 dragStarted:(NSEvent *)arg2;
- (void)notificationWindowDismissTimeElapsed:(NCNotificationWindow *)arg1;
- (void)notificationWindowSwipeEnded:(NCNotificationWindow *)arg1 cancelled:(BOOL)arg2;
- (void)notificationWindowSwipeProgressed:(NCNotificationWindow *)arg1 progress:(double)arg2;
- (BOOL)notificationWindowSwipeStarted:(NCNotificationWindow *)arg1 rightToLeft:(BOOL)arg2 withEvent:(NSEvent *)arg3;
- (BOOL)notificationWindowCanSwipe:(NCNotificationWindow *)arg1 left:(BOOL)arg2;
@end

