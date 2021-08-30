//
//  User.h
//  RealmDemo
//
//  Created by haigui on 16/7/2.
//  Copyright © 2016年 com.luohaifang. All rights reserved.
//

/**
 用户体系中的用户
 */
@interface User : RLMObject

/**用户编号*/
@property (nonatomic, assign) int userNo;
/**用户名字*/
@property (nonatomic, strong) NSString *name;

@end

