//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFHistoryDetailPageVC.h"

@class WFHistoryValueLabel;

@interface WFHistoryDetailPagePowerVC : WFHistoryDetailPageVC
{
    WFHistoryValueLabel *_averagePowerCell;
    WFHistoryValueLabel *_maxPowerCell;
    WFHistoryValueLabel *_normalizedPowerCell;
    WFHistoryValueLabel *_intensityFactorCell;
}

@property(nonatomic) __weak WFHistoryValueLabel *intensityFactorCell; // @synthesize intensityFactorCell=_intensityFactorCell;
@property(nonatomic) __weak WFHistoryValueLabel *normalizedPowerCell; // @synthesize normalizedPowerCell=_normalizedPowerCell;
@property(nonatomic) __weak WFHistoryValueLabel *maxPowerCell; // @synthesize maxPowerCell=_maxPowerCell;
@property(nonatomic) __weak WFHistoryValueLabel *averagePowerCell; // @synthesize averagePowerCell=_averagePowerCell;
- (void).cxx_destruct;
- (void)populateDataFromWorkout:(id)arg1;
- (void)setWorkout:(id)arg1;
- (void)localize;
- (void)viewDidLoad;

@end

