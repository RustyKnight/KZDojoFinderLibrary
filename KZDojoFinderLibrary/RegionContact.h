//
//  RegionalContact.h
//  DojoFinder
//
//  Created by Shane Whitehead on 22/12/2014.
//  Copyright (c) 2014 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
@import "WithPhoto.h"

@protocol RegionContact <NSObject, WithPhoto>

@property (readonly, strong, nonatomic) NSString* _Nonnull name;
@property (readonly, strong, nonatomic) NSString* _Nonnull phoneNumber;
@property (readonly, strong, nonatomic) NSString* _Nonnull email;
@property (readonly, strong, nonatomic) NSString* _Nonnull faceBook;
@property (nonatomic) int region;

@end
