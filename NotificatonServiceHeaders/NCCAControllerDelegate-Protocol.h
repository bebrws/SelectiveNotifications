//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCCAController, NCCARemoteSession;

@protocol NCCAControllerDelegate
- (void)NCCAController:(NCCAController *)arg1 releaseKeySession:(NCCARemoteSession *)arg2;
- (void)NCCAController:(NCCAController *)arg1 makeSessionKey:(NCCARemoteSession *)arg2;
- (void)NCCAController:(NCCAController *)arg1 dismissRemoteSession:(NCCARemoteSession *)arg2 withAnimation:(unsigned long long)arg3;
- (void)NCCAController:(NCCAController *)arg1 presentRemoteSession:(NCCARemoteSession *)arg2;
@end

