//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartLegendSymbolBlock.h"

@class UIColor;

@interface SChartLegendSymbolBlockSplit : SChartLegendSymbolBlock
{
    UIColor *lowColor;
}

@property(retain, nonatomic) UIColor *lowColor; // @synthesize lowColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithAreaColor:(id)arg1 andLowAreaColor:(id)arg2 andOutlineColor:(id)arg3;

@end

