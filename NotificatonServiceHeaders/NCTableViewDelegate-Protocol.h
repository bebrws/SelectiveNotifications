//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSTableViewDelegate-Protocol.h"

@class NCTableView, NSEvent, NSMenu, NSMenuItem, NSTableRowView;

@protocol NCTableViewDelegate <NSTableViewDelegate>

@optional
- (void)ncTableView:(NCTableView *)arg1 rowRemoved:(NSTableRowView *)arg2;
- (BOOL)ncTableView:(NCTableView *)arg1 validateMenuItem:(NSMenuItem *)arg2;
- (BOOL)ncTableViewPasteHandled:(NCTableView *)arg1;
- (BOOL)ncTableViewCopyHandled:(NCTableView *)arg1;
- (BOOL)ncTableView:(NCTableView *)arg1 keyDown:(NSEvent *)arg2;
- (NSMenu *)ncTableView:(NCTableView *)arg1 contextualMenuForColumn:(long long)arg2 row:(long long)arg3;
@end

