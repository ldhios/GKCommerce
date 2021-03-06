//
//  CheckoutChoiceAddressController.h
//  GKCommerce
//
//  Created by 小悟空 on 3/31/15.
//  Copyright (c) 2015 GKCommerce. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CheckoutChoiceAddressController : UIViewController
<UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSArray *addresses;
@property (strong, nonatomic) RACSubject *chosen;
@end
