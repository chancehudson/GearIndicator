//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Trackpoint : NSObject
{
    BOOL _followsPause;
    Trackpoint *_previousTrackpoint;
    double _duration;
    double _distance;
    double _heartRate;
}

@property(nonatomic) __weak Trackpoint *previousTrackpoint; // @synthesize previousTrackpoint=_previousTrackpoint;
@property(nonatomic) double heartRate; // @synthesize heartRate=_heartRate;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL followsPause; // @synthesize followsPause=_followsPause;
- (void).cxx_destruct;
- (void)decrementDuration:(int)arg1;
- (void)incrementDuration:(int)arg1;
- (double)getPreviousDistance;
- (int)getPreviousDuration;
- (BOOL)isRepeatDistance;
- (BOOL)isRepeatDuration;
- (int)getDurationSinceLastTrackpoint;
- (double)getMostRecentDistance;
- (double)getPace;
- (id)initWithPrev:(id)arg1;
- (id)initWithDur:(double)arg1 andDist:(double)arg2 andHR:(double)arg3 andPrev:(id)arg4;

@end
