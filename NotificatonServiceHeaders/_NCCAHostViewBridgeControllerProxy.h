//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCServiceViewHostProtocol-Protocol.h"

@class NSString;
@protocol NCServiceViewHostProtocol;

@interface _NCCAHostViewBridgeControllerProxy : NSObject <NCServiceViewHostProtocol>
{
    id <NCServiceViewHostProtocol> _delegate;
}

- (void).cxx_destruct;
@property __weak id <NCServiceViewHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)hostRequestSizeChange:(struct CGSize)arg1 fenceRight:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

