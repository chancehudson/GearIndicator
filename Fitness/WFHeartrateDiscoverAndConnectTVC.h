//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorDiscoveryTVC.h"

@class UILabel;

@interface WFHeartrateDiscoverAndConnectTVC : WFSensorDiscoveryTVC
{
    UILabel *_searchingForHRMonitorsLabel;
}

@property(nonatomic) __weak UILabel *searchingForHRMonitorsLabel; // @synthesize searchingForHRMonitorsLabel=_searchingForHRMonitorsLabel;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)sensorManager:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)resetGUI;
- (void)viewDidLoad;

@end
