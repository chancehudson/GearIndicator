//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartNumberAxis.h"

@class NSMutableArray;

@interface SChartDiscontinuousNumberAxis : SChartNumberAxis
{
    NSMutableArray *savedSkips;
}

- (void)reconfigureFromStubbedAxisCopy:(id)arg1;
- (id)stubCopyOfAxisForDataLoading;
- (id)skips;
- (void)removeSkip:(struct SChartNumberSkip)arg1;
- (void)addSkip:(struct SChartNumberSkip)arg1;
- (void)dealloc;
- (id)init;
- (id)transformValueToInternal:(id)arg1;
- (id)transformValueToExternal:(id)arg1;

@end
