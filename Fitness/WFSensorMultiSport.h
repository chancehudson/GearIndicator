//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensor.h"

@class NSTimer;

@interface WFSensorMultiSport : WFSensor
{
    NSTimer *broadcastTimer;
}

- (void).cxx_destruct;
- (void)stopBroadcastTimer;
- (void)startBroadcastTimer;
- (void)onLocationUpdate;
- (void)onBroadcastTick:(id)arg1;
- (id)msConnection;
- (void)endWorkout:(id)arg1;
- (BOOL)beginWorkout:(id)arg1;
- (void)dealloc;
- (id)init;

@end

