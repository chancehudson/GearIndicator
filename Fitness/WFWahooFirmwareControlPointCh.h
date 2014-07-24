//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFControlPointDecoder.h"

@class WFWBFirmware, WFWBFirmwarePackage;

@interface WFWahooFirmwareControlPointCh : WFControlPointDecoder
{
    id <WFWBFirmwareDelegate> firmwareDelegate;
    BOOL bInitSuccess;
    BOOL didReceiveInitResponse;
    BOOL isCurrentFirmwareA;
    unsigned char ucBootloaderCommandVersion;
    BOOL bCheckingBootloader;
    WFWBFirmware *firmware;
    WFWBFirmwarePackage *firmwarePackage;
    CDStruct_e7e103e4 stDeviceInfo;
    BOOL isDeviceInfoReady;
    BOOL isDeviceInfoAvailable;
    BOOL didRecieveDeviceInfoResponse;
    int totalBytesSent;
    double txStartTime;
}

@property(readonly, nonatomic) BOOL didRecieveDeviceInfoResponse; // @synthesize didRecieveDeviceInfoResponse;
@property(readonly, nonatomic) BOOL isDeviceInfoAvailable; // @synthesize isDeviceInfoAvailable;
@property(readonly, nonatomic) BOOL isDeviceInfoReady; // @synthesize isDeviceInfoReady;
@property(readonly, nonatomic) BOOL didReceiveInitResponse; // @synthesize didReceiveInitResponse;
@property(readonly, nonatomic) BOOL bInitSuccess; // @synthesize bInitSuccess;
@property(retain, nonatomic) id <WFWBFirmwareDelegate> firmwareDelegate; // @synthesize firmwareDelegate;
- (BOOL)sendRebootRequest;
- (id)stringFromDeviceInfo;
- (BOOL)sendStartNordicDFURequest;
- (BOOL)sendSelfTestCommandWithPayloadData:(id)arg1;
- (BOOL)sendDeviceInfoRequest;
- (BOOL)sendEnableJtagRequest;
- (BOOL)sendDisableJtagRequest;
- (BOOL)updateFirmwareWithPackagePath:(id)arg1 isCurrentFirmwareA:(BOOL)arg2;
- (BOOL)upgradeFirmware:(id)arg1;
- (BOOL)cancelGetBooloaderVersion;
- (BOOL)sendGetBootloaderVersion;
- (BOOL)sendDisableDebugRequest;
- (BOOL)sendEnableDebugRequestWithParameter0:(unsigned int)arg1;
- (BOOL)sendEnableDebugRequest;
- (void)didReceivePacketACK;
- (BOOL)isCheckingBootloaderVersion;
- (void)transferFinished:(BOOL)arg1;
- (BOOL)sendInitTransferRequest;
- (BOOL)sendDataPacket;
- (void)processFirmwareCommandResponse;
- (void)delegateStartNordicDFUResponse:(BOOL)arg1;
- (void)delegateSelfTestInfoWasReceived:(id)arg1;
- (void)delegateSelfTestCommandResponseWasReceivedWithSuccess:(BOOL)arg1 responseData:(id)arg2;
- (void)delegateEnableJtagResponse:(BOOL)arg1 before:(unsigned long)arg2 after:(unsigned long)arg3;
- (void)delegateDisableJtagResponse:(BOOL)arg1;
- (void)delegateBootloaderVersionResponse:(char *)arg1 success:(BOOL)arg2;
- (void)delegateStopDebugModeResponse:(id)arg1;
- (void)delegateDebugModeResponse:(id)arg1;
- (void)delegateFirmwareTransferStarted:(id)arg1;
- (void)delegateFirmwareTransferFinished:(id)arg1;
- (void)delegateFirmwarePacketSent;
@property(readonly, nonatomic) CDStruct_e7e103e4 *pstDeviceInfo;
- (void)reset;
- (BOOL)decodeCharacteristicData;
- (id)init;
- (void)dealloc;

@end
