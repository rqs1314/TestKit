//
//  UIView+Extension.h
//  PetHome
//
//  Created by Apple on 16/5/31.
//  Copyright © 2016年 叶炯. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)

/**
 * Shortcut for frame.origin.x.
 *
 * Sets frame.origin.x = left
 */
@property (nonatomic) CGFloat left;

/**
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = top
 */
@property (nonatomic) CGFloat top;

/**
 * Shortcut for frame.origin.x + frame.size.width
 *
 * Sets frame.origin.x = right - frame.size.width
 */
@property (nonatomic) CGFloat right;

/**
 * Shortcut for frame.origin.y + frame.size.height
 *
 * Sets frame.origin.y = bottom - frame.size.height
 */
@property (nonatomic) CGFloat bottom;

/**
 *  Shortcut for frame.origin.x
    Sets for frame.origin.x = x
 */
@property (nonatomic,assign) CGFloat x;

/**
 *  Shortcut for frame.origin.y
    Sets frame.origin.y = y
 */
@property (nonatomic,assign) CGFloat y;

/**
 * Shortcut for center.x
 *
 * Sets center.x = centerX
 */
@property (nonatomic,assign) CGFloat centerX;

/**
 * Shortcut for center.y
 *
 * Sets center.y = centerY
 */
@property (nonatomic,assign) CGFloat centerY;

/**
 * Shortcut for frame.size.width
 *
 * Sets frame.size.width = width
 */
@property (nonatomic,assign) CGFloat width;

/**
 * Shortcut for frame.size.height
 *
 * Sets frame.size.height = height
 */
@property (nonatomic,assign) CGFloat height;

/**
 * Shortcut for frame.size
 */
@property (nonatomic,assign) CGSize size;

/**
 * Shortcut for frame.origin
 */
@property (nonatomic,assign) CGPoint origin;

@end
