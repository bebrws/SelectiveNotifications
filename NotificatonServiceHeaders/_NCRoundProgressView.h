//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface _NCRoundProgressView : NSView
{
    double _progressTime;
    double _progressStart;
    double _progressEnd;
    double _progressCurrent;
    NSObject<OS_dispatch_source> *_animation_timer;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)drawRect:(struct CGRect)arg1;

@end
