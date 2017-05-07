//
//  AppDelegate.h
//  SpeechTest
//
//  Created by Boris Polania on 5/6/17.
//  Copyright © 2017 Boris Polania. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

