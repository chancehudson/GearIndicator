//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SChartAnnotation, SChartCanvas;

@protocol SChartAnnotationManager <NSObject>
- (void)removeAllAnnotations;
- (void)removeAnnotation:(SChartAnnotation *)arg1;
- (NSArray *)getAnnotations;
- (void)replaceAnnotationAtIndex:(int)arg1 withAnnotation:(SChartAnnotation *)arg2 onCanvas:(SChartCanvas *)arg3;
- (void)addAnnotation:(SChartAnnotation *)arg1 toCanvas:(SChartCanvas *)arg2;
@end
