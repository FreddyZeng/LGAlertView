//
// LGAlertViewButton.h
// LGAlertView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>
#import "LGAlertViewShared.h"

@interface LGAlertViewButton : UIButton

@property (assign, nonatomic) LGAlertViewButtonIconPosition iconPosition;

- (void)setBackgroundColor:(UIColor *)color forState:(UIControlState)state;

@end
