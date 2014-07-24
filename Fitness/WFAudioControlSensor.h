//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntDeviceMaster.h"

@interface WFAudioControlSensor : WFAntDeviceMaster
{
    id <WFAudioControlDelegate> acDelegate;
    BOOL bDataChanged;
    struct {
        unsigned char ucPageNumber;
        unsigned char ucVolume;
        unsigned char ucTotalTrackTimeLSB;
        unsigned char ucTotalTrackTimeMSB;
        unsigned char ucCurrentTrackTimeLSB;
        unsigned char ucCurrentTrackTimeMSB;
        unsigned char ucCapabilities;
        unsigned char ucState;
    } stPage1Data;
    struct {
        unsigned short usSerialNumber;
        unsigned char ucReserved3;
        unsigned char ucReserved4;
        unsigned char ucReserved5;
        unsigned char ucReserved6;
        unsigned char ucCommandNumber;
    } stPage16Data;
}

@property(retain, nonatomic) id <WFAudioControlDelegate> acDelegate; // @synthesize acDelegate;
- (BOOL)setVolume:(unsigned char)arg1;
- (BOOL)setTotalTrackTime:(unsigned short)arg1;
- (BOOL)setCurrentTrackTime:(unsigned short)arg1;
- (BOOL)setShuffleState:(int)arg1;
- (BOOL)setRepeatState:(int)arg1;
- (BOOL)setDeviceState:(int)arg1;
- (BOOL)setCapabilities:(CDStruct_427bdbf8 *)arg1;
- (int)getCurrentShuffleState;
- (int)getCurrentRepeatState;
- (int)getCurrentDeviceState;
- (CDStruct_427bdbf8)getCurrentCapabilities;
- (double)messageRate;
- (BOOL)broadcastPage:(unsigned char)arg1;
- (void)reset;
- (BOOL)processMessage:(char *)arg1;
- (void)dealloc;
- (id)init;

@end
