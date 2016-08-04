//
//  PluginTest.h
//  HBuilder-Hello
//
//  Created by Mac Pro on 14-9-3.
//  Copyright (c) 2014年 DCloud. All rights reserved.
//

#include "PGPlugin.h"
#include "PGMethod.h"
#import <Foundation/Foundation.h>
#include "cocos2d.h"
#import "cocos/AppController.h"
#import "cocos/AppDelegate.h"
#import "H5AppDelegate.h"
#import "platform/ios/CCEAGLView-ios.h"
#import "CocosViewController.h"
@interface PGPluginTest : PGPlugin


- (void)PluginTestFunction:(PGMethod*)command;
- (void)PluginTestFunctionArrayArgu:(PGMethod*)command;

- (NSData*)PluginTestFunctionSync:(PGMethod*)command;
- (NSData*)PluginTestFunctionSyncArrayArgu:(PGMethod*)command;
- (void)gotoMyGame:(PGMethod*)commands;
+ (void) back2App;
+ (UIViewController *)getCurrentVC;

@end
