//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSApplication.h>

@interface NCApplication : NSApplication
{
}

- (id)accessibilityChildren;
- (id)accessibilityWindows;
- (id)accessibilityMainWindow;
- (void)_cycleWindowsReversed:(BOOL)arg1;
- (id)makeWindowsPerform:(SEL)arg1 inOrder:(BOOL)arg2;
- (void)_reactToDisplayChangedNotification;
- (BOOL)_sendScreenNotificationWhenDockSizeChanges;

@end
