//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartMappedSeriesGroup.h"

@interface SChartCartesianSeriesGroup : SChartMappedSeriesGroup
{
    int numStacks;
}

- (void)configure;
- (BOOL)requiresRecalculation;
- (BOOL)drawSeriesOnChart:(id)arg1;
- (BOOL)drawStackedSeries:(id)arg1 onChart:(id)arg2;
- (double)baselineForSeries:(id)arg1;
- (void)mapSeries;
- (void)mapDataPoints:(id)arg1 inSeries:(id)arg2;
- (BOOL)seriesAreStacked;
- (int)numStacks;
- (void)setStacks;
- (id)initWithXAxis:(id)arg1 andYAxis:(id)arg2 errorHandler:(id)arg3;

@end

