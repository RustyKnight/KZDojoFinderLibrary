//
//  Session.h
//  DojoFinder
//
//  Created by Shane Whitehead on 26/11/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dojo.h"

typedef NS_ENUM(NSInteger, DayOfWeek) {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
typedef NS_ENUM(NSInteger, SessionType) {Normal, Super, Restricted, Invitation};

@protocol Session <NSObject>

@property (readonly, strong, nonatomic) DayOfWeek dayOfWeek;
@property (readonly, strong, nonatomic) NSString* startTimeText;
@property (readonly, strong, nonatomic) NSString* endTimeText;

/**
 *  Start time, in minutes, since midnight
 *
 * This would make 6pm 108000 (18 * 60)
 */
@property (readonly, nonatomic) int startTimeInMinutesSinceMidnight;
/**
 *  End time, in minutes, since midnight
 *
 * This would make 6pm 108000 (18 * 60)
 */
@property (readonly, nonatomic) int endTimeInMinutesSinceMidnight;

@property (readonly, strong, nonatomic) SessionType type;
@property (readonly, strong, nonatomic) NSString* details;

@property (readonly, strong, nonatomic) id<Dojo> dojo;

@end
