//
//  AppManager.m
//  H5App
//
//  Created by katichar on 16/7/27.
//  Copyright © 2016年 rsma. All rights reserved.
//

#import "AppManager.h"
static AppManager *instance=nil;
@implementation AppManager
@synthesize gameName;
+ (AppManager*)getInstance{
    static dispatch_once_t onceToken ;
    dispatch_once(&onceToken, ^{
        instance = [[super allocWithZone:NULL] init] ;
    }) ;
    return instance;
}
+(id) allocWithZone:(struct _NSZone *)zone
{
    return [AppManager instance] ;
}

-(id) copyWithZone:(struct _NSZone *)zone
{
    return [AppManager instance] ;
}
//释放cocos所有变量
- (void)releaseCocos{
    cocos2d::CCDirector* director = cocos2d::CCDirector::sharedDirector();
    director->end();
    [self.ccView.window resignKeyWindow];
    [self.ccView.window removeFromSuperview];
    self.ccView.window.rootViewController = nil;
    self.ccView.window.hidden=YES;
    [self.ccView.window release];
    [self.navigationController popToViewController:self.h5View animated:YES];
    self.ccView.window=nil;
    self.ccView=nil;
    [self performSelector:@selector(releaseLuaEngine) withObject:nil afterDelay:0.1];
//    [self.navigationController.parentViewController makeKeyAndVisible];
}
- (void)releaseLuaEngine{
    cocos2d::ScriptEngineManager::getInstance()->destroyInstance();
}
@end
