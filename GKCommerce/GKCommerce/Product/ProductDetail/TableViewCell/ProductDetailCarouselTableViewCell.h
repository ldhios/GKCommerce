//
//  ProductDetailCarouselTableViewCell.h
//  GKCommerce
//
//  Created by 小悟空 on 14/10/22.
//  Copyright (c) 2014年 GKCommerce. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProductDetailTableViewCell.h"
#import "Product.h"
#import "GKCarouselView.h"

@interface ProductDetailCarouselTableViewCell : ProductDetailTableViewCell
<GKCarouselViewDelegate>

@property (strong, nonatomic) IBOutlet GKCarouselView *carousel;
@end
