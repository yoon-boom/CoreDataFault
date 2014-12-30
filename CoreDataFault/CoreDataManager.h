//
//  CoreDataManager.h
//  CoreDataFault
//
//  Created by Yoon Lee on 12/29/14.
//  Copyright (c) 2014 Yoon Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CoreDataManager : NSObject

+ (instancetype)sharedCoreDataManager;

// saves changes in the application's managed object context before the application terminates.
- (void)saveContext;

// operation
- (NSArray *)searchForEntity:(NSString *)entityName withPredicateStr:(NSString *)predicateStr;
- (NSArray *)searchForEntity:(NSString *)entityName withRelationshipKeys:(NSArray *)relationKeys withPredicateStr:(NSString *)predicateStr;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@end
