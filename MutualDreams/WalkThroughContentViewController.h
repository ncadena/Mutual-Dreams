//
//  WalkThroughContentViewController.h
//  MutualDreams
//
//  Created by Nicolas Cadena on 17/07/14.
//  Copyright (c) 2014 Nicolas Cadena. All rights reserved.
//

#import "ViewController.h"

@interface WalkThroughContentViewController : ViewController

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
