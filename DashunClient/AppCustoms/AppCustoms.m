
//
//  AppCustoms.m
//  fadein
//
//  Created by Maverick on 16/1/26.
//  Copyright © 2016年 Maverick. All rights reserved.
//

#import "AppCustoms.h"

/**AppCustoms单例对象*/
static AppCustoms * __singleton__;

@implementation AppCustoms

+ (AppCustoms *)customs {
    static dispatch_once_t predicate;
    dispatch_once( &predicate, ^{ __singleton__ = [[[self class] alloc] init]; } );
    return __singleton__;
}

#pragma mark - Init

- (instancetype)init {
    self = [super init];
    if (self) {
        [[UINavigationBar appearance] setTintColor:[UIColor blackColor]];
    }
    return self;
}

@end
