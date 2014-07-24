//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntDevice.h"

@class WFTimestamp;

@interface WFBikeCadenceSensor : WFAntDevice
{
    unsigned char wheelCircumference;
    BOOL dataInitialized;
    CDStruct_4945f4df stPrevPage0Data;
    CDStruct_4945f4df stPage0Data;
    CDStruct_60527eeb stPage1Data;
    CDStruct_f55e8c9b stPage2Data;
    CDStruct_ed467401 stPage3Data;
    int eThePageState;
    struct {
        unsigned int accumCrankRevolutions;
        float accumCadenceTime;
        unsigned char instantCrankRPM;
    } stCalculatedData;
    WFTimestamp *timestamp;
    unsigned char ucOldPage;
}

- (void)reset;
- (void)decodeDefault:(struct BCS_MSG_COMMON *)arg1;
- (BOOL)processMessage:(char *)arg1;
- (id)getRawData;
- (id)getData;
- (void)dealloc;
- (id)init;

@end
