//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntDevice.h"

@class WFTimestamp;

@interface WFBikeSpeedCadenceSensor : WFAntDevice
{
    BOOL dataInitialized;
    CDStruct_340e9e35 stCBSCPage0Data;
    CDStruct_340e9e35 stPrevCBSCPage0Data;
    CDStruct_2929c278 stCalculatedData;
    WFTimestamp *timestampSpeed;
    WFTimestamp *timestampCadence;
    double lastWheelDataTime;
    double lastCadenceDataTime;
}

- (void)reset;
- (BOOL)processMessage:(char *)arg1;
- (id)getRawData;
- (id)getData;
- (void)dealloc;
- (id)init;

@end

