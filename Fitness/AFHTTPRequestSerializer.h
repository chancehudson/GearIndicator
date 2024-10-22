//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFURLRequestSerialization.h"

@class NSDictionary, NSMutableDictionary, NSSet;

@interface AFHTTPRequestSerializer : NSObject <AFURLRequestSerialization>
{
    BOOL _allowsCellularAccess;
    BOOL _HTTPShouldHandleCookies;
    BOOL _HTTPShouldUsePipelining;
    unsigned int _stringEncoding;
    unsigned int _cachePolicy;
    unsigned int _networkServiceType;
    NSSet *_HTTPMethodsEncodingParametersInURI;
    NSMutableDictionary *_mutableHTTPRequestHeaders;
    unsigned int _queryStringSerializationStyle;
    CDUnknownBlockType _queryStringSerialization;
    double _timeoutInterval;
}

+ (id)serializer;
@property(copy, nonatomic) CDUnknownBlockType queryStringSerialization; // @synthesize queryStringSerialization=_queryStringSerialization;
@property(nonatomic) unsigned int queryStringSerializationStyle; // @synthesize queryStringSerializationStyle=_queryStringSerializationStyle;
@property(retain, nonatomic) NSMutableDictionary *mutableHTTPRequestHeaders; // @synthesize mutableHTTPRequestHeaders=_mutableHTTPRequestHeaders;
@property(retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI; // @synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) unsigned int networkServiceType; // @synthesize networkServiceType=_networkServiceType;
@property(nonatomic) BOOL HTTPShouldUsePipelining; // @synthesize HTTPShouldUsePipelining=_HTTPShouldUsePipelining;
@property(nonatomic) BOOL HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(nonatomic) unsigned int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) unsigned int stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4;
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3;
- (void)setQueryStringSerializationWithBlock:(CDUnknownBlockType)arg1;
- (void)setQueryStringSerializationWithStyle:(unsigned int)arg1;
- (void)clearAuthorizationHeader;
- (void)setAuthorizationHeaderFieldWithToken:(id)arg1;
- (void)setAuthorizationHeaderFieldWithUsername:(id)arg1 password:(id)arg2;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(readonly, nonatomic) NSDictionary *HTTPRequestHeaders;
- (id)init;

@end

