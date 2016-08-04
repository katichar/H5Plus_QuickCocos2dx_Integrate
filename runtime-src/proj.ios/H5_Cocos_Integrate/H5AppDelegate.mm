//
//  AppDelegate.m
//  H5_Cocos_Integrate
//
//  Created by katichar on 16/7/29.
//  Copyright © 2016年 rsma. All rights reserved.
//

#import "H5AppDelegate.h"
#import "PDRCore.h"
#import "PDRCommonString.h"
#import "AppManager.h"


@implementation H5AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    AppManager* mgr = [AppManager getInstance];
    mgr.navigationController = [[UINavigationController alloc] initWithRootViewController:_window.rootViewController];
    _window.rootViewController = mgr.navigationController;
    [mgr.navigationController release];
    return [PDRCore initEngineWihtOptions:launchOptions withRunMode:PDRCoreRunModeAppClient];
}

- (void)applicationWillResignActive:(UIApplication *)application {
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
}

- (void)applicationWillTerminate:(UIApplication *)application {
    [PDRCore destoryEngine];
}

@end
