//
//  Dojo.h
//  DojoFinder
//
//  Created by Shane Whitehead on 17/11/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@import UIKit;

@protocol Dojo <NSObject>

@property NSString *name;
@property NSString *address;
@property (readonly) CLLocation *location;
@property int region;

-(void) picture:(void (^)(UIImage*))callBack;

@end
