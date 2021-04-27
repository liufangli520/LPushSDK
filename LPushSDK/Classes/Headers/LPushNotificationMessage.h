//
//  O2SPushNotificationMessage.h
//  O2SPushKit
//
//  Created by wkx on 2020/5/29.
//  Copyright © 2020 O2Space. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LPushNotificationContent;

typedef NS_ENUM(NSUInteger, LPushNotificationMessageType)
{
    LPushNotificationMessageTypeAPNs = 0,         //接收APNs推送(包括"前台"和"前台或后台静默"APNS消息)
    LPushNotificationMessageTypeLocal = 1,        //接收前台本地推送通知
    LPushNotificationMessageTypeAPNsClicked = 2,  //接收点击APNs推送通知
    LPushNotificationMessageTypeLocalClicked = 3, //接收点击本地推送通知
};

@interface LPushNotificationMessage : NSObject

/**
推送通知消息类型
 */
@property (nonatomic, assign) LPushNotificationMessageType notificationMessageType;

/**
推送消息唯一标识
 */
@property(nonatomic, copy) NSString *identifier;

/**
推送通知消息
 */
@property(nonatomic, strong) LPushNotificationContent *content;

- (NSDictionary *)convertDictionary;

@end



