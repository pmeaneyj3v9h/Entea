//
//  NSString+firstChar.h
//  BangBang
//
//  Created by lottak_mac2 on 16/6/20.
//  Copyright © 2016年 Lottak. All rights reserved.
//

@import Foundation;

/**
 获取字符串的首字母（不管是汉子还是拼音）
 */
@interface NSString (firstChar)


/**
 获取首字母，缺省为#

 @return 首字母
 */
- (NSString*)firstChar;

@end
