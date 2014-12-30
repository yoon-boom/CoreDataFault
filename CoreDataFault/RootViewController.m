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
    
    NSArray *result = [[CoreDataManager sharedCoreDataManager] searchForEntity:NSStringFromClass([Person class]) withPredicateStr:nil];
    [result enumerateObjectsUsingBlock:^(Person *person, NSUInteger idx, BOOL *stop) {
        NSLog(@"%@", person);
        if (person.isFault) {
            NSLog(@".faulting first attempt");
        }
    }];
    
    [result enumerateObjectsUsingBlock:^(Person *person, NSUInteger idx, BOOL *stop) {
        if (person.isFault) {
            NSLog(@".faulting");
        }
        else {
            NSLog(@"%@", person);
        }
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

@end
