//
//  DojoFinderLibraryUtilities.m
//  KZDojoFinderLibrary
//
//  Created by Shane Whitehead on 20/04/2016.
//  Copyright © 2016 KaiZen. All rights reserved.
//

#import "DojoFinderLibraryUtilities.h"
#import <KZCoreLibrariesObjC/KZCoreLibrariesObjC.h>

@implementation DojoFinderLibraryUtilities
+(NSString* _Nonnull)toTextMinutesSinceMidnight:(int)minutes {
	
	NSDate* date = [KZDateUtilities timeToStartOfDay:[NSDate date]];
	date = [date dateByAddingTimeInterval:minutes * 60];
	
	NSDateFormatter *format = [[NSDateFormatter alloc] init];
	[format setDateFormat:@"hh:mm a"];
	
	return [format stringFromDate:date];
	
}

+(NSString* _Nullable)toStringDayOfWeek:(DayOfWeek)dow {

	NSString* value = nil;
	switch (dow) {
		case Monday:
			value = @"Monday";
			break;
		case Tuesday:
			value = @"Tuesday";
			break;
		case Wednesday:
			value = @"Wednesday";
			break;
		case Thursday:
			value = @"Thursday";
			break;
		case Friday:
			value = @"Friday";
			break;
		case Saturday:
			value = @"Saturday";
			break;
		case Sunday:
			value = @"Sunday";
			break;
	}
	return value;
	
}

+(NSString* _Nullable)toStringSessionType:(SessionType)type {
	
	NSString* value = nil;
	switch (type) {
		case Normal:
			value = @"Normal";
			break;
		case Super:
			value = @"Super";
			break;
		case Restricted:
			value = @"Restricted";
			break;
		case Invitation:
			value = @"Invitation";
			break;
	}
	return value;
	
}

@end
