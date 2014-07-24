//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBAccountInfo, DBMetadata, DBRestClient, NSArray, NSDate, NSError, NSString, NSURL;

@protocol DBRestClientDelegate <NSObject>

@optional
- (void)restClient:(DBRestClient *)arg1 loadStreamableURLFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedStreamableURL:(NSURL *)arg2 forFile:(NSString *)arg3;
- (void)restClient:(DBRestClient *)arg1 loadSharableLinkFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedSharableLink:(NSString *)arg2 forFile:(NSString *)arg3;
- (void)restClient:(DBRestClient *)arg1 searchFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedSearchResults:(NSArray *)arg2 forPath:(NSString *)arg3 keyword:(NSString *)arg4;
- (void)restClient:(DBRestClient *)arg1 movePathFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 movedPath:(NSString *)arg2 to:(DBMetadata *)arg3;
- (void)restClient:(DBRestClient *)arg1 copyFromRefFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 copiedRef:(NSString *)arg2 to:(DBMetadata *)arg3;
- (void)restClient:(DBRestClient *)arg1 createdCopyRef:(NSString *)arg2;
- (void)restClient:(DBRestClient *)arg1 createCopyRefFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 createdCopyRef:(NSString *)arg2 forPath:(NSString *)arg3;
- (void)restClient:(DBRestClient *)arg1 copyPathFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 copiedPath:(NSString *)arg2 to:(DBMetadata *)arg3;
- (void)restClient:(DBRestClient *)arg1 deletePathFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 deletedPath:(NSString *)arg2;
- (void)restClient:(DBRestClient *)arg1 createFolderFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 createdFolder:(DBMetadata *)arg2;
- (void)restClient:(DBRestClient *)arg1 restoreFileFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 restoredFile:(DBMetadata *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadRevisionsFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedRevisions:(NSArray *)arg2 forFile:(NSString *)arg3;
- (void)restClient:(DBRestClient *)arg1 loadedThumbnail:(NSString *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedFile:(NSString *)arg2 contentType:(NSString *)arg3;
- (void)restClient:(DBRestClient *)arg1 uploadedFile:(NSString *)arg2 from:(NSString *)arg3;
- (void)restClient:(DBRestClient *)arg1 uploadFromUploadIdFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 uploadedFile:(NSString *)arg2 fromUploadId:(NSString *)arg3 metadata:(DBMetadata *)arg4;
- (void)restClient:(DBRestClient *)arg1 uploadFileChunkProgress:(float)arg2 forFile:(NSString *)arg3 offset:(unsigned long long)arg4 fromPath:(NSString *)arg5;
- (void)restClient:(DBRestClient *)arg1 uploadFileChunkFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 uploadedFileChunk:(NSString *)arg2 newOffset:(unsigned long long)arg3 fromFile:(NSString *)arg4 expires:(NSDate *)arg5;
- (void)restClient:(DBRestClient *)arg1 uploadFileFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 uploadProgress:(float)arg2 forFile:(NSString *)arg3 from:(NSString *)arg4;
- (void)restClient:(DBRestClient *)arg1 uploadedFile:(NSString *)arg2 from:(NSString *)arg3 metadata:(DBMetadata *)arg4;
- (void)restClient:(DBRestClient *)arg1 loadThumbnailFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedThumbnail:(NSString *)arg2 metadata:(DBMetadata *)arg3;
- (void)restClient:(DBRestClient *)arg1 loadFileFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadProgress:(float)arg2 forFile:(NSString *)arg3;
- (void)restClient:(DBRestClient *)arg1 loadedFile:(NSString *)arg2 contentType:(NSString *)arg3 metadata:(DBMetadata *)arg4;
- (void)restClient:(DBRestClient *)arg1 loadedFile:(NSString *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadAccountInfoFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedAccountInfo:(DBAccountInfo *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadDeltaFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedDeltaEntries:(NSArray *)arg2 reset:(BOOL)arg3 cursor:(NSString *)arg4 hasMore:(BOOL)arg5;
- (void)restClient:(DBRestClient *)arg1 loadMetadataFailedWithError:(NSError *)arg2;
- (void)restClient:(DBRestClient *)arg1 metadataUnchangedAtPath:(NSString *)arg2;
- (void)restClient:(DBRestClient *)arg1 loadedMetadata:(DBMetadata *)arg2;
@end
