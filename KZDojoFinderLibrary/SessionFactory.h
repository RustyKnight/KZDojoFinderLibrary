//
//  SessionFactory.h
//  DojoFinder
//
//  Created by Shane Whitehead on 26/11/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dojo.h"

@interface SessionFactory : NSObject

+(void)sessionsForDojo:(id<Dojo>)dojo onCompliation:(void (^)(NSArray*))callBack;

@end
