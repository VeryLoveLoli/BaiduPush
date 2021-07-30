//
//  BaiduPush.h
//  BaiduPush
//
//  Created by 韦烽传 on 2021/7/30.
//

#import <Foundation/Foundation.h>

//! Project version number for BaiduPush.
FOUNDATION_EXPORT double BaiduPushVersionNumber;

//! Project version string for BaiduPush.
FOUNDATION_EXPORT const unsigned char BaiduPushVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <BaiduPush/PublicHeader.h>

/**
 在 `Link Binary With Libraries` 添加 `CoreTelephony.framework`、`libz.tbd`
 */

/// 系统库
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <AdSupport/AdSupport.h>

/// 百度推送头文件
#import <BaiduPush/BPush.h>
