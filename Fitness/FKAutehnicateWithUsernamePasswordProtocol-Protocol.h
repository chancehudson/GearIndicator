//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLSessionDataTask;

@protocol FKAutehnicateWithUsernamePasswordProtocol <NSObject>
- (NSURLSessionDataTask *)authenticateWithUsername:(NSString *)arg1 password:(NSString *)arg2 success:(void (^)(FKCredential *))arg3 failure:(void (^)(NSError *))arg4;
@end

