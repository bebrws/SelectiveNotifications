//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_source;

@interface PeriodicMessageTrace : NSObject
{
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (id)initWithDomain:(id)arg1 preference:(id)arg2;

@end
