//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFFitMessageBase.h"

@class NSDate;

@interface WFFitMessageActivity : WFFitMessageBase
{
    CDStruct_491b7bdc stActivity;
    NSDate *localTimestamp;
}

- (id)stringFromLocalTimestamp;
@property(readonly, nonatomic) CDStruct_491b7bdc *pstActivity;
@property(readonly, nonatomic) NSDate *localTimestamp; // @synthesize localTimestamp;
- (id)initWithRecord:(void *)arg1;
- (unsigned long)getTimestampFromStructure;
- (id)init;
- (void)dealloc;

@end

