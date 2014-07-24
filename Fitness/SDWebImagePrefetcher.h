//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SDWebImageManager;

@interface SDWebImagePrefetcher : NSObject
{
    unsigned int _options;
    id <SDWebImagePrefetcherDelegate> _delegate;
    SDWebImageManager *_manager;
    NSArray *_prefetchURLs;
    unsigned int _requestedCount;
    unsigned int _skippedCount;
    unsigned int _finishedCount;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
    double _startedTime;
}

+ (id)sharedImagePrefetcher;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) double startedTime; // @synthesize startedTime=_startedTime;
@property(nonatomic) unsigned int finishedCount; // @synthesize finishedCount=_finishedCount;
@property(nonatomic) unsigned int skippedCount; // @synthesize skippedCount=_skippedCount;
@property(nonatomic) unsigned int requestedCount; // @synthesize requestedCount=_requestedCount;
@property(retain, nonatomic) NSArray *prefetchURLs; // @synthesize prefetchURLs=_prefetchURLs;
@property(retain, nonatomic) SDWebImageManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <SDWebImagePrefetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)cancelPrefetching;
- (void)prefetchURLs:(id)arg1 progress:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
- (void)prefetchURLs:(id)arg1;
- (void)reportStatus;
- (void)startPrefetchingAtIndex:(unsigned int)arg1;
@property(nonatomic) unsigned int maxConcurrentDownloads;
- (id)init;

@end
