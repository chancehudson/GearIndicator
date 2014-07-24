//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZKArchive.h"

@interface ZKFileArchive : ZKArchive
{
    BOOL _useZip64Extensions;
}

+ (id)archiveWithArchivePath:(id)arg1;
+ (id)process:(id)arg1 usingResourceFork:(BOOL)arg2 withInvoker:(id)arg3 andDelegate:(id)arg4;
@property BOOL useZip64Extensions; // @synthesize useZip64Extensions=_useZip64Extensions;
- (id)init;
- (int)deflateFile:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (int)deflateDirectory:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (int)deflateFiles:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (int)inflateFile:(id)arg1 toDirectory:(id)arg2;
- (int)inflateToDirectory:(id)arg1 usingResourceFork:(BOOL)arg2;
- (int)inflateToDiskUsingResourceFork:(BOOL)arg1;

@end
