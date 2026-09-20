//
// UIWindow+LGAlertView.h
// LGAlertView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import "UIWindow+LGAlertView.h"

@implementation UIWindow (LGAlertView)

- (nullable UIViewController *)currentViewController {
    UIViewController *viewController = self.rootViewController;

    if (viewController.presentedViewController) {
        viewController = viewController.presentedViewController;
    }

    return viewController;
}

@end
