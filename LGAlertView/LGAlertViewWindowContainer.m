//
// LGAlertViewWindowContainer.m
// LGAlertView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import "LGAlertViewWindowContainer.h"

@implementation LGAlertViewWindowContainer

- (instancetype)initWithWindow:(UIWindow *)window {
    self = [super init];
    if (self) {
        self.window = window;
    }
    return self;
}

+ (instancetype)containerWithWindow:(UIWindow *)window {
    return [[self alloc] initWithWindow:window];
}

@end
