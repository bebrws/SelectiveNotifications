//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSImage;

@interface NCImageFramedView : NSView
{
    CALayer *_imageLayer;
    NSImage *_image;
    struct CGSize _size;
}

+ (double)widthForImageWithSize:(struct CGSize)arg1 viewHeight:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)layout;
- (struct CGSize)intrinsicContentSize;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

