//
//  DojoFactory.h
//  DojoFinder
//
//  Created by Shane Whitehead on 17/11/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "DojoFinderFactoryConsumer.h"

@interface DojoFactory : NSObject

+(void)dojosNear:(CLLocation* _Nonnull)userPoint withinKilometers:(double)range withConsumer:(id<DojoFinderFactoryConsumer> _Nonnull)consumer;

@end
