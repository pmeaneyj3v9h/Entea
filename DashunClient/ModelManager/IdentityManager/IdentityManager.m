//
//  IdentityManager.m
//  RealmDemo
//
//  Created by lottak_mac2 on 16/7/12.
//  Copyright © 2016年 com.luohaifang. All rights reserved.
//

#import "IdentityManager.h"

@implementation IdentityManager

#pragma mark -- Init Methods

- (instancetype)init {
    self = [super init];
    if (self) {
        
    }
    return self;
}

#pragma mark -- Class Private Methods

#pragma mark -- Class Public Methods

+ (instancetype)manager {
    static IdentityManager *manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[IdentityManager alloc] init];
    });
    return manager;
}

#pragma mark -- Function Private Methods

#pragma mark -- Function Public Methods

#pragma mark -- Instance Private Methods

#pragma mark -- Instance Public Methods

- (void)readAuthorizeData {
    _identity = [DataCache loadCache:@"IdentityLocCache"];
    if(!_identity) {
        _identity = [Identity new];
    }
}

- (void)saveAuthorizeData {
    [DataCache setCache:_identity forKey:@"IdentityLocCache"];
}

- (void)logOut {
    //登录模块重新初始化
    _identity = [Identity new];
    _identity.firstUseSoft = NO;
    [self saveAuthorizeData];
}

@end
