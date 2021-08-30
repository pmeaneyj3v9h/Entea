//
//  HttpService.h
//  DashunClient
//
//  Created by lottak_mac2 on 16/9/27.
//  Copyright © 2016年 com.lottak. All rights reserved.
//

@import Foundation;

//基础网络请求 其他的请求统一由此类发出
typedef NS_ENUM(NSUInteger, HTTP_REQUEST_METHOD) {
    /**GET方式*/
    E_HTTP_REQUEST_METHOD_GET = 0,
    /**HEAD方式*/
    E_HTTP_REQUEST_METHOD_HEAD,
    /**POST方式*/
    E_HTTP_REQUEST_METHOD_POST,
    /**PUT方式*/
    E_HTTP_REQUEST_METHOD_PUT,
    /**PATCH方式*/
    E_HTTP_REQUEST_METHOD_PATCH,
    /**DELETE方式*/
    E_HTTP_REQUEST_METHOD_DELETE,
};

/**
 请求结果回调

 @param data 数据
 @param error 错误
 */
typedef void(^completionHandler)(id data,NSError *error);

@interface HttpService : NSObject

+ (HttpService*)service;

/**
 发送普通请求

 @param method 方式
 @param pathStr 地址
 @param parameters 参数
 @param completionHandler 请求结果回调
 @return 请求对象
 */
- (NSURLSessionDataTask *)sendRequestWithHttpMethod:(HTTP_REQUEST_METHOD)method URLPath:(NSString *)pathStr parameters:(id)parameters completionHandler:(completionHandler)completionHandler;

@end
