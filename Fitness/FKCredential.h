//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FKCredentialCoding.h"

@class NSString;

@interface FKCredential : NSObject <FKCredentialCoding>
{
    BOOL _expired;
    NSString *_username;
    NSString *_password;
    NSString *_accessToken;
    NSString *_accessTokenSecret;
    NSString *_tokenType;
    NSString *_refreshToken;
}

+ (id)instanceWithDictionary:(id)arg1;
+ (id)credentialWithAccessToken:(id)arg1 accessTokenSecret:(id)arg2;
+ (id)credentialWithAccessToken:(id)arg1;
+ (id)credentialWithUsername:(id)arg1 password:(id)arg2;
+ (BOOL)removeCrentiealForKey:(id)arg1;
+ (id)credentialForKey:(id)arg1;
@property(readonly, nonatomic, getter=isExpired) BOOL expired; // @synthesize expired=_expired;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(copy, nonatomic) NSString *accessTokenSecret; // @synthesize accessTokenSecret=_accessTokenSecret;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int type;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)saveCredentialForKey:(id)arg1;

@end
