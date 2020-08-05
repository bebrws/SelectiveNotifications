//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class CALayer, NSImage;

@interface NCIdentityImageView : NSImageView
{
    CALayer *_maskLayer;
    CALayer *_innerGlow;
    CALayer *_iconBadgeLayer;
    _Bool _layersSetup;
    NSImage *_iconBadge;
    unsigned long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) NSImage *iconBadge; // @synthesize iconBadge=_iconBadge;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;

@end

