//
//  UserManager.h
//  RealmDemo
//
//  Created by haigui on 16/7/2.
//  Copyright © 2016年 com.luohaifang. All rights reserved.
//

@import Foundation;

#import "User.h"

@interface UserManager : NSObject

/**当前登录用户信息*/
@property (nonatomic, strong) User *user;

+ (instancetype)manager;

#pragma mark -- User

/**
 更新用户数据

 @param user 最新的用户
 */
- (void)updateUser:(User*)user;

/**
 通过用户guid加载用户

 @param userNo guid
 */
- (void)loadUserWithNo:(int)userNo;

/**
 创建用户的数据库观察者

 @return 创建用户的数据库观察者
 */
- (RBQFetchedResultsController*)createUserFetchedResultsController;

@end
