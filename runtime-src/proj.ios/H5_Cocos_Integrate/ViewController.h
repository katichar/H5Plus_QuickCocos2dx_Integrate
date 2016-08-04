//
//  ViewController.h
//  H5_Cocos_Integrate
//
//  Created by katichar on 16/7/29.
//  Copyright © 2016年 rsma. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PDRCore.h"
#import "PDRToolSystem.h"
#import "PDRToolSystemEx.h"
#import "PDRToolSystem.h"
#import "PDRToolSystemEx.h"
#import "PDRCoreAppFrame.h"
#import "PDRCoreAppManager.h"
#import "PDRCoreAppWindow.h"
#import "PDRCoreAppInfo.h"



@interface ViewController : UIViewController<PDRCoreDelegate>
{
    PDRCoreApp* pAppHandle;
    BOOL _isFullScreen;
    UIView *_containerView;
    UIView *_statusBarView;
    UIStatusBarStyle _statusBarStyle;
}
-(UIColor*)getStatusBarBackground;
-(void)gotoMyGame;
@end

