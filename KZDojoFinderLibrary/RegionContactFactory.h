//
//  RegionalContactFactory.h
//  DojoFinder
//
//  Created by Shane Whitehead on 23/12/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RegionContact.h"

@interface RegionContactFactory : NSObject

+(void)regionContact:(NSInteger)region onCompliation:(void(^)(id<RegionContact>))callBack;

@end
