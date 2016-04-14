//
//  DojoFactory.h
//  DojoFinder
//
//  Created by Shane Whitehead on 17/11/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface DojoFactory : NSObject

+(NSArray<id<Dojo>>*)dojosNear:(CLLocation*)userPoint withinKilometers:(double)range;
+(void)dojosNearInBackground:(CLLocation*)userPoint withinKilometers:(double)range compliation:(void (^)(NSArray*))callBack;

@end
