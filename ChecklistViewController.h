//
//  ChecklistViewController.h
//  Checklists
//
//  Created by Aditya Bantwal on 26/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.


#import <UIKit/UIKit.h>

@class Checklist;

@interface ChecklistViewController : UITableViewController

@property (nonatomic, strong) Checklist *checklist;

@end
