//
//  ReportsViewController.h
//  EmployeeDirectory
//
//  Created by Yulian Simeonov on 06/25/14.
//  Copyright (c) 2013 Yulian Simeonov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReportsViewController : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSArray *reports;

@end
