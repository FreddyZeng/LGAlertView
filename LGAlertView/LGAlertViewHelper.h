//
// LGAlertViewHelper.h
// LGAlertView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>

@class LGAlertView;

#pragma mark - Constants

extern CGFloat const LGAlertViewPaddingWidth;
extern CGFloat const LGAlertViewPaddingHeight;
extern CGFloat const LGAlertViewButtonImageOffsetFromTitle;

#pragma mark - Interface

@interface LGAlertViewHelper : NSObject

+ (void)animateWithDuration:(NSTimeInterval)duration
                 animations:(void(^)(void))animations
                 completion:(void(^)(BOOL finished))completion;

+ (void)keyboardAnimateWithNotificationUserInfo:(NSDictionary *)notificationUserInfo
                                     animations:(void(^)(CGFloat keyboardHeight))animations;

+ (UIImage *)image1x1WithColor:(UIColor *)color;

+ (BOOL)isNotRetina;

+ (BOOL)isPad;

+ (CGFloat)statusBarHeight;

+ (CGFloat)separatorHeight;

+ (BOOL)isPadAndNotForce:(LGAlertView *)alertView;

+ (BOOL)isCancelButtonSeparate:(LGAlertView *)alertView;

+ (CGFloat)systemVersion;

#if TARGET_OS_IOS
+ (UIWindow *)appWindow;
+ (UIWindow *)keyWindow;
#endif

+ (BOOL)isViewControllerBasedStatusBarAppearance;

@end
