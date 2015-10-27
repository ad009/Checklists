//
//  ChecklistItem.h
//  Checklists
//
//  Created by Aditya Bantwal on 26/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject <NSCoding>

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;

@property (nonatomic, copy) NSDate *dueDate;
@property (nonatomic, assign) BOOL shouldRemind;
@property (nonatomic, assign) NSInteger itemId;

- (void)toggleChecked;
- (void)scheduleNotification;

@end
