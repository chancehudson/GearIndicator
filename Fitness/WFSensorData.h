//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFConnectorSettings;

@interface WFSensorData : NSObject
{
    double lastDataTime;
}

@property(readonly, nonatomic) WFConnectorSettings *settings;
@property(readonly, nonatomic) BOOL isDataStale;
- (id)initWithTime:(double)arg1;
- (id)init;

@end

