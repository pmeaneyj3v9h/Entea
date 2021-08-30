//
//  UserHttp.h
//  RealmDemo
//
//  Created by haigui on 16/7/2.
//  Copyright © 2016年 com.luohaifang. All rights reserved.
//

@import Foundation;
#import "HttpService.h"
#import "User.h"

@interface UserHttp : NSObject

#pragma mark -- 修改用户信息

/**
 修改用户信息

 @param user 用户信息
 @param handler 回调
 @return 请求对象
 */
+ (NSURLSessionDataTask*)updateUserInfo:(User*)user handler:(completionHandler)handler;

@end
