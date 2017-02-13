//
//  Cart2ViewController.h
//  Store_Cart
//
//  Created by zivInfo on 17/2/13.
//  Copyright © 2017年 xiwangtech.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CartConfigFile.h"
#import "CartGoodsModel.h"
#import "CartTableViewCell.h"

@interface Cart2ViewController : UIViewController
<UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isHiddenNavigationBarWhenDisappear;//记录当页面消失时是否需要隐藏系统导航
    BOOL _isHasTabBarController;//是否含有tabbar
    BOOL _isHasNavitationController;//是否含有导航
}

@property (strong,nonatomic)NSMutableArray *dataArray;
@property (strong,nonatomic)NSMutableArray *selectedArray;
@property (strong,nonatomic)UITableView *myTableView;
@property (strong,nonatomic)UIButton *allSellectedButton;
@property (strong,nonatomic)UILabel *totlePriceLabel;


@end
