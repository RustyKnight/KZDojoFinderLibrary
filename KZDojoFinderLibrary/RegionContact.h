//
//  RegionalContact.h
//  DojoFinder
//
//  Created by Shane Whitehead on 22/12/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@protocol RegionContact <NSObject>

@property (readonly, strong, nonatomic) NSString *name;
@property (readonly, strong, nonatomic) NSString *phoneNumber;
@property (readonly, strong, nonatomic) NSString *email;
@property (readonly, strong, nonatomic) NSString *faceBook;
@property (nonatomic) int region;

-(void) photo:(void (^)(UIImage*))callBack;

@end
