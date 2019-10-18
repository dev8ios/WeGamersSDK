//
//  GameCommunityParam.h
//  GameCommunitySDK
//
//  Created by 陈辉龙 on 2018/10/22.
//  Copyright © 2018 ShangjinChi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSInteger {
    GameCommunityThemWG = 0,        //WG皮肤
    GameCommunityThemPurple,        //紫色皮肤
    GameCommunityThemDark,          //深色皮肤（没配置，默认这套皮肤）
    GameCommunityThemLM,            //LM皮肤
    GameCommunityThemCC,            //CC皮肤
} GameCommunityThemType;            //五种换肤类型

@interface WeGamersSDKParams : NSObject
@property(nonatomic, copy) NSString* sdkId;                     //WeGamers内嵌社区分配的社区SDK编号Id
@property(nonatomic, copy) NSString* sessionKey;                //WeGamers内嵌社区分配的社区SDK的sessionKey
@property(nonatomic, copy) NSString* gameAccountId;             //游戏账号ID （游戏自己定义的账号ID）
@property(nonatomic, copy) NSString* nickName;                  //游戏玩家昵称
@property(nonatomic, assign) GameCommunityThemType skinType;    // 换肤类型
@end

/**
 打开社区页面时的返回结果
 */
@interface GameCommunityEntryResult : NSObject

@property(nonatomic, strong) UIViewController* wgHomePageViewController;    //社区主页视图控制器
@property(nonatomic, strong) NSError* error;                                //错误信息

@end
