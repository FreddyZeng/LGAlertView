//
// LGAlertViewWindowsObserver.h
// LGAlertView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>

@interface LGAlertViewWindowsObserver : NSObject

+ (instancetype)sharedInstance;

- (void)startObserving;

@end
