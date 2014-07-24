//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFBTLEPeripheralDelegate.h"
#import "WFTimerDelegate.h"

@class NSLock, NSMutableDictionary, NSSet, WFBTLEController, WFTimer;

@interface WFBTLEPeripheralPool : NSObject <WFBTLEPeripheralDelegate, WFTimerDelegate>
{
    id <WFBTLEPeripheralPoolDelegate> theDelegate;
    WFBTLEController *theController;
    NSMutableDictionary *peripheralPool;
    NSLock *peripheralPoolLock;
    WFTimer *heartbeatTimer;
}

- (id)wfPeripheralsForSensorType:(int)arg1;
- (id)wfPeripheralsForServiceUUIDs:(id)arg1;
- (id)wfPeripheralForPeripheral:(id)arg1;
- (id)wfPeripheralForDeviceUUID:(id)arg1;
- (void)cancelPeripheralsByUUID:(id)arg1;
- (id)addPeripheral:(id)arg1;
- (void)prepareForDelete;
- (id)initWithDelegate:(id)arg1 andController:(id)arg2;
@property(readonly, nonatomic) NSSet *allConnections;
@property(readonly, nonatomic) NSSet *allPeripheralsInPool;
- (void)wfPeripheral:(id)arg1 didRemoveConnection:(id)arg2;
- (void)wfPeripheral:(id)arg1 didAddConnection:(id)arg2;
- (void)wfPeripheral:(id)arg1 didUpdateRSSI:(float)arg2;
- (void)wfPeripheralDidFailCharacteristicDiscovery:(id)arg1 withError:(id)arg2;
- (void)wfPeripheralDidFailServiceDiscovery:(id)arg1 withError:(id)arg2;
- (void)wfPeripheralDidFinishDiscovery:(id)arg1;
- (void)wfPeripheralDidFinishCharacteristicDiscovery:(id)arg1;
- (void)wfPeripheralDidFinishServiceDiscovery:(id)arg1;
- (void)wfPeripheralDidDisconnect:(id)arg1;
- (id)centralManager;
- (void)timerDidExpire:(id)arg1;
- (id)init;
- (void)dealloc;

@end
