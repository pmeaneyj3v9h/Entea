//
//  NSString+StringSize.h
//  fadein
//
//  Created by WangYaochang on 16/3/17.
//  Copyright © 2016年 Maverick. All rights reserved.
//

@import Foundation;

@interface NSString (StringSize)

/**
 字符串绘制大小

 @param font 字体大小
 @param size 限制范围
 @return 绘制大小
 */
- (CGSize)textSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;

@end
