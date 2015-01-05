//
//  Car.h
//  CoreDataFault
//
//  Created by Yoon Lee on 12/30/14.
//  Copyright (c) 2014 Yoon Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CarDetail;

@interface Car : NSManagedObject

@property (nonatomic, retain) NSString * color;
@property (nonatomic, retain) NSString * make;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) CarDetail *details;

@end
