//
//  CartTableViewCell.h
//  Store_Cart
//
//  Created by zivInfo on 17/2/13.
//  Copyright © 2017年 xiwangtech.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CartConfigFile.h"
#import "CartGoodsModel.h"
#import "UIView+UIViewExt.h"

typedef void(^cartNumberChangedBlock) (NSInteger number);
typedef void(^cartCellSelectedBlock) (BOOL select);

@interface CartTableViewCell : UITableViewCell


//商品数量
@property (assign, nonatomic) NSInteger cartNumber;
@property (assign, nonatomic) BOOL      cartSelected;

- (void)reloadDataWithModel:(CartGoodsModel*)model;
- (void)numberAddWithBlock:(cartNumberChangedBlock)block;
- (void)numberCutWithBlock:(cartNumberChangedBlock)block;
- (void)cellSelectedWithBlock:(cartCellSelectedBlock)block;


@end
