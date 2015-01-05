//
//  CarTune.m
//  CoreDataFault
//
//  Created by Yoon Lee on 12/30/14.
//  Copyright (c) 2014 Yoon Lee. All rights reserved.
//

#import "CarTune.h"

@implementation CarTune

- (void)awakeFromInsert
{
    [super awakeFromInsert];
    
    [self addObserver:self
           forKeyPath:self.make options:NSKeyValueObservingOptionNew | NSKeyValueObservingOptionOld context:nil];
}

- (void)awakeFromFetch
{
    [super awakeFromFetch];

    [self addObserver:self
           forKeyPath:self.make options:NSKeyValueObservingOptionNew | NSKeyValueObservingOptionOld context:nil];
}

- (void)willTurnIntoFault
{
    [super willTurnIntoFault];
    
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (void)didTurnIntoFault
{
    [super didTurnIntoFault];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context
{
    DLog(@"");
}

@end
