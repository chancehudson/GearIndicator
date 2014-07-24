//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartAxis.h"

@class NSString;

@interface SChartNumberAxis : SChartAxis
{
    NSString *deprecatedLabelFormatString;
    int requiredPrecision;
    BOOL userSetMinFractionDigit;
    BOOL userSetMaxFractionDigit;
    double zoomInLimit;
    double zoomOutLimit;
}

@property(nonatomic) double zoomOutLimit; // @synthesize zoomOutLimit;
@property(nonatomic) double zoomInLimit; // @synthesize zoomInLimit;
- (BOOL)setRangeInternalWithMinimum:(id)arg1 andMaximum:(id)arg2 withAnimation:(BOOL)arg3 usingBounceLimits:(BOOL)arg4;
- (BOOL)setZoom:(double)arg1 fromPosition:(double *)arg2 withAnimation:(BOOL)arg3 andBounceLimits:(BOOL)arg4;
- (id)stringForId:(id)arg1;
- (id)stringForValue:(double)arg1;
- (int)calcPrecision:(double)arg1;
- (double)decrementTickMarkValue:(double)arg1 isMajor:(BOOL)arg2;
- (double)incrementTickMarkValue:(double)arg1 isMajor:(BOOL)arg2;
- (id)currentMinorTickFrequency;
- (id)currentMajorTickFrequency;
- (void)setMinorTickFrequency:(id)arg1;
- (void)setMajorTickFrequency:(id)arg1;
- (BOOL)isOverAlternate:(double)arg1;
- (id)firstMinorTick;
- (id)firstMajorTick;
- (void)updateInternalTickFrequencies;
- (id)longestLabel;
- (id)sensibleValuesForLongestLabel;
- (id)labelFormatString;
- (void)setLabelFormatString:(id)arg1;
- (BOOL)zoomingIn:(id)arg1 withFrequency:(id)arg2;
- (id)getNewRangeWithMinimum:(id)arg1 withMaximum:(id)arg2;
- (void)setupDefaultsForRadialChart;
- (id)init;
- (id)initWithRange:(id)arg1;
- (void)setDefaults;

@end
