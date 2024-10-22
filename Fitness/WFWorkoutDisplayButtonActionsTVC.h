//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFDynamicTableViewController.h"

@class NSArray, UIViewController;

@interface WFWorkoutDisplayButtonActionsTVC : WFDynamicTableViewController
{
    NSArray *_buttonActions;
    id <WFWorkoutDisplayButtonActionsTVCDelegate> _delegate;
    UIViewController *_popViewController;
}

@property(retain, nonatomic) UIViewController *popViewController; // @synthesize popViewController=_popViewController;
@property(nonatomic) __weak id <WFWorkoutDisplayButtonActionsTVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *buttonActions; // @synthesize buttonActions=_buttonActions;
- (void).cxx_destruct;
- (void)dummy;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)titleForLeftModalDismissButton;
- (BOOL)enableLeftModalDismissButton;
- (void)viewDidLoad;

@end

