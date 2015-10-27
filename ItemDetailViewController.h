//
//  ItemDetailViewController.h
//  Checklists
//
//  Created by Aditya Bantwal on 26/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.

#import <UIKit/UIKit.h>

@class ItemDetailViewController;
@class ChecklistItem;

@protocol ItemDetailViewControllerDelegate <NSObject>
- (void)itemDetailViewControllerDidCancel:(ItemDetailViewController *)controller;
- (void)itemDetailViewController:(ItemDetailViewController *)controller DidFinishAddingItem:(ChecklistItem *)item;
- (void)itemDetailViewController:(ItemDetailViewController *)controller DidFinishEditingItem:(ChecklistItem *)item;
@end

@interface ItemDetailViewController : UITableViewController

@property (nonatomic, weak) id <ItemDetailViewControllerDelegate> delegate;
@property (nonatomic, strong) ChecklistItem *itemToEdit;

@end
