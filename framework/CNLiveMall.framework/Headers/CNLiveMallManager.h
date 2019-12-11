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
/// @param currentVc 当前控制器
- (void)manager:(CNLiveMallManager *)manager shareDidClickWithData:(NSDictionary *)data currentVc:(UIViewController *)currentVc;

/// 支付触发回调
/// @param manager 当前manager
/// @param data 支付携带的信息
/// @param currentVc 当前控制器
- (void)manager:(CNLiveMallManager *)manager payDidClickWithData:(NSDictionary *)data currentVc:(UIViewController *)currentVc;

/// 游客模式需要登录
/// @param manager 当前的manager
/// @param currentVc 当前控制器
- (void)manager:(CNLiveMallManager *)manager willNeedLogin:(UIViewController *)currentVc;

@end

@interface CNLiveMallManager : NSObject

/// 已登录状态初始化SDK
/// @param userInfo 用户信息 uid & token
- (instancetype)initWithUserInfo:(NSDictionary *)userInfo;

/// 获取单例对象 如果没有配置数据 则为默认游客模式
+ (instancetype)shareManager;

@property (nonatomic, weak) id<CNLiveMallManagerDelegate> delegate;

/// 获取根控制器
- (UITabBarController *)mallRootViewController;


/// 游客模式进入后 触发主工程登录  登录成功后调用方法登录sdk
/// @param userInfo 携带用户信息 uid & token
- (void)loginWithUserInfo:(NSDictionary *)userInfo;


@end

NS_ASSUME_NONNULL_END
