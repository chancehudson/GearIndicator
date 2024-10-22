//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFFormatter.h"

@class NSLocale, NSNumberFormatter, NSString, WFDurationFormatter;

@interface WFSpeedFormatter : WFFormatter
{
    NSLocale *_locale;
    unsigned int _units;
    NSString *_invalidSpeedSymbol;
    unsigned int _roundingMode;
    NSNumberFormatter *_numberFormatter;
    WFDurationFormatter *_durationFormatter;
}

@property(retain, nonatomic) WFDurationFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) unsigned int roundingMode; // @synthesize roundingMode=_roundingMode;
@property(copy, nonatomic) NSString *invalidSpeedSymbol; // @synthesize invalidSpeedSymbol=_invalidSpeedSymbol;
@property(nonatomic) unsigned int units; // @synthesize units=_units;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (double)speedFromString:(id)arg1;
- (id)stringFromSpeed:(double)arg1 unitStyle:(unsigned int)arg2;
- (id)stringFromSpeed:(double)arg1;
- (id)unitStringFromSpeed:(double)arg1 unitStyle:(unsigned int)arg2;
- (id)unitStringFromSpeed:(double)arg1;
- (unsigned int)formatterUnitStyle;
- (unsigned int)formatterUnits;
- (id)formatterLocale;

@end

