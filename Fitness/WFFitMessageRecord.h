//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFFitMessageBase.h"

@interface WFFitMessageRecord : WFFitMessageBase
{
    CDStruct_f589045f stFitRecord;
}

@property(readonly, nonatomic) float cycleLength;
@property(readonly, nonatomic) float grade;
@property(readonly, nonatomic) float speed;
@property(readonly, nonatomic) float altitude;
@property(readonly, nonatomic) float distance;
@property(readonly, nonatomic) double longitude;
@property(readonly, nonatomic) double latitude;
@property(readonly, nonatomic) CDStruct_f589045f *pstFitRecord;
- (id)initWithRecord:(void *)arg1;
- (unsigned long)getTimestampFromStructure;
- (id)init;
- (void)dealloc;

@end
