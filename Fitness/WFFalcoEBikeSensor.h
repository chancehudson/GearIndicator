//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntDevice.h"

@interface WFFalcoEBikeSensor : WFAntDevice
{
    struct {
        unsigned short usSpeed;
        unsigned char ucVoltage;
        unsigned char ucCurrent;
        unsigned char ucPower;
        unsigned char ucTorque;
        unsigned char ucTemperature;
    } stFalcoData;
    struct {
        unsigned char ucPowerLevel;
        unsigned char ucRegenLevel;
        unsigned char ucTurboMode;
        unsigned char ucCruiseMode;
        unsigned char ucLockMode;
    } stFalcoCachedTxData;
}

- (BOOL)sendResetFrameID;
- (BOOL)setCurrentLimit:(unsigned char)arg1 speedLimit:(unsigned char)arg2 powerLimit:(unsigned char)arg3;
- (BOOL)setLockOn:(BOOL)arg1;
- (BOOL)setCruiseOn:(BOOL)arg1;
- (BOOL)setTurboOn:(BOOL)arg1;
- (BOOL)setRegenLevel:(unsigned char)arg1;
- (BOOL)setPowerLevel:(unsigned char)arg1;
- (BOOL)setData:(unsigned char)arg1 value:(unsigned char)arg2;
- (void)reset;
- (BOOL)processMessage:(char *)arg1;
- (id)getRawData;
- (id)getData;
- (void)dealloc;
- (id)init;

@end
