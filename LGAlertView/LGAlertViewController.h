//
// LGAlertViewController.h
// LGAlertView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>

@class LGAlertView;

@interface LGAlertViewController : UIViewController

- (nonnull instancetype)initWithAlertView:(nonnull LGAlertView *)alertView view:(nonnull UIView *)view;

@end
