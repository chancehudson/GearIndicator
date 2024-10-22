//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_WFBikePowerConnection.h"

@interface WFBikePowerConnection : _WFBikePowerConnection
{
}

- (BOOL)trainerInitSpindown;
- (BOOL)trainerRequestAntConnection:(int)arg1 deviceId:(unsigned short)arg2 useForPower:(BOOL)arg3;
- (BOOL)trainerReadMode;
- (BOOL)trainerSetWheelCircumference:(float)arg1;
- (BOOL)trainerSetWindSpeed:(float)arg1;
- (BOOL)trainerSetGrade:(float)arg1;
- (BOOL)trainerSetWindResistance:(float)arg1;
- (BOOL)trainerSetRollingResistance:(double)arg1;
- (BOOL)trainerSetSimMode:(float)arg1 rollingResistance:(float)arg2 windResistance:(float)arg3;
- (BOOL)trainerSetStandardMode:(int)arg1;
- (BOOL)trainerSetResistanceMode:(float)arg1;
- (BOOL)trainerSetFtpMode:(unsigned short)arg1 withPercent:(unsigned short)arg2;
- (BOOL)trainerSetErgMode:(unsigned short)arg1 enableSpeedSimulation:(BOOL)arg2;
- (BOOL)setManualZeroCalibration;
- (BOOL)setBikePowerCalibrationOffset:(unsigned short)arg1;
- (BOOL)setBikePowerCalibration:(CDStruct_a17356f7 *)arg1;
- (id)getBikePowerRawData;
- (id)getBikePowerData;
- (id)bikePowerSensor;
@property(retain, nonatomic) id <WFBikeTrainerDelegate> btDelegate;
@property(retain, nonatomic) id <WFBikePowerDelegate> cpmDelegate;
@property(nonatomic) BOOL autoCalibrate;
- (void)disconnect;
- (void)setConnectionStatus:(int)arg1;
- (void)cpmConnection:(id)arg1 didReceiveKurtSpindownResult:(unsigned long)arg2;
- (void)cpmConnection:(id)arg1 didReceiveTrainerSpindownResult:(float)arg2 temperature:(float)arg3 offset:(unsigned short)arg4;
- (void)cpmConnection:(id)arg1 didReceiveTrainerInitSpindownResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveTrainerRequestAntConnectionResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveTrainerReadModeResponse:(unsigned char)arg2 mode:(int)arg3 params:(id)arg4;
- (void)cpmConnection:(id)arg1 didSetTrainerWheelCircumference:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didSetTrainerWindSpeed:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didSetTrainerRollingResistance:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didSetTrainerWindResistance:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didSetTrainerGrade:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didSetTrainerMode:(int)arg2 status:(unsigned char)arg3;
- (void)cpmConnection:(id)arg1 didReceiveReadCrankLengthResponse:(unsigned char)arg2 crankLength:(float)arg3;
- (void)cpmConnection:(id)arg1 didReceiveSetCrankLengthResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveCalibrationResponse:(unsigned char)arg2 offset:(unsigned short)arg3 temperature:(BOOL)arg4;
- (id)init;
- (void)dealloc;

@end

