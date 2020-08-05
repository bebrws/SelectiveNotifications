//
//  SelectiveNotifications.h
//  SelectiveNotifications
//
//  Created by Bradley Barrows on 8/4/20.
//  Copyright © 2020 Bradley Barrows. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SelectiveNotifications : NSObject <NSUserNotificationCenterDelegate>

-(void)addController:(id)controller forNotification:(NSString *)uuid;

-(BOOL)userNotificationCenter:(NSUserNotificationCenter *)center shouldPresentNotification:(NSUserNotification *)notification;

- (void)userNotificationCenter:(NSUserNotificationCenter *)center didActivateNotification:(NSUserNotification *)notification;

- (void)userNotificationCenter:(NSUserNotificationCenter *)center didDeliverNotification:(NSUserNotification *)notification;
@end

NS_ASSUME_NONNULL_END
