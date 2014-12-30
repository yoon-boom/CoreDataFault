//
//  Person.h
//  CoreDataFault
//
//  Created by Yoon Lee on 12/29/14.
//  Copyright (c) 2014 Yoon Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Country;

@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSString * language;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * race;
@property (nonatomic, retain) NSString * sex;
@property (nonatomic, retain) NSSet *countries;
@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addCountriesObject:(Country *)value;
- (void)removeCountriesObject:(Country *)value;
- (void)addCountries:(NSSet *)values;
- (void)removeCountries:(NSSet *)values;

@end
