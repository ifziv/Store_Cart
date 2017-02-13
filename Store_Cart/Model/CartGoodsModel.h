//
//  CartGoodsModel.h
//  Store_Cart
//
//  Created by zivInfo on 17/2/13.
//  Copyright © 2017年 xiwangtech.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

@interface CartGoodsModel : NSObject


@property (nonatomic, assign) BOOL select;

@property (assign, nonatomic) NSInteger count;
@property (copy, nonatomic) NSString    *goodsID;
@property (copy, nonatomic) NSString    *goodsName;
@property (copy, nonatomic) NSString    *orginalPrice;
@property (copy, nonatomic) NSString    *realPrice;
@property (strong,nonatomic) UIImage    *image;


@end
