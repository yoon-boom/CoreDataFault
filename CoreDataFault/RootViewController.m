//
//  RootViewController.m
//  CoreDataFault
//
//  Created by Yoon Lee on 12/29/14.
//  Copyright (c) 2014 Yoon Lee. All rights reserved.
//

#import "RootViewController.h"
#import "CoreDataManager.h"
#import "Person.h"

@implementation RootViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.view setBackgroundColor:[UIColor whiteColor]];
    NSMutableArray *storage = [[NSMutableArray alloc] init];
    
    // insert
    for (char c = 'a'; c <= 'z'; c ++) {
        NSString *name = [NSString stringWithFormat:@"%c", c];
        [[CoreDataManager sharedCoreDataManager] newRecordWithEntity:NSStringFromClass([Person class]) setValues:@[name, @"Male"] forKeys:@[@"name", @"sex"]];
    }
    
    // save
    [[CoreDataManager sharedCoreDataManager] saveContext];
    
    // track
    NSArray *result = [[CoreDataManager sharedCoreDataManager] searchRecordWithEntity:NSStringFromClass([Person class]) forPredicateStr:nil];
    
    [result enumerateObjectsUsingBlock:^(Person *person, NSUInteger idx, BOOL *stop) {
        NSLog(@"%@", person);
        if (person.isFault) {
            NSLog(@".faulting first attempt");
        }
        
        [storage addObject:person];
    }];
    
    // test
    [storage enumerateObjectsUsingBlock:^(Person *person, NSUInteger idx, BOOL *stop) {
        NSLog(@"%@", person);
        NSLog(@"%@", person.name);
        NSLog(@"%@", person);
        
        if (person.isFault) {
            NSLog(@".faulting");
        }
        else {
            NSLog(@"%@", person);
        }
    }];
    
    result = [[CoreDataManager sharedCoreDataManager] searchRecordWithEntity:@"Car" forPredicateStr:nil];
    
    [result enumerateObjectsUsingBlock:^(NSManagedObject *obj, NSUInteger idx, BOOL *stop) {
        if (obj.isFault) {
            NSLog(@".faulting");
        }
        else {
            NSLog(@"%@", obj);
        }
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

@end
