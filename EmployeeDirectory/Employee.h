//
//  Employee.h
//  EmployeeDirectory
//
//  Created by Yulian Simeonov on 06/25/14.
//  Copyright (c) 2013 Yulian Simeonov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Employee : NSManagedObject

@property (nonatomic, retain) NSString * cellPhone;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSNumber * managerId;
@property (nonatomic, retain) NSString * officePhone;
@property (nonatomic, retain) NSString * picture;
@property (nonatomic, retain) NSString * title;

@end
