//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFSensorHeartrate, WFWahooMotionAnalysisCalibrationBase;

@protocol WFHeartrateConnectionTICKRXCalibrationDelegate <NSObject>
- (void)heartrateSensor:(WFSensorHeartrate *)arg1 didCompleteGetCalibrationOperation:(WFWahooMotionAnalysisCalibrationBase *)arg2;
- (void)heartrateSensor:(WFSensorHeartrate *)arg1 didCompleteSetCalibrationOperation:(BOOL)arg2;
@end

