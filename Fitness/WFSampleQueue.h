//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFSampleQueue : NSObject
{
    struct {
        double value;
        double rangeOffset;
    } samples[256];
    unsigned short usHead;
    unsigned short usTail;
}

- (CDStruct_c3b9c2ee)valueEndpoints;
- (int)sampleCount;
- (CDStruct_c3b9c2ee)rangeEndpoints;
- (BOOL)peekTail:(CDStruct_c3b9c2ee *)arg1;
- (BOOL)hasData;
- (BOOL)enqueue:(CDStruct_c3b9c2ee *)arg1;
- (BOOL)dequeue:(CDStruct_c3b9c2ee *)arg1;
- (void)compressSamples;
- (BOOL)getAverageSum:(double *)arg1 andCount:(int *)arg2;
- (int)copyQueueHeadFirstToArray:(CDStruct_c3b9c2ee *)arg1 offset:(int)arg2 maxSize:(int)arg3;
- (int)copyQueueToArray:(CDStruct_c3b9c2ee *)arg1 offset:(int)arg2 maxSize:(int)arg3;
- (id)init;

@end

