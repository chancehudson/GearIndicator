//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SChartRange : NSObject
{
    NSNumber *minimum;
    NSNumber *maximum;
}

+ (id)rangeWithRange:(id)arg1;
@property(readonly, nonatomic) NSNumber *maximum; // @synthesize maximum;
@property(readonly, nonatomic) NSNumber *minimum; // @synthesize minimum;
- (void)dealloc;
- (id)description;
- (id)span;
- (id)initWithMinimum:(id)arg1 andMaximum:(id)arg2;

@end

