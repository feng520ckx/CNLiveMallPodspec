//
//  CNLiveMallManager.h
//  CNLiveMall
//
//  Created by caikaixuan on 2019/12/11.
//  Copyright © 2019 caikaixuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class CNLiveMallManager;
@protocol CNLiveMallManagerDelegate <NSObject>

/// 分享触发回调
/// @param manager 当前manager
/// @param data 分享携带的信息
/// @param formVC 控制器
- (void)manager:(CNLiveMallManager *)manager shareDidClickWithData:(NSDictionary *)data formVC:(UIViewController *)formVC;

/// 支付触发回调
/// @param manager 当前manager
/// @param data 支付携带的信息
/// @param formVC 当前控制器
- (void)manager:(CNLiveMallManager *)manager payDidClickWithData:(NSDictionary *)data formVC:(UIViewController *)formVC;

/// 游客模式需要登录
/// @param manager 当前的manager
/// @param formVC 当前控制器
- (void)manager:(CNLiveMallManager *)manager willNeedLogin:(UIViewController *)formVC;

@end

typedef NS_ENUM(NSInteger,CNLiveMallSDKEnvironment) {
    CNLiveMallSDKEnvironmentENV_TEST = 0,//测试环境
    CNLiveMallSDKEnvironmentENV_LIVE = 1,//线上环境
};

@interface CNLiveMallManager : NSObject

/// /初始化SDK
/// @param userInfo 用户信息 uid & token  游客模式userInfo 设置为nil
/// @param environment  SDK运行环境
- (instancetype)initWithUserInfo:(NSDictionary *)userInfo environment:(CNLiveMallSDKEnvironment)environment;

//仅供作为获取实例化后的对象 不能作为初始化方法
+ (instancetype)shareManager;

@property (nonatomic, weak) id<CNLiveMallManagerDelegate> delegate;

/// 获取根控制器
- (UITabBarController *)mallRootViewController;


/// 游客模式进入后 触发主工程登录  登录成功后调用方法登录sdk
/// @param userInfo 携带用户信息 uid & token
- (void)loginWithUserInfo:(NSDictionary *)userInfo;


/// 退出登录 清除用户信息
- (void)logout;


@end

NS_ASSUME_NONNULL_END
