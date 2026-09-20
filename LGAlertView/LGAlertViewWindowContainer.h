//
// LGAlertViewWindowContainer.h
// LGAlertView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>

@interface LGAlertViewWindowContainer : NSObject

- (instancetype)initWithWindow:(UIWindow *)window;

+ (instancetype)containerWithWindow:(UIWindow *)window;

@property (weak, nonatomic) UIWindow *window;

@end
