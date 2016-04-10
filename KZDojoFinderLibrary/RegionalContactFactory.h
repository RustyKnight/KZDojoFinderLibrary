//
//  RegionalContactFactory.h
//  DojoFinder
//
//  Created by Shane Whitehead on 23/12/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RegionalContact.h"

@interface RegionalContactFactory : NSObject

+(id<RegionalContact>)regionalContactByRegion:(NSInteger)region;
+(void)regionalContactInBackgroundByRegion:(NSInteger)region compliation:(void(^)(id<RegionalContact>))callBack;

@end
