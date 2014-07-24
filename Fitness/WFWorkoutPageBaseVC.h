//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFWorkoutPageDelegate-Protocol.h"

@class NSString, WFSession, WFSessionData;

@interface WFWorkoutPageBaseVC : UIViewController
{
    id <WFWorkoutPageDelegate> _delegate;
    WFSession *_session;
    int _pageIndex;
    NSString *_subTitle;
}

@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic, assign) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) WFSession *session; // @synthesize session=_session;
@property(nonatomic, retain) __weak id <WFWorkoutPageDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)doesRequireNavigationButtons;
- (BOOL)isPageNearlyVisable;
- (BOOL)isPageVisable;
- (void)updateWorkoutPageWithSampleData;
- (void)updateWorkoutPageGUI;
- (void)dataRefreshTimerDidFireNotification:(id)arg1;
@property(readonly, nonatomic) WFSessionData *sessionData;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

@end
