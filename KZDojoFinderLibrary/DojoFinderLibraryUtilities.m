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

@end
