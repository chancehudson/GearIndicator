//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartPointSeries.h"

@interface SChartScatterSeries : SChartPointSeries
{
    BOOL _isDrawingOuterPoints;
}

- (SEL)themeStyleSelector;
- (void)drawBin:(id)arg1 withDrawer:(id)arg2 withGLBaseline:(float)arg3 andGLTranslation:(const CDStruct_265c7ca9 *)arg4 currentRenderIndexDict:(id)arg5;
- (BOOL)shouldDrawPointsWhenChosenColor:(id)arg1 chosenRadius:(float)arg2;
- (double)radiusForDataPoint:(id)arg1;
- (id)symbolForSeriesInLegend;
- (void)setSelectedStyle:(id)arg1;
- (id)selectedStyle;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)init;

@end

