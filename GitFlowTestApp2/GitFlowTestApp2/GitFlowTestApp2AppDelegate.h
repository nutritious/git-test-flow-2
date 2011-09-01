//
//  GitFlowTestApp2AppDelegate.h
//  GitFlowTestApp2
//
//  Created by Andrey Yegorov on 9/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GitFlowTestApp2ViewController;

@interface GitFlowTestApp2AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet GitFlowTestApp2ViewController *viewController;

@end
