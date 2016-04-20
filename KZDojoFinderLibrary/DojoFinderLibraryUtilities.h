//
//  DojoFinderLibraryUtilities.h
//  KZDojoFinderLibrary
//
//  Created by Shane Whitehead on 20/04/2016.
//  Copyright © 2016 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Session.h"

@interface DojoFinderLibraryUtilities : NSObject
/**
 This takes the time in minutes since midnight and returns
 a text representation in teh form of "hh:mm a"
 */
+(NSString* _Nonnull)toTextMinutesSinceMidnight:(int)minutes;
+(NSString* _Nullable)toStringDayOfWeek:(DayOfWeek)dow;
+(NSString* _Nullable)toStringSessionType:(SessionType)type;
@end
