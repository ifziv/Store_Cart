//
//  CartConfigFile.h
//  Store_Cart
//
//  Created by zivInfo on 17/2/13.
//  Copyright © 2017年 xiwangtech.com. All rights reserved.
//

#ifndef CartConfigFile_h
#define CartConfigFile_h


//
#define ZVNaigationBarHeight    64
#define ZVTabBarHeight          49
#define ZVTableViewHeaderHeight 40
#define ZVTAG_CartEmptyView     100

// 获取屏幕宽高
#define ZVSCREEN_HEIGHT ([[UIScreen mainScreen]bounds].size.height)
#define ZVSCREEN_WIDTH  ([[UIScreen mainScreen]bounds].size.width)

// 16进制RGB的颜色转换
#define ZVColorFromHex(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

// R G B 颜色
#define ZVColorFromRGB(r,g,b) [UIColor \
colorWithRed:(r)/255.0 \
green:(g)/255.0 \
blue:(b)/255.0 alpha:1]

// 红色
#define ZVBASECOLOR_RED [UIColor \
colorWithRed:((float)((0xED5565 & 0xFF0000) >> 16))/255.0 \
green:((float)((0xED5565 & 0xFF00) >> 8))/255.0 \
blue:((float)(0xED5565 & 0xFF))/255.0 alpha:1.0]


#endif /* CartConfigFile_h */
