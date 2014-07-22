//
//  LoginViewController.h
//  MutualDreams
//
//  Created by Nicolas Cadena on 17/07/14.
//  Copyright (c) 2014 Nicolas Cadena. All rights reserved.
//

#import "ViewController.h"
#import <FacebookSDK/FacebookSDK.h>

@interface LoginViewController : ViewController <FBLoginViewDelegate>

@property (strong, nonatomic) IBOutlet FBLoginView *loginView;


@end
