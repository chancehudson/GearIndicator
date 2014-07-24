//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FKHTTPClient.h"

#import "FKAutehnicateWithExternalMethodProtocol.h"

@class AFJSONRequestSerializer, FKOAuth2Client, NSDictionary, NSString;

@interface FKHealthGraphClient : FKHTTPClient <FKAutehnicateWithExternalMethodProtocol>
{
    AFJSONRequestSerializer *_jsonRequestSerializer;
    NSDictionary *_userResources;
    NSDictionary *_userProfile;
    FKOAuth2Client *_authClient;
}

+ (id)URLWithActivityID:(id)arg1;
+ (id)setupSharedClientOnceWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 redirectURL:(id)arg3;
+ (id)sharedClientOnceWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) FKOAuth2Client *authClient; // @synthesize authClient=_authClient;
@property(retain, nonatomic) NSDictionary *userProfile; // @synthesize userProfile=_userProfile;
@property(retain, nonatomic) NSDictionary *userResources; // @synthesize userResources=_userResources;
@property(retain, nonatomic) AFJSONRequestSerializer *jsonRequestSerializer; // @synthesize jsonRequestSerializer=_jsonRequestSerializer;
- (void).cxx_destruct;
- (void)fitnessActivtySummaryForLocation:(id)arg1 progress:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)uploadWorkout:(id)arg1 progress:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)userProfileWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)userResoucesWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)authenicateSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *userProfileName;
- (id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 redirectURL:(id)arg3;

@end
