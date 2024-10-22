//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartSeriesStyle.h"

@class NSMutableArray, NSNumber, UIColor, UIFont;

@interface SChartDonutSeriesStyle : SChartSeriesStyle
{
    BOOL showFlavourSet;
    BOOL showCrustSet;
    BOOL showLabelsSet;
    BOOL showFlavour;
    BOOL showCrust;
    BOOL showLabels;
    BOOL protrusionSet;
    int chartEffect;
    NSMutableArray *crustColors;
    NSNumber *crustThickness;
    NSMutableArray *flavourColors;
    NSNumber *initialRotation;
    float protrusion;
    UIFont *labelFont;
    UIColor *labelFontColor;
    UIColor *labelBackgroundColor;
}

@property(retain, nonatomic) UIColor *labelBackgroundColor; // @synthesize labelBackgroundColor;
@property(retain, nonatomic) UIColor *labelFontColor; // @synthesize labelFontColor;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont;
@property(nonatomic) BOOL protrusionSet; // @synthesize protrusionSet;
@property(nonatomic) float protrusion; // @synthesize protrusion;
@property(retain, nonatomic) NSNumber *initialRotation; // @synthesize initialRotation;
@property(retain, nonatomic) NSMutableArray *flavourColors; // @synthesize flavourColors;
@property(retain, nonatomic) NSNumber *crustThickness; // @synthesize crustThickness;
@property(retain, nonatomic) NSMutableArray *crustColors; // @synthesize crustColors;
@property(nonatomic) int chartEffect; // @synthesize chartEffect;
@property(nonatomic) BOOL showLabels; // @synthesize showLabels;
@property(nonatomic) BOOL showCrust; // @synthesize showCrust;
@property(nonatomic) BOOL showFlavour; // @synthesize showFlavour;
- (void)dealloc;
- (void)supplementStyleFromStyle:(id)arg1;
- (id)crustColorAtIndex:(int)arg1;
- (id)flavourColorAtIndex:(int)arg1;
- (id)init;

@end

