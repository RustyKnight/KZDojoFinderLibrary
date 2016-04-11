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

@property DayOfWeek dayOfWeek;
@property NSString* startTimeText;
@property NSString* endTimeText;

/**
 *  Start time, in minutes, since midnight
 *
 * This would make 6pm 108000 (18 * 60)
 */
@property int startTimeInMinutesSinceMidnight;
/**
 *  End time, in minutes, since midnight
 *
 * This would make 6pm 108000 (18 * 60)
 */
@property int endTimeInMinutesSinceMidnight;

@property SessionType type;
@property NSString* details;

@property (readonly) id<Dojo> dojo;

@end
