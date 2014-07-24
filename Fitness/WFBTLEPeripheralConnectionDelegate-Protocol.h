//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, WFBTLEPeripheralConnection, WFBTLEServiceUUIDInfo, WFSensorConnection;

@protocol WFBTLEPeripheralConnectionDelegate <NSObject>
- (void)connectionDidClose:(WFBTLEPeripheralConnection *)arg1;
- (void)connectionDidDisconnect:(WFSensorConnection *)arg1;
- (void)connectionDidConnect:(WFSensorConnection *)arg1;
- (BOOL)peripheralConnection:(WFBTLEPeripheralConnection *)arg1 retrievePeripheralWithDeviceUUIDs:(NSSet *)arg2;
- (BOOL)peripheralConnection:(WFBTLEPeripheralConnection *)arg1 retrievePeripheralWithServiceUUIDInfo:(WFBTLEServiceUUIDInfo *)arg2;
- (BOOL)peripheralConnection:(WFBTLEPeripheralConnection *)arg1 retrievePeripheralWithSensorType:(int)arg2;
@end
