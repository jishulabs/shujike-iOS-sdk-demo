//
//  SjkAgent.h
//  SjkAgent
//  @website  http://www.shujike.com
//  当前版本号：SjkAgent-IOS-SDK-2.3.6
//  Created by TF_man on 2017/7/19.
//  Copyright © 2017年 shujike. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UserBean;
@interface SjkAgent : NSObject
/**
 *  是否打开调试日志 （默认NO）
 */
@property (nonatomic,assign)BOOL isLogEnabled;

/**
 *  初始化对象
 */
+ (SjkAgent *)sharAgent;

/**
 *  开始启动数据采集
 *  @param AppKey 开发者Key
 *  @param appChannel 渠道来源
 */
+ (void)startWithAppKey:(NSString *)AppKey appChannel:(NSString *)appChannel;

/**
 *  自定义事件统计（单个）
 *  @param event 自定义事件ID
 *  @param value  value
 *  @param key  key
 */
+ (void)postEventevent:(NSString *)event value:(NSString *)value key:(NSString *)key;

/**
 *  自定义事件统计（多个）
 *  @param event 自定义事件ID
 *  @param dict  dict
 */
+ (void)postEventevent:(NSString *)event dict:(NSDictionary<NSString*,NSString*> *)dict;

/**
 *  自定义属性统计（单个）
 *  @param value  自定义属性 ID
 *  @param key  key
 */
+ (void)setAttributeValue:(NSString *)value key:(NSString *)key;

/**
 *  自定义属性统计（多个）
 *  @param dict  dict
 */
+ (void)setAttributeDict:(NSDictionary<NSString *,NSString*> *)dict;

/**
 *  设置用户信息
 */
+ (void)bindUserInfo:(UserBean *)bean;

/**
 *  应用跳转
 */
+ (BOOL)handleUrl:(NSURL *)url;

@end

@interface UserBean : NSObject<NSCoding>
//用户id
@property (nonatomic,copy)NSString *userId;
//用户注册渠道
@property (nonatomic,copy)NSString *userRegesterChannel;
//用户性别
@property (nonatomic,copy)NSString *userSex;
//用户年龄
@property (nonatomic,copy)NSString *userAge;
//用户角色
@property (nonatomic,copy)NSString *userType;
//用户等级
@property (nonatomic,copy)NSString *userLevel;
//用户所属省份
@property (nonatomic,copy)NSString *userProvince;
//用户所属城市
@property (nonatomic,copy)NSString *userCity;

@end
