//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFJSONCoding.h"

@class NSString;

@interface WFDeviceParams : NSObject <WFJSONCoding>
{
    unsigned short deviceNumber;
    NSString *deviceUUIDString;
    int networkType;
    unsigned char transmissionType;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *deviceUUIDString; // @synthesize deviceUUIDString;
@property(nonatomic) unsigned char transmissionType; // @synthesize transmissionType;
@property(nonatomic) unsigned short deviceNumber; // @synthesize deviceNumber;
@property(nonatomic) int networkType; // @synthesize networkType;
- (BOOL)isValid;
@property(readonly, nonatomic) NSString *deviceIDString;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
