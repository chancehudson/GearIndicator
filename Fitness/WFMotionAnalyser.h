//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFDistanceFormatter, WFExponentialSmoothingFilter, WFMotionAnalysisCalculatorWorkout, WFRunningSmoothnessCalculator, WFSession;

@interface WFMotionAnalyser : NSObject
{
    id <WFMotionAnalyserDataSource> _dataSource;
    WFSession *_session;
    WFMotionAnalysisCalculatorWorkout *_motionAnalysisCalculator;
    int _lastMotionCount;
    WFDistanceFormatter *_distanceFormatter;
    WFRunningSmoothnessCalculator *_smoothnessCalculator;
    WFExponentialSmoothingFilter *_smoothingFilter;
    double _lastGoodRunningSample;
}

@property(nonatomic) double lastGoodRunningSample; // @synthesize lastGoodRunningSample=_lastGoodRunningSample;
@property(retain, nonatomic) WFExponentialSmoothingFilter *smoothingFilter; // @synthesize smoothingFilter=_smoothingFilter;
@property(retain, nonatomic) WFRunningSmoothnessCalculator *smoothnessCalculator; // @synthesize smoothnessCalculator=_smoothnessCalculator;
@property(retain, nonatomic) WFDistanceFormatter *distanceFormatter; // @synthesize distanceFormatter=_distanceFormatter;
@property(nonatomic) int lastMotionCount; // @synthesize lastMotionCount=_lastMotionCount;
@property(readonly, nonatomic) WFMotionAnalysisCalculatorWorkout *motionAnalysisCalculator; // @synthesize motionAnalysisCalculator=_motionAnalysisCalculator;
@property(nonatomic) __weak WFSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <WFMotionAnalyserDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)stringFromMotionPowerZ:(CDStruct_e25eb2d1 *)arg1 displayCell:(id)arg2;
- (id)formattedMotionPowerZ:(CDStruct_e25eb2d1 *)arg1;
- (id)stringFromMotionPowerY:(CDStruct_e25eb2d1 *)arg1 displayCell:(id)arg2;
- (id)formattedMotionPowerY:(CDStruct_e25eb2d1 *)arg1;
- (id)stringFromMotionPowerX:(CDStruct_e25eb2d1 *)arg1 displayCell:(id)arg2;
- (id)formattedMotionPowerX:(CDStruct_e25eb2d1 *)arg1;
- (id)formattedMaxVerticalOscillation:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)formattedMinVerticalOscillation:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)formattedAvgVerticalOscillation:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)stringFromVerticalOscillation:(CDStruct_e25eb2d1 *)arg1 displayCell:(id)arg2;
- (id)formattedVerticalOscillation:(CDStruct_e25eb2d1 *)arg1;
- (id)formattedMaxGroundContactTime:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)formattedMinGroundContactTime:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)formattedAvgGroundContactTime:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)stringFromGroundContactTime:(CDStruct_e25eb2d1 *)arg1 displayCell:(id)arg2;
- (id)formattedGroundContactTime:(CDStruct_e25eb2d1 *)arg1;
- (id)formattedMaxSmoothness:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)formattedMinSmoothness:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)formattedAvgSmoothness:(CDStruct_e25eb2d1 *)arg1 forDuration:(int)arg2;
- (id)stringFromSmoothness:(CDStruct_e25eb2d1 *)arg1 displayCell:(id)arg2;
- (id)formattedSmoothness:(CDStruct_e25eb2d1 *)arg1;
- (void)postConnectSetup;
- (void)writeSummaryForWorkout:(id)arg1;
- (void)writeSummaryForSegment:(id)arg1;
- (BOOL)isMotionDataStale;
- (void)processData:(id)arg1;
- (void)beginWorkout;
- (void)beginSegment;

@end

