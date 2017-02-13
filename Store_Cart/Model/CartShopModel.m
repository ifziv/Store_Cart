//
//  CartModel.m
//  Store_Cart
//
//  Created by zivInfo on 17/2/13.
//  Copyright © 2017年 xiwangtech.com. All rights reserved.
//

#import "CartShopModel.h"

@implementation CartShopModel


- (void)configGoodsArrayWithArray:(NSArray*)array;
{
    if (array.count > 0) {
        NSMutableArray *dataArray = [NSMutableArray arrayWithCapacity:0];
        
        for (NSDictionary *dic in array) {
            CartGoodsModel *model = [[CartGoodsModel alloc] init];
            
            model.count = [[dic objectForKey:@"count"] integerValue];
            model.goodsID = [dic objectForKey:@"goodsId"];
            model.goodsName = [dic objectForKey:@"goodsName"];
            model.orginalPrice = [NSString stringWithFormat:@"%@",[dic objectForKey:@"orginalPrice"]];
            model.realPrice = [NSString stringWithFormat:@"%@",[dic objectForKey:@"realPrice"]];
            model.image = [UIImage imageNamed:@"cart_default_bg.png"];
            [dataArray addObject:model];
        }
        
        _goodsArray = [dataArray mutableCopy];
    }

}


@end
