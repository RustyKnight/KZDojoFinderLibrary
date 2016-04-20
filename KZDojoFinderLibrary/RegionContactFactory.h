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

+(id<RegionContact>)regionContactByRegion:(NSInteger)region;
+(void)regionContactInBackgroundByRegion:(NSInteger)region compliation:(void(^)(id<RegionContact>))callBack;

@end
