//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NCCardViewController.h"

@class MISSING_TYPE, NSButton, NSImageView, NSLayoutConstraint, NSTextField, NSView;

@interface _TtC21NotificationCenterApp33NotificationsTableNotificationRow : NCCardViewController
{
    MISSING_TYPE *header;
    MISSING_TYPE *appImageView;
    MISSING_TYPE *appNameLabel;
    MISSING_TYPE *dateLabel;
    MISSING_TYPE *deleteButton;
    MISSING_TYPE *body;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *titleLabelImageView;
    MISSING_TYPE *titleLabelImageWidthConstraint;
    MISSING_TYPE *titleLabelImageLeftConstraint;
    MISSING_TYPE *titleLabelHeightConstraint;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *subtitleEmptyConstraint;
    MISSING_TYPE *bodyLabel;
    MISSING_TYPE *contentImageView;
    MISSING_TYPE *contentImageTrailingConstraint;
    MISSING_TYPE *contentImageHeightConstraint;
    MISSING_TYPE *owner;
    MISSING_TYPE *selected;
    MISSING_TYPE *model;
    MISSING_TYPE *_dateTransformer;
    MISSING_TYPE *_titleImageWidthOriginal;
    MISSING_TYPE *_titleImageLeftOriginal;
    MISSING_TYPE *_selectionLayer;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)deleteClicked:(id)arg1;
- (void)viewDidLayout;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) NSLayoutConstraint *contentImageHeightConstraint; // @synthesize contentImageHeightConstraint;
@property(nonatomic, retain) NSLayoutConstraint *contentImageTrailingConstraint; // @synthesize contentImageTrailingConstraint;
@property(nonatomic, retain) NSImageView *contentImageView; // @synthesize contentImageView;
@property(nonatomic, retain) NSTextField *bodyLabel; // @synthesize bodyLabel;
@property(nonatomic, retain) NSLayoutConstraint *subtitleEmptyConstraint; // @synthesize subtitleEmptyConstraint;
@property(nonatomic, retain) NSTextField *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, retain) NSLayoutConstraint *titleLabelHeightConstraint; // @synthesize titleLabelHeightConstraint;
@property(nonatomic, retain) NSLayoutConstraint *titleLabelImageLeftConstraint; // @synthesize titleLabelImageLeftConstraint;
@property(nonatomic, retain) NSLayoutConstraint *titleLabelImageWidthConstraint; // @synthesize titleLabelImageWidthConstraint;
@property(nonatomic, retain) NSImageView *titleLabelImageView; // @synthesize titleLabelImageView;
@property(nonatomic, retain) NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) NSView *body; // @synthesize body;
@property(nonatomic, retain) NSButton *deleteButton; // @synthesize deleteButton;
@property(nonatomic, retain) NSTextField *dateLabel; // @synthesize dateLabel;
@property(nonatomic, retain) NSTextField *appNameLabel; // @synthesize appNameLabel;
@property(nonatomic, retain) NSImageView *appImageView; // @synthesize appImageView;
@property(nonatomic, retain) NSView *header; // @synthesize header;

@end
