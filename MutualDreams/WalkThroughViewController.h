//
//  WalkThroughViewController.h
//  MutualDreams
//
//  Created by Nicolas Cadena on 17/07/14.
//  Copyright (c) 2014 Nicolas Cadena. All rights reserved.
//

#import "ViewController.h"
#import "WalkThroughContentViewController.h"

@interface WalkThroughViewController : ViewController<UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;

@end
