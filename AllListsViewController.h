//
//  AllListsViewController.h
//  Checklists
//
//  Created by Aditya Bantwal on 26/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.

#import <UIKit/UIKit.h>

@class DataModel;

@interface AllListsViewController : UITableViewController

@property (nonatomic, strong) DataModel *dataModel;

@end
