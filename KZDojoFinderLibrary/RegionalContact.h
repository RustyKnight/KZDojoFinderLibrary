//
//  RegionalContact.h
//  DojoFinder
//
//  Created by Shane Whitehead on 22/12/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@protocol RegionalContact <NSObject>

@property NSString *name;
@property NSString *phoneNumber;
@property NSString *email;
@property NSString *faceBook;
@property int region;

-(void) photo:(void (^)(UIImage*))callBack;

@end
