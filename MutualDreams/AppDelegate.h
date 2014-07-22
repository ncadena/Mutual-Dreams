//
//  AppDelegate.h
//  MutualDreams
//
//  Created by Nicolas Cadena on 26/06/14.
//  Copyright (c) 2014 Nicolas Cadena. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSDictionary *refererAppLink;

- (NSDictionary*)parseURLParams:(NSString *)query;

@end
