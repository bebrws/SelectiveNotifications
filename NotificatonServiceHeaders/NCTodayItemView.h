//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NCTodayItemViewController;

@interface NCTodayItemView : NSView
{
    BOOL _isFlipped;
    NCTodayItemViewController *_accessibilityDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NCTodayItemViewController *accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
- (struct CGRect)_accessibilityWindowFrame;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (id)accessibilityHelp;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (BOOL)isAccessibilityElement;

@end

