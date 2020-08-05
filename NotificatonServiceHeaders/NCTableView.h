//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableView.h>

@protocol NCTableViewDelegate;

@interface NCTableView : NSTableView
{
    BOOL _animatorDisabled;
    _Bool _resetSelectionOnNextResign;
    double _extraSpace;
}

@property(nonatomic) _Bool resetSelectionOnNextResign; // @synthesize resetSelectionOnNextResign=_resetSelectionOnNextResign;
@property(nonatomic) double extraSpace; // @synthesize extraSpace=_extraSpace;
- (void)didRemoveRowView:(id)arg1 forRow:(long long)arg2;
- (struct CGSize)_minimumFrameSize;
- (void)applyPermutationsFromArray:(id)arg1 toArray:(id)arg2 insertAnimation:(unsigned long long)arg3 removeAnimation:(unsigned long long)arg4;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)autoscroll:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)performWithAnimatorOff:(CDUnknownBlockType)arg1;
- (id)animator;
@property __weak id <NCTableViewDelegate> delegate;
- (void)awakeFromNib;

@end

