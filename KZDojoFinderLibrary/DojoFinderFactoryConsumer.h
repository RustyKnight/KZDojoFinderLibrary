//
//  DojoFinderFactoryConsumer.h
//  KZDojoFinderLibrary
//
//  Created by Shane Whitehead on 22/04/2016.
//  Copyright © 2016 KaiZen. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DojoFinderFactoryConsumer <NSObject>
-(void)dojoFinderFactory:(NSObject* _Nonnull)factory didCompleteWith:(NSObject* _Nonnull)data;
-(void)dojoFinderFactory:(NSObject* _Nonnull)factory didFailWithError:(NSError* _Nonnull)error;
-(void)dojoFinderFactory:(NSObject* _Nonnull)factory progressDidChange:(NSNumber* _Nonnull)progress;
@end
