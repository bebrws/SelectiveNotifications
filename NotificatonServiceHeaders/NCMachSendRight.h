//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 22:31:18).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface NCMachSendRight : NSObject <NSSecureCoding>
{
    unsigned int _sendRight;
}

+ (BOOL)supportsSecureCoding;
+ (id)wrapSendRight:(unsigned int)arg1 transferOwnership:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)portRefs;
- (void)invalidate;
- (unsigned int)sendRight;
- (void)dealloc;

@end

