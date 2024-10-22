//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFNormalizedSample.h"

@interface WFNormalizedLocationSample : WFNormalizedSample
{
    double accuracy;
    double altitude;
    double distanceOffset;
    double latitude;
    double longitude;
    double speed;
    double totalDistance;
}

@property(nonatomic) double totalDistance; // @synthesize totalDistance;
@property(nonatomic) double speed; // @synthesize speed;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(nonatomic) double latitude; // @synthesize latitude;
@property(nonatomic) double distanceOffset; // @synthesize distanceOffset;
@property(nonatomic) double altitude; // @synthesize altitude;
@property(nonatomic) double accuracy; // @synthesize accuracy;
- (float)paceMinPerKilometer;
- (float)paceMinPerMile;
- (float)speedMilesPerHour;
- (float)speedKilometersPerHour;
- (float)speedMetersPerSecond;
- (float)distanceKilometers;
- (float)distanceMiles;
- (float)distanceMeters;

@end

