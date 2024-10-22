//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMApplicationNotificaionListener.h"

@class UIWindow;

@interface UBERRootViewController : UIViewController <NMApplicationNotificaionListener>
{
    UIViewController *_migrationViewController;
    CDUnknownBlockType _migrationDissmissedBlock;
    int _state;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType migrationDissmissedBlock; // @synthesize migrationDissmissedBlock=_migrationDissmissedBlock;
@property(retain, nonatomic) UIViewController *migrationViewController; // @synthesize migrationViewController=_migrationViewController;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)presentHistoryViewControllerWithWorkout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentWorkoutViewControllerAnimated:(BOOL)arg1;
- (void)presentStartViewControllerAnimated:(BOOL)arg1;
- (void)presentMigrationViewControllerDismissed:(CDUnknownBlockType)arg1;
- (void)setContentControllerVC:(id)arg1 animationOptions:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

