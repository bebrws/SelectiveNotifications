//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class MISSING_TYPE;

@interface _TtC21NotificationCenterApp15AlertScrollView : NSScrollView
{
    MISSING_TYPE *pocketLine;
    MISSING_TYPE *intrinsicHeight;
    MISSING_TYPE *buttonGradientAmount;
    MISSING_TYPE *acceptsScroll;
    MISSING_TYPE *_hasScrollableContent;
    MISSING_TYPE *_horizontalFade;
    MISSING_TYPE *_verticalFade;
}

+ (Class)_horizontalScrollerClass;
+ (Class)_verticalScrollerClass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tile;
- (void)viewScrolledWithNote:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)scrollWheel:(id)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic) long long scrollerStyle;
@property(nonatomic) BOOL acceptsScroll; // @synthesize acceptsScroll;
@property(nonatomic) double buttonGradientAmount; // @synthesize buttonGradientAmount;
@property(nonatomic) double intrinsicHeight; // @synthesize intrinsicHeight;

@end
