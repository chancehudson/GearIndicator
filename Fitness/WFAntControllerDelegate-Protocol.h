//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class WFAntController, WFFisicaInfo, WFSensorConnection;

@protocol WFAntControllerDelegate
- (void)antControllerDidCancelDiscovery:(WFAntController *)arg1;
- (void)antControllerDidSetNetworkKeys:(WFAntController *)arg1;
- (void)antController:(WFAntController *)arg1 receivedFisicaInfo:(WFFisicaInfo *)arg2;
- (void)antController:(WFAntController *)arg1 disconnectedDevice:(WFSensorConnection *)arg2;
- (void)antController:(WFAntController *)arg1 connectedDevice:(WFSensorConnection *)arg2;
@end

