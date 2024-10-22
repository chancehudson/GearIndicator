//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPOAuthCredentialConcreteStore, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface DBSession : NSObject
{
    NSDictionary *baseCredentials;
    NSMutableDictionary *credentialStores;
    MPOAuthCredentialConcreteStore *anonymousStore;
    NSString *root;
    id <DBSessionDelegate> delegate;
}

+ (void)setSharedSession:(id)arg1;
+ (id)sharedSession;
+ (id)parseURLParams:(id)arg1;
@property(nonatomic) id <DBSessionDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) NSString *root; // @synthesize root;
- (void)saveCredentials;
@property(readonly, nonatomic) NSArray *userIds;
- (id)credentialStoreForUserId:(id)arg1;
- (void)unlinkUserId:(id)arg1;
- (void)unlinkAll;
- (BOOL)isLinked;
- (void)setAccessToken:(id)arg1 accessTokenSecret:(id)arg2 forUserId:(id)arg3;
- (void)updateAccessToken:(id)arg1 accessTokenSecret:(id)arg2 forUserId:(id)arg3;
- (void)dealloc;
- (id)initWithAppKey:(id)arg1 appSecret:(id)arg2 root:(id)arg3;
- (BOOL)handleOpenURL:(id)arg1;
- (void)linkFromController:(id)arg1;
- (void)linkUserId:(id)arg1 fromController:(id)arg2;
- (BOOL)appConformsToScheme;
- (id)appScheme;

@end

