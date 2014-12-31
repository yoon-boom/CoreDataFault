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

// add new record
- (void)newRecordWithEntity:(NSString *)entityName setValues:(NSArray *)values forKeys:(NSArray *)keys;

// fetch record(s)
- (NSArray *)searchRecordWithEntity:(NSString *)entityName forPredicateStr:(NSString *)predicateStr;
- (NSArray *)searchRecordWithEntity:(NSString *)entityName forRelationshipKeys:(NSArray *)relationKeys
                    forPredicateStr:(NSString *)predicateStr;

// delete record(s)
- (void)flushRecords:(void (^) (BOOL succeed))block;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@end
