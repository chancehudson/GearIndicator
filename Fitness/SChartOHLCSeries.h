//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartBarColumnSeries.h"

@interface SChartOHLCSeries : SChartBarColumnSeries
{
}

- (BOOL)pointIsRising:(id)arg1;
- (id)orderedKeysForDataValues;
- (SEL)themeStyleSelector;
- (id)gradientColorForPoint:(id)arg1 previousPoint:(id)arg2 style:(id)arg3;
- (id)fillColorForPoint:(id)arg1 previousPoint:(id)arg2 style:(id)arg3;
- (id)styleForPoint:(id)arg1 previousPoint:(id)arg2;
- (id)previousPointForBin:(id)arg1 currentIndex:(unsigned int)arg2;
- (void)drawBin:(id)arg1 withDrawer:(id)arg2 withGLBaseline:(float)arg3 andGLTranslation:(const CDStruct_265c7ca9 *)arg4 currentRenderIndexDict:(id)arg5;
- (id)emptyRenderIndexDict;
- (id)symbolForSeriesInLegend;
- (id)blockSymbolForSeriesInLegend;
- (void)setSelectedStyle:(id)arg1;
- (id)selectedStyle;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)init;

@end
