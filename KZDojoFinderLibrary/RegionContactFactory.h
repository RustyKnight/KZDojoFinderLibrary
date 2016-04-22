//
//  RegionalContactFactory.h
//  DojoFinder
//
//  Created by Shane Whitehead on 23/12/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RegionContact.h"
#import "DojoFinderFactoryConsumer.h"

@interface RegionContactFactory : NSObject

+(void)regionContactForRegion:(NSInteger)region withConsumer:(id<DojoFinderFactoryConsumer> _Nonnull)consumer;

@end
