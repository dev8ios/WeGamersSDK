//
//  GameCommunityConfig.h
//  GameCommunitySDK
//
//  Created by XiaobinLin on 2019/1/23.
//  Copyright © 2019 ShangjinChi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, EGameCommunityServerType) {
    EGameCommunityServerTypeDefault = 0,  //外网服务器
    EGameCommunityServerTypeQA = 1,        //QA服
    EGameCommunityServerTypeDev = 2,        //开发服
};

@interface GameCommunityConfig : NSObject

@property (class, nonatomic, assign) EGameCommunityServerType serverType;

/**
 转换服务器配置key

 @param orginKey 原始key
 @return 根据当前服务器类型配置，返回新的key
 */
+ (NSString *)serverConfigKey:(NSString *)orginKey;

@end

NS_ASSUME_NONNULL_END
