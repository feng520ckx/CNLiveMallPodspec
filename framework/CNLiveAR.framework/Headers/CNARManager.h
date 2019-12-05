//
//  CNARManager.h
//  CNLiveAR
//
//  Created by zhaolin on 2019/3/14.
//

#import <Foundation/Foundation.h>

@protocol CNARManagerDelegate <NSObject>

@optional

/**
 识别到物体
 
 @param markerName 服务器中图片id
 @param objectId 识别物体id
 */
-(void)findObject:(NSString * _Nullable)markerName objectId:(NSString * _Nullable)objectId;

/**
 丢失物体
 
 @param markerName 服务器中图片id
 */
-(void)lostObject:(NSString * _Nullable)markerName;

@end

NS_ASSUME_NONNULL_BEGIN

@interface CNARManager : NSObject

#pragma mark - 单例

+(instancetype)sharedManager;

#pragma mark - 初始化

/**
 账号
 */
@property (nonatomic,copy,nonnull,readonly) NSString * accessKey;
/**
 密钥
 */
@property (nonatomic,copy,nonnull,readonly) NSString * secretKey;
/**
 是否是测试版 YES为测试版 NO为正式版
 */
@property (nonatomic,assign,readonly) BOOL isDebug;

/**
 初始化ARSDK
 
 @param accessKey 账号
 @param secretKey 密钥
 @param isDebug 是否是测试版 YES为测试版 NO为正式版
 */
-(void)initWithAccessKey:(NSString * _Nonnull)accessKey secretKey:(NSString * _Nonnull)secretKey isDebug:(BOOL)isDebug;

#pragma mark - 使用方法

/**
 代理
 */
@property (nonatomic,weak) id<CNARManagerDelegate> delegate;

/**
 显示AR识别界面(第一次显示自动开始识别,不需要手动调用startTracking)

 @param controller 显示的控制器
 @param frame frame
 */
-(void)displayARInController:(UIViewController*)controller frame:(CGRect)frame;

/**
 释放AR
 */
-(void)deinitAR;

/**
 开始识别
 */
-(void)startTracking;

/**
 停止识别
 */
-(void)stopTracking;

#pragma mark - 版本

/**
 获取SDK版本
 
 @return 版本x.x.x
 */
-(NSString*)getVersion;

@end

NS_ASSUME_NONNULL_END
