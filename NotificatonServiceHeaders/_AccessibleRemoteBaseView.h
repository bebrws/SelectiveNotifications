//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NCRemoteNotificationWindow;

@interface _AccessibleRemoteBaseView : NSView
{
    NCRemoteNotificationWindow *_owner;
}

- (void).cxx_destruct;
@property __weak NCRemoteNotificationWindow *owner; // @synthesize owner=_owner;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)scrollWheel:(id)arg1;

@end
