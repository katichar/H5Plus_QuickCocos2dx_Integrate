//
//  AppManager.h
//  H5App
//
//  Created by katichar on 16/7/27.
//  Copyright © 2016年 rsma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CocosViewController.h"
#import "platform/ios/CCEAGLView-ios.h"
#include "cocos2d.h"
#include "CCLuaEngine.h"
@interface AppManager : NSObject

+ (AppManager*)getInstance;
- (void)releaseCocos;
@property(nonatomic,readwrite) UINavigationController* navigationController;
@property(nonatomic,readwrite) UIViewController* h5View;
@property(nonatomic,readwrite) CocosViewController* ccView;
@property(nonatomic,readwrite,retain) NSString* gameName;
@end
