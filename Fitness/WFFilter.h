//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface WFFilter : NSObject
{
    NSNumber *_currentSampleFiltered;
}

@property(retain, nonatomic) NSNumber *currentSampleFiltered; // @synthesize currentSampleFiltered=_currentSampleFiltered;
- (void).cxx_destruct;
- (id)filterSamplesInArray:(id)arg1;
- (void)addSampleWithValue:(double)arg1;
- (id)initWithQueue:(int)arg1;

@end

