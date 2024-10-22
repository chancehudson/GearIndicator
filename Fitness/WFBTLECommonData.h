//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WFBTLECommonData : NSObject
{
    NSString *deviceName;
    unsigned short appearance;
    NSString *manufacturerName;
    NSString *modelNumber;
    NSString *serialNumber;
    NSString *hardwareRevision;
    NSString *firmwareRevision;
    NSString *softwareRevision;
    unsigned long long systemId;
    unsigned char batteryLevel;
    CDStruct_d6a5fd51 batteryPowerState;
}

@property(nonatomic) CDStruct_d6a5fd51 batteryPowerState; // @synthesize batteryPowerState;
@property(nonatomic) unsigned char batteryLevel; // @synthesize batteryLevel;
@property(nonatomic) unsigned long long systemId; // @synthesize systemId;
@property(retain, nonatomic) NSString *softwareRevision; // @synthesize softwareRevision;
@property(retain, nonatomic) NSString *firmwareRevision; // @synthesize firmwareRevision;
@property(retain, nonatomic) NSString *hardwareRevision; // @synthesize hardwareRevision;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber;
@property(retain, nonatomic) NSString *modelNumber; // @synthesize modelNumber;
@property(retain, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName;
@property(nonatomic) unsigned short appearance; // @synthesize appearance;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName;
- (id)init;
- (void)dealloc;

@end

