//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCRemotePlugIn, NCRemotePlugInManager, NSArray;

@protocol NCRemotePlugInManagerDelegate
- (void)remotePlugInManager:(NCRemotePlugInManager *)arg1 plugin:(NCRemotePlugIn *)arg2 electionChangedTo:(long long)arg3;
- (void)remotePlugInManager:(NCRemotePlugInManager *)arg1 pluginReplaced:(NCRemotePlugIn *)arg2 withPlugin:(NCRemotePlugIn *)arg3;
- (void)remotePlugInManager:(NCRemotePlugInManager *)arg1 pluginsRemoved:(NSArray *)arg2;
- (void)remotePlugInManager:(NCRemotePlugInManager *)arg1 pluginsAdded:(NSArray *)arg2;
@end
