//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFControlPointDecoder.h"

@class NSMutableArray;

@interface WFWahooWeightScaleControlPointCh : WFControlPointDecoder
{
    unsigned long ulTimeOffset;
    BOOL bTimeSet;
    BOOL hasReceivedHistoryResponse;
    NSMutableArray *historyBuffer;
    BOOL hasReceivedUserIdResponse;
    BOOL testCompleted;
    BOOL testSuccessful;
    int nextUserId;
    BOOL hasReceivedUsersResponse;
    NSMutableArray *usersBuffer;
}

@property(readonly, nonatomic) BOOL hasReceivedUserIdResponse; // @synthesize hasReceivedUserIdResponse;
@property(readonly, nonatomic) NSMutableArray *usersBuffer; // @synthesize usersBuffer;
@property(readonly, nonatomic) BOOL hasReceivedUsersResponse; // @synthesize hasReceivedUsersResponse;
@property(readonly, nonatomic) NSMutableArray *historyBuffer; // @synthesize historyBuffer;
@property(readonly, nonatomic) BOOL hasReceivedHistoryResponse; // @synthesize hasReceivedHistoryResponse;
- (BOOL)assignUserId:(int)arg1 toHistoryRecordWithTimestamp:(double)arg2;
- (BOOL)requestAllUserRecords;
- (BOOL)requestUserId;
- (BOOL)clearUserRecordWithId:(int)arg1;
- (BOOL)clearAllUserRecords;
- (BOOL)clearHistoryRecordWithTimestamp:(double)arg1;
- (BOOL)clearAllHistory;
- (BOOL)testConnection:(float)arg1;
- (BOOL)setDisplayUnitsToMetric:(BOOL)arg1;
- (BOOL)storeUserRecord:(id)arg1;
- (BOOL)setDeviceTime;
- (void)resetHistory;
- (BOOL)requestHistorySinceTimestamp:(double)arg1;
- (BOOL)requestAllHistory;
- (void)processWFCPCommandResponse;
@property(readonly, nonatomic) int nextUserId;
@property(readonly, nonatomic) BOOL testSuccessful;
@property(readonly, nonatomic) BOOL testCompleted;
@property(readonly, nonatomic) BOOL isUsersAvailable;
@property(readonly, nonatomic) BOOL isHistoryAvailable;
- (void)reset;
- (BOOL)decodeCharacteristicData;
- (id)init;
- (void)dealloc;

@end

