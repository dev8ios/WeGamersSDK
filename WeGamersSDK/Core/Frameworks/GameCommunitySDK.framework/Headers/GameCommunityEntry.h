//
//  GameCommunityEntry.h
//  GameCommunitySDK
//
//  Created by 陈辉龙 on 2018/10/23.
//  Copyright © 2018 ShangjinChi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GameCommunityParam.h"

#pragma mark - 日志输出
//控制台LOG输出开关
#define WGLOG_OUTPUT    1

@interface GameCommunityEntry : NSObject

/**
 游戏社区初始化接口
 @param param 参数请参考WeGamersSDKParams定义。
 @param showNotifyRedBlock 红点提醒回调 YES代表有新消息通知需要红点显示，NO表示清除红点显示
  @param supportBlock 返回当前系统环境是否支持游戏社区
 */
+ (void)initGameCommunity:(WeGamersSDKParams*)param showCommunityRed:(void (^)(BOOL bShow))showNotifyRedBlock supportGameCommunity:(void (^)(BOOL bSupport))supportBlock;


/**
 游戏内弹出社区通知(在需要弹出的时机调用改接口)
 @param window 应用程序主Window
 @param completionHandler 调用回调情况 error nil表示成功 否则表示失败
 */
+ (void)checkGameCommunityNotice:(UIWindow *)window completionBlock:(void (^)(NSError * _Nullable error))completionHandler;

/**
 打开游戏社区页面
 
 @return 打开的窗口结果对象：
 1）社区主页视图控制器对象；
 2）NSError对象。其中，错误码为
 -1，表示社区主页视图控制器对象创建失败；
 -2，表示未找开应用主窗口；
 -3，表示弹出窗口异常；
 -4,表示参数填写异常 （可能为空）
 */
+ (GameCommunityEntryResult *)openGameCommunityHomePageAndwillExitLive:(void (^)(void))blockWillExit;

/**
 设置游戏社区页面设备方向，与初始化的屏幕方向可能会不一致。
 
 @return 当前支持的设备方向
 */
+ (UIInterfaceOrientationMask)appOrientationMask;

/**
 初始化游戏支持的横竖屏方向 （横屏 UIInterfaceOrientationMaskLandscape 竖屏UIInterfaceOrientationMaskPortrait）
 
 @param orientationMask 支持的屏幕方向
 */
+ (void)initAppOrientationMask:(UIInterfaceOrientationMask)orientationMask;

/**
 用于防止游戏战斗时候checkGameCommunityNotice 弹出通知弹窗打断游戏战斗画面，游戏厂商可以再进入游戏战斗界面的时候调用这个接口防止通知弹窗打断战斗
 重新调用checkGameCommunityNotice战斗状态会清除
 
 参数说明：bInComBat ：YES进入战斗状态，NO为解除战斗状态 再次调用checkGameCommunityNotice会自动置NO
 */
+ (void)setInComBat:(BOOL)bInComBat;


/**
 打开游戏话题社区
 @param param 参数请参考WeGamersSDKParams定义。
 @param sTopicId 话题Id
 @param supportBlock 返回当前系统环境是否支持游戏社区
 @return 打开的窗口结果对象：
 1）社区主页视图控制器对象；
 2）NSError对象。其中，错误码为
 -1，表示社区主页视图控制器对象创建失败；
 -2，表示未找开应用主窗口；
 -3，表示弹出窗口异常；
 -4,表示参数填写异常 （可能为空）
 */
+ (GameCommunityEntryResult *)openTopicGameCommunity:(WeGamersSDKParams*)param topicId:(NSString *)sTopicId supportGameCommunity:(void (^)(BOOL bSupport))supportBlock;


/**
 打开对应帖子社区
 @param param 参数请参考WeGamersSDKParams定义。
 @param sSNSId 帖子Id
 @param supportBlock 返回当前系统环境是否支持游戏社区
 @return 打开的窗口结果对象：
 1）社区主页视图控制器对象；
 2）NSError对象。其中，错误码为
 -1，表示社区主页视图控制器对象创建失败；
 -2，表示未找开应用主窗口；
 -3，表示弹出窗口异常；
 -4,表示参数填写异常 （可能为空）
 */
+ (GameCommunityEntryResult *)openSNSGameCommunity:(WeGamersSDKParams*)param snsId:(NSString *)sSNSId supportGameCommunity:(void (^)(BOOL bSupport))supportBlock;
@end

