//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartLegendSymbol.h"

@class SChartOHLCSeriesStyle;

@interface SChartLegendSymbolOHLCSeries : SChartLegendSymbol
{
    SChartOHLCSeriesStyle *style;
}

@property(readonly, nonatomic) SChartOHLCSeriesStyle *style; // @synthesize style;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithSeries:(id)arg1;

@end

