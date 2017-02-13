//
//  CartTableHeaderView.m
//  Store_Cart
//
//  Created by zivInfo on 17/2/13.
//  Copyright © 2017年 xiwangtech.com. All rights reserved.
//

#import "CartTableHeaderView.h"

@interface CartTableHeaderView ()

@property (strong, nonatomic) UILabel  *titleLabel;
@property (strong, nonatomic) UIButton *button;

@end

@implementation CartTableHeaderView


- (instancetype)initWithReuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithReuseIdentifier:reuseIdentifier];
    if (self) {
        
        [self initUI];
    }
    
    return self;
}

- (void)initUI
{
    
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.frame = CGRectMake(5, 15, 50, 30);
    
    [button setImage:[UIImage imageNamed:@"cart_unSelect_btn"] forState:UIControlStateNormal];
    [button setImage:[UIImage imageNamed:@"cart_selected_btn"] forState:UIControlStateSelected];
    [button addTarget:self action:@selector(buttonClick:) forControlEvents:UIControlEventTouchUpInside];
    [self.contentView addSubview:button];
    self.button = button;
    
    UILabel *label = [[UILabel alloc]init];
    label.frame = CGRectMake(70, 15, ZVSCREEN_WIDTH - 100, 30);
    label.font = [UIFont systemFontOfSize:14];
    [self.contentView addSubview:label];
    self.titleLabel = label;
}

- (void)buttonClick:(UIButton*)button
{
    button.selected = !button.selected;
    
    if (self.zvCartClickBlock) {
        self.zvCartClickBlock(button.selected);
    }
}

- (void)setSelect:(BOOL)select
{
    self.button.selected = select;
    _select = select;
}

- (void)setTitle:(NSString *)title
{
    self.titleLabel.text = title;
    _title = title;
}


@end
