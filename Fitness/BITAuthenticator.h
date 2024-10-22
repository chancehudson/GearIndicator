//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITHockeyBaseManager.h"

#import "BITAuthenticationViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class BITHockeyAppClient, NSString, NSURL, UIViewController;

@interface BITAuthenticator : BITHockeyBaseManager <BITAuthenticationViewControllerDelegate, UIAlertViewDelegate>
{
    id _appDidBecomeActiveObserver;
    id _appDidEnterBackgroundOberser;
    UIViewController *_authenticationController;
    BOOL _isSetup;
    BOOL _restrictApplicationUsage;
    BOOL _identified;
    BOOL _validated;
    unsigned int _identificationType;
    unsigned int _restrictionEnforcementFrequency;
    NSString *_authenticationSecret;
    id <BITAuthenticatorDelegate> _delegate;
    NSURL *_webpageURL;
    NSString *_urlScheme;
    BITHockeyAppClient *_hockeyAppClient;
    CDUnknownBlockType _identificationCompletion;
}

+ (id)stringForIdentificationType:(unsigned int)arg1;
+ (void)email:(id *)arg1 andIUID:(id *)arg2 fromOpenURL:(id)arg3;
+ (id)UDIDFromOpenURL:(id)arg1 annotation:(id)arg2;
+ (id)authenticationTokenFromURLResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
+ (BOOL)isValidationResponseValid:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) CDUnknownBlockType identificationCompletion; // @synthesize identificationCompletion=_identificationCompletion;
@property(retain, nonatomic) BITHockeyAppClient *hockeyAppClient; // @synthesize hockeyAppClient=_hockeyAppClient;
@property(nonatomic, getter=isValidated) BOOL validated; // @synthesize validated=_validated;
@property(nonatomic, getter=isIdentified) BOOL identified; // @synthesize identified=_identified;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(retain, nonatomic) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(nonatomic) __weak id <BITAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *authenticationSecret; // @synthesize authenticationSecret=_authenticationSecret;
@property(nonatomic) unsigned int restrictionEnforcementFrequency; // @synthesize restrictionEnforcementFrequency=_restrictionEnforcementFrequency;
@property(nonatomic) BOOL restrictApplicationUsage; // @synthesize restrictApplicationUsage=_restrictApplicationUsage;
@property(nonatomic) unsigned int identificationType; // @synthesize identificationType=_identificationType;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)publicInstallationIdentifier;
@property(readonly, copy, nonatomic) NSString *installationIdentifierParameterString;
@property(copy, nonatomic) NSString *lastAuthenticatedVersion;
@property(readonly, copy, nonatomic) NSString *installationIdentifier;
- (void)storeInstallationIdentifier:(id)arg1 withType:(unsigned int)arg2;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)processFullSizeImage;
- (void)cleanupInternalStorage;
- (BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)authenticationViewControllerDidTapWebButton:(id)arg1;
- (id)deviceAuthenticationURL;
- (id)authenticationPath;
- (id)requestForAuthenticationEmail:(id)arg1 password:(id)arg2;
- (void)authenticationViewController:(id)arg1 handleAuthenticationWithEmail:(id)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)validationParameters;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;
- (void)validate;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)alertOnFailureStoringTokenInKeychain;
- (BOOL)needsValidation;
- (void)authenticate;
- (void)authenticateInstallation;
- (void)dismissAuthenticationControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startManager;
- (id)initWithAppIdentifier:(id)arg1 isAppStoreEnvironment:(BOOL)arg2;
- (void)dealloc;

@end

