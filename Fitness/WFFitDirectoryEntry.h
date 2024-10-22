//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFFitFileInfo;

@interface WFFitDirectoryEntry : NSObject
{
    WFFitFileInfo *fileInfo;
    BOOL isSelected;
    BOOL hasBeenImported;
}

+ (id)directoryEntriesFromFileArray:(id)arg1 includeImported:(BOOL)arg2;
@property(nonatomic) BOOL hasBeenImported; // @synthesize hasBeenImported;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected;
@property(readonly, nonatomic) WFFitFileInfo *fileInfo; // @synthesize fileInfo;
- (void).cxx_destruct;
- (id)initWithFileInfo:(id)arg1;
- (id)filePath;
- (int)compareTimestamp:(id)arg1;

@end

