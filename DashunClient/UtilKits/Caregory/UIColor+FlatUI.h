//
//  UIColor+FlatUI.h
//  FlatUI
//
//  Created by Jack Flintermann on 5/3/13.
//  Copyright (c) 2013 Jack Flintermann. All rights reserved.
//

@import UIKit;

@interface UIColor (FlatUI)

/**
 通过16进制字符串创建UIColor对象

 @param hexString 16进制字符串
 @return UIColor对象
 */
+ (UIColor *)colorFromHexCode:(NSString *)hexString;


@end
