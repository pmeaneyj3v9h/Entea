//
//  IdentityHttp.h
//  RealmDemo
//
//  Created by Mac on 16/7/12.
//  Copyright © 2016年 com.luohaifang. All rights reserved.
//

@import Foundation;

#import "HttpService.h"

@interface IdentityHttp : NSObject

/**
 系统账号密码登陆

 @param account 账号
 @param password 密码
 @param handler 结果回调
 @return 请求对象
 */
+ (NSURLSessionDataTask*)loginWithEmail:(NSString*)account password:(NSString*)password handler:(completionHandler)handler;

@end
