//
//  Checklist.h
//  Checklists
//
//  Created by Aditya Bantwal on 26/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.

#import <Foundation/Foundation.h>

@interface Checklist : NSObject <NSCoding>

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, copy) NSString *iconName;

- (int)countUncheckedItems;

@end
