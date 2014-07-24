//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SChartAxis, SChartCanvas, ShinobiChart;

@protocol SChartLayoutManager <NSObject>
- (struct CGPoint)originForTitleOnYAxis:(SChartAxis *)arg1 titlePosition:(int)arg2 canvas:(SChartCanvas *)arg3 labelSize:(struct CGSize)arg4;
- (struct CGPoint)originForTitleOnXAxis:(SChartAxis *)arg1 titlePosition:(int)arg2 canvas:(SChartCanvas *)arg3 labelSize:(struct CGSize)arg4;
- (float)spaceRequiredForAxes:(NSArray *)arg1 forPosition:(int)arg2;
- (struct CGRect)calculateFrameForLegend;
- (struct CGRect)calculateFrameForAxis:(SChartAxis *)arg1 withGLFrame:(struct CGRect)arg2;
- (struct CGRect)updateCanvasSize:(struct CGRect)arg1;
- (struct CGRect)calculateCanvasFrame;
- (struct CGRect)calculateGLFrame;
- (id)initWithChart:(ShinobiChart *)arg1;
@end
