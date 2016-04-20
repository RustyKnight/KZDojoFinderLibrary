//
//  Dojo.h
//  DojoFinder
//
//  Created by Shane Whitehead on 17/11/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "WithPhoto.h"

@protocol Dojo <NSObject, WithPhoto>

@property (readonly, strong, nonatomic) NSString* _Nonnull name;
@property (readonly, strong, nonatomic) NSString*  _Nonnull address;
@property (readonly, strong, nonatomic) CLLocation* _Nonnull location;
@property (readonly, nonatomic) int region;
@end
