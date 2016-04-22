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

+(void)dojosNear:(CLLocation*)userPoint withinKilometers:(double)range onCompliation:(void (^)(NSArray*))callBack;

@end
