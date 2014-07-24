//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBPeripheral, NSTimer;

@interface WFRSSITimer : NSObject
{
    id <WFRSSITimerDelegate> delegate;
    NSTimer *rssiTimer;
    CBPeripheral *peripheral;
    double timerInterval;
}

@property(nonatomic) double timerInterval; // @synthesize timerInterval;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral;
- (void)stopRSSITimer;
- (void)startRSSITimer:(id)arg1;
- (void)stopTimerInternal;
- (void)onRSSITick:(id)arg1;
- (id)initWithPeripheral:(id)arg1;
- (id)init;
- (void)dealloc;

@end
