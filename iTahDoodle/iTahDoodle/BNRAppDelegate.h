//
//  BNRAppDelegate.h
//  iTahDoodle
//
//  Created by Anthony Tran on 6/9/14.
//  Copyright (c) 2014 Anthony Tran. All rights reserved.
//

#import <UIKit/UIKit.h>

// Declare a helper function that we will use to get a path
// to the location on disk where we can save the to-do list
NSString *docPath(void);

@interface BNRAppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource>
{
    UITableView *taskTable;
    UITextField *taskField;
    UIButton *insertButton;
    
    NSMutableArray *tasks;
}

- (void)addtask:(id)sender;

@property (strong, nonatomic) UIWindow *window;

@end
