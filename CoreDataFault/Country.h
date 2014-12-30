//
//  Country.h
//  CoreDataFault
//
//  Created by Yoon Lee on 12/29/14.
//  Copyright (c) 2014 Yoon Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Person;

@interface Country : NSManagedObject

@property (nonatomic, retain) NSString * nameOfCountry;
@property (nonatomic, retain) NSSet *person;
@end

@interface Country (CoreDataGeneratedAccessors)

- (void)addPersonObject:(Person *)value;
- (void)removePersonObject:(Person *)value;
- (void)addPerson:(NSSet *)values;
- (void)removePerson:(NSSet *)values;

@end
