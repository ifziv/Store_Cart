//
//  CartModel.h
//  Store_Cart
//
//  Created by zivInfo on 17/2/13.
//  Copyright © 2017年 xiwangtech.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CartGoodsModel.h"

@interface CartShopModel : NSObject


@property (assign, nonatomic) BOOL   select;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *sID;

@property (strong, nonatomic, readonly)NSMutableArray *goodsArray;

- (void)configGoodsArrayWithArray:(NSArray*)array;


@end
