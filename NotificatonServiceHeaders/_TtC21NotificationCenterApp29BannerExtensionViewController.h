//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MISSING_TYPE, NSString, NSView, _TtC21NotificationCenterApp22NotificationActionObjC;
@protocol _TtP21NotificationCenterApp23BannerExtensionDelegate_;

@interface _TtC21NotificationCenterApp29BannerExtensionViewController : NSViewController
{
    MISSING_TYPE *action;
    MISSING_TYPE *model;
    MISSING_TYPE *response;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)handleCancelButtonPress;
- (id)initWithCoder:(id)arg1;
- (id)initWithBanner:(id)arg1 action:(id)arg2;
@property(nonatomic, readonly) NSString *expandedActionTitle;
@property(nonatomic, readonly) BOOL ready;
@property(nonatomic, readonly) NSView *firstResponder;
@property(nonatomic) __weak id <_TtP21NotificationCenterApp23BannerExtensionDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) _TtC21NotificationCenterApp22NotificationActionObjC *actionObjC;

@end

