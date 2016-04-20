//
//  WithPhoto.h
//  KZDojoFinderLibrary
//
//  Created by Shane Whitehead on 20/04/2016.
//  Copyright © 2016 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ImageConsumer.h"
@import UIKit;

/**
 Okay, this is a little dubious in the naming...
 
 Basically, I had two class which could have pictures/photos, they
 basically had to work the same we, providing feedback via the consumer
 so I wanted to wrap them up in a protocol, but couldn't come up with a
 suitable name...Photoable? Picturable? Imageable?
 */
@protocol WithPhoto <NSObject>
-(void) photoWithConsumer:(id<ImageConsumer> _Nonnull)consumer;
@end
