//
//  ImageConsumer.h
//  KZDojoFinderLibrary
//
//  Created by Shane Whitehead on 20/04/2016.
//  Copyright © 2016 KaiZen. All rights reserved.
//

@import UIKit;

@protocol ImageConsumer <NSObject>
-(void)imageDidLoad:(UIImage* _Nullable)image;
-(void)imageDidFailWithError:(NSError* _Nonnull)error;
-(void)imageProgressDidChange:(NSNumber* _Nonnull)progress;
@end