//
//  CarDetail.h
//  CoreDataFault
//
//  Created by Yoon Lee on 12/30/14.
//  Copyright (c) 2014 Yoon Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Car;

@interface CarDetail : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Car *info;

@end
