//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class UIEvent, UIPageViewController, UIView, WFPageControl;

@interface MZPageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    id <MZPageViewControllerDataSource> _dataSource;
    id <MZPageViewControllerDelegate> _delegate;
    UIViewController *_currentViewController;
    WFPageControl *_pageControl;
    UIView *_containerView;
    unsigned int _currentPage;
    UIPageViewController *_pageViewController;
    int _numberOfPages;
    UIEvent *_lastEvent;
}

@property(retain, nonatomic) UIEvent *lastEvent; // @synthesize lastEvent=_lastEvent;
@property(nonatomic) int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(readonly, nonatomic) unsigned int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak WFPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id <MZPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MZPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (int)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(int)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (int)indexOfViewController:(id)arg1;
- (id)viewControllerAtIndex:(int)arg1;
- (void)pageControlChanged:(id)arg1;
- (void)turnPageBackwards:(id)arg1 forEvent:(id)arg2;
- (void)turnPageForwards:(id)arg1 forEvent:(id)arg2;
- (BOOL)shouldAnimateTurnPageWithEvent:(id)arg1;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEvents;
- (void)setCurrentPage:(unsigned int)arg1 animated:(BOOL)arg2 withEvent:(id)arg3;
- (void)setCurrentPage:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setCurrentPageInternally:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

@end
