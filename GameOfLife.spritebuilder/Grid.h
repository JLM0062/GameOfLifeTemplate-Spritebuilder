//
//  Grid.h
//  GameOfLife
//
//  Created by Jackson Moore on 6/30/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;

@property (nonatomic, assign) int generation;


@end
