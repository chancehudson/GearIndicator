//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, WFWBFirmwareUpdateInfo;

@protocol WFWBFirmwareDelegate <NSObject>
- (void)firmwareUpdateTransferStarted:(int)arg1;
- (void)firmwareUpdateTransferFinished:(BOOL)arg1;
- (void)firmwareUpdatePacketSent:(int)arg1;

@optional
- (void)firmwareUpdateDidReceiveStartNordicDFUResponse:(BOOL)arg1;
- (void)firmwareSelfTestInfoWasReceived:(NSData *)arg1;
- (void)firmwareSelfTestCommandResponseWasReceivedWithSuccess:(BOOL)arg1 responseData:(NSData *)arg2;
- (void)firmwareUpdateDidReceiveEnableJtagResponse:(BOOL)arg1 valueBefore:(unsigned long)arg2 valueAfter:(unsigned long)arg3;
- (void)firmwareUpdateDidReceiveDisableJtagResponse:(BOOL)arg1;
- (void)firmwareBootloaderVersionResponse:(char *)arg1 success:(BOOL)arg2;
- (void)didReceiveFirmwareVersionInfo:(NSArray *)arg1;
- (void)checkAvailableFirmwareVersionWithUpdateInfo:(WFWBFirmwareUpdateInfo *)arg1;
- (void)firmwareUpdateStopDebugModeResponse:(BOOL)arg1;
- (void)firmwareUpdateDebugModeResponse:(BOOL)arg1;
@end
