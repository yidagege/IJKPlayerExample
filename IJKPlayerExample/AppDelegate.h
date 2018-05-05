//
//  AppDelegate.h
//  IJKPlayerExample
//
//  Created by zhangyi35 on 2018/5/3.
//  Copyright © 2018年 yidage. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

