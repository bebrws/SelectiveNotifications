//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDAttribute, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NCDuetController : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    CDAttribute *_duetAttr;
    NSSet *_predictedValues;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)_schedule;
- (void)schedule;
- (void)occurredWithValue:(id)arg1;
- (void)stoppedWithValue:(id)arg1;
- (void)startedWithValue:(id)arg1;
- (void)_calendarDayChanged:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

