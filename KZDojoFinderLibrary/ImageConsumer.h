//
//  ImageConsumer.h
//  KZDojoFinderLibrary
//
//  Created by Shane Whitehead on 20/04/2016.
//  Copyright © 2016 KaiZen. All rights reserved.
//

@import UIKit;

@protocol ImageConsumer <NSObject>
-(void)loadImage:(UIImage* _Nonnull)image;
-(void)imageFailedWithError:(NSError* _Nonnull)error;
-(void)imageLoadingWithProgress:(NSNumber* _Nonnull)progress;
@end