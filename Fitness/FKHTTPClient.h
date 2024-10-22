//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPSessionManager.h"

@class FKCredential, NSMutableDictionary, NSString;

@interface FKHTTPClient : AFHTTPSessionManager
{
    NSString *_clientIdentifier;
    FKCredential *_credential;
    CDUnknownBlockType _handleOpenURLBlock;
    NSMutableDictionary *_progressBlocks;
}

+ (void)setApplicationOpenURLBlock:(CDUnknownBlockType)arg1;
+ (BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
+ (id)openURLClients;
+ (id)sharedClientOnceWithBlock:(CDUnknownBlockType)arg1;
+ (id)sharedClient;
@property(retain, nonatomic) NSMutableDictionary *progressBlocks; // @synthesize progressBlocks=_progressBlocks;
@property(copy, nonatomic) CDUnknownBlockType handleOpenURLBlock; // @synthesize handleOpenURLBlock=_handleOpenURLBlock;
@property(retain, nonatomic) FKCredential *credential; // @synthesize credential=_credential;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (id)dataTaskWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)dataTaskWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dataTaskWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 contentType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)addProgressBlock:(CDUnknownBlockType)arg1 forTask:(id)arg2;
- (void)authenicateSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)absoluteURLStringWithPath:(id)arg1;
- (id)URLWithPath:(id)arg1 parameters:(id)arg2;
- (void)setAuthorizationHeaderWithToken:(id)arg1 ofType:(id)arg2;
- (void)setAuthorizationHeaderWithCredential:(id)arg1;
- (void)setAuthorizationHeaderWithToken:(id)arg1;
- (BOOL)applicationOpenURL:(id)arg1 redirectURL:(id)arg2;

@end

