//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorData.h"

@interface WFAudioControlData : WFSensorData
{
    unsigned char volume;
    unsigned char totalTrackTime;
    unsigned char currentTrackTime;
    unsigned char audioDeviceState;
    unsigned char repeatState;
    unsigned char shuffleState;
    unsigned short serialNumber;
    unsigned char commandNumber;
}

@property(nonatomic) unsigned char commandNumber; // @synthesize commandNumber;
@property(nonatomic) unsigned short serialNumber; // @synthesize serialNumber;
@property(nonatomic) unsigned char shuffleState; // @synthesize shuffleState;
@property(nonatomic) unsigned char repeatState; // @synthesize repeatState;
@property(nonatomic) unsigned char audioDeviceState; // @synthesize audioDeviceState;
@property(nonatomic) unsigned char currentTrackTime; // @synthesize currentTrackTime;
@property(nonatomic) unsigned char totalTrackTime; // @synthesize totalTrackTime;
@property(nonatomic) unsigned char volume; // @synthesize volume;

@end
