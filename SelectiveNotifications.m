//
//  SelectiveNotifications.m
//  SelectiveNotifications
//
//  Created by Bradley Barrows on 8/4/20.
//  Copyright © 2020 Bradley Barrows. All rights reserved.
//
#import <AppKit/AppKit.h>
#import <Foundation/Foundation.h>
#import <Foundation/NSNotification.h>
#import "SelectiveNotifications.h"
#import "JGMethodSwizzler.h"
#import <Carbon/Carbon.h>
#import <objc/runtime.h>
#import "SNNotificationSingleton.h"
#include <stdio.h>

#include "ZKSwizzle.h"



#import "./NotificatonServiceHeaders/NCBanner.h"



@implementation SelectiveNotifications

+ (SelectiveNotifications*) sharedInstance {
    static SelectiveNotifications* plugin = nil;
    
    if (plugin == nil)
        plugin = [[SelectiveNotifications alloc] init];
    
    return plugin;
}


+ (void)load {

}

@end

ZKSwizzleInterface(myClass, NCBannerWindowController, NSObject)
@implementation myClass
- (void)insertBanner:(NCBanner *)banner above:(id)aboveEnum withAnimation:(unsigned long long)animationEnum; {
        
        // Here you could do some logic about whether or not to call:
        // ZKOrig(void, banner, aboveEnum, animationEnum);
        // to actually show the banner notification or not
    
        // Instead I will just show an Alert which contains the text from the banner notification
        NSAlert *alert = [[NSAlert alloc] init];
        [alert setMessageText:[banner description]];
        [alert setInformativeText:@"This is the description of the banner notification about to be shown"];
        [alert addButtonWithTitle:@"Ok"];
        [alert runModal];
    
    ZKOrig(void, banner, aboveEnum, animationEnum);
}
@end


void install(void) __attribute__((constructor));

void install() {
    printf("In install\n");
    SelectiveNotifications *sn = [[SelectiveNotifications alloc] init];
    
    
}
