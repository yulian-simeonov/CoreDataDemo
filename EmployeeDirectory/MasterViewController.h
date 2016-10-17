//
//  MasterViewController.h
//  EmployeeDirectory
//
//  Created by Yulian Simeonov on 06/25/14.
//  Copyright (c) 2013 Yulian Simeonov. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
