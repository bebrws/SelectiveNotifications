//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCNotificationCenterMenu-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface NCMenuConnection : NSObject <NSXPCListenerDelegate, NCNotificationCenterMenu>
{
    NSXPCListener *_listener;
}

- (void).cxx_destruct;
- (void)ncMenuDNDToggle;
- (void)ncMenuMouseUp;
- (void)ncMenuMouseDown;
- (void)ncMenugetInitialState:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

