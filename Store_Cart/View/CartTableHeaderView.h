//
//  CartTableHeaderView.h
//  Store_Cart
//
//  Created by zivInfo on 17/2/13.
//  Copyright © 2017年 xiwangtech.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CartConfigFile.h"

typedef void(^cartClickBlock) (BOOL select);

@interface CartTableHeaderView : UITableViewHeaderFooterView

@property (copy, nonatomic) NSString   *title;
@property (assign, nonatomic) BOOL     select;
@property (copy, nonatomic) cartClickBlock zvCartClickBlock;

@end
