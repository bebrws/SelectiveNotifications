//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NCTodayListController, NSLayoutConstraint, _NCTodayListDragView, _TtC21NotificationCenterApp22TodayViewListContainer, _TtC21NotificationCenterApp33TodayViewListContainerPlaceholder;

@interface NCTodayListDrag : NSObject
{
    unsigned long long _originalSourceIndex;
    struct CGRect _originalSourceFrame;
    struct CGRect _sourceListFrame;
    struct CGRect _destinationListFrame;
    struct CGRect _sourceStartFrame;
    NSLayoutConstraint *_sourceTopConstraint;
    NSLayoutConstraint *_sourceLeftConstraint;
    struct CGPoint _dragOffset;
    struct CGPoint _startMousePoint;
    struct CGPoint _lastMousePoint;
    _Bool _sourceOnRight;
    double _topOffset;
    double _lastProgress;
    _Bool _sourceOffRails;
    _Bool _sourceResistsTargetDrag;
    NCTodayListController *_sourceList;
    NCTodayListController *_destinationList;
    _TtC21NotificationCenterApp22TodayViewListContainer *_sourceContainer;
    _TtC21NotificationCenterApp33TodayViewListContainerPlaceholder *_sourcePlaceholder;
    _TtC21NotificationCenterApp22TodayViewListContainer *_destinationContainer;
    _TtC21NotificationCenterApp33TodayViewListContainerPlaceholder *_destinationPlaceholder;
    _NCTodayListDragView *_animationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _NCTodayListDragView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) _TtC21NotificationCenterApp33TodayViewListContainerPlaceholder *destinationPlaceholder; // @synthesize destinationPlaceholder=_destinationPlaceholder;
@property(retain, nonatomic) _TtC21NotificationCenterApp22TodayViewListContainer *destinationContainer; // @synthesize destinationContainer=_destinationContainer;
@property(retain, nonatomic) _TtC21NotificationCenterApp33TodayViewListContainerPlaceholder *sourcePlaceholder; // @synthesize sourcePlaceholder=_sourcePlaceholder;
@property(retain, nonatomic) _TtC21NotificationCenterApp22TodayViewListContainer *sourceContainer; // @synthesize sourceContainer=_sourceContainer;
@property(nonatomic) unsigned long long originalSourceIndex; // @synthesize originalSourceIndex=_originalSourceIndex;
@property(nonatomic) _Bool sourceResistsTargetDrag; // @synthesize sourceResistsTargetDrag=_sourceResistsTargetDrag;
@property(readonly, nonatomic) NCTodayListController *destinationList; // @synthesize destinationList=_destinationList;
@property(readonly, nonatomic) NCTodayListController *sourceList; // @synthesize sourceList=_sourceList;
- (void)_updatePlaceholderLocation:(id)arg1 inAnimationView:(id)arg2 inList:(id)arg3 movingUp:(_Bool)arg4 mouse:(struct CGPoint)arg5;
- (void)_setAlphaScaleProgress:(double)arg1;
- (void)_setupDrag:(double)arg1;
- (void)animateToCompletion:(CDUnknownBlockType)arg1;
- (void)cancelDrag:(CDUnknownBlockType)arg1;
- (void)_completeDrag:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_completeInternalDrag:(CDUnknownBlockType)arg1;
- (struct CGPoint)_mousePoint;
- (void)completeDrag:(CDUnknownBlockType)arg1;
- (void)dragProgress;
- (void)startDragOfSource:(id)arg1 destination:(id)arg2 initalYDelta:(double)arg3;
- (void)dealloc;
- (id)initDragFromList:(id)arg1 destination:(id)arg2;

@end

