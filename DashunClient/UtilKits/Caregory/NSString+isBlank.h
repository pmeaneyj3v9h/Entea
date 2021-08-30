//
//  NSString+isBlank.h
//  BangBang
//
//  Created by lottak_mac2 on 16/5/20.
//  Copyright © 2016年 Lottak. All rights reserved.
//

@import Foundation;

/**
 字符串是否为空
 */
@interface NSString (isBlank)

/**
 字符串是否为空

 @param str 检测的字符串
 @return 结果
 */
+ (BOOL)isBlank:(NSString*)str;

/**
 字符串是否是11位电话号码

 @param string 检测的字符串
 @return 结果
 */
+ (BOOL)isTelephones:(NSString *)string;

/**
 字符串是否是8位电话号码

 @param string 检测的字符串
 @return 结果
 */
+ (BOOL)isPhoneNumber:(NSString *)string;

@end
