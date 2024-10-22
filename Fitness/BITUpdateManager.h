//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITHockeyBaseManager.h"

#import "UIAlertViewDelegate.h"

@class BITUpdateViewController, NSArray, NSDate, NSDictionary, NSFileManager, NSMutableData, NSNumber, NSString, NSURLConnection, UIView;

@interface BITUpdateManager : BITHockeyBaseManager <UIAlertViewDelegate>
{
    NSString *_currentAppVersion;
    BITUpdateViewController *_currentHockeyViewController;
    BOOL _dataFound;
    BOOL _showFeedback;
    BOOL _updateAlertShowing;
    BOOL _lastCheckFailed;
    BOOL _sendUsageData;
    NSFileManager *_fileManager;
    NSString *_updateDir;
    NSString *_usageDataFile;
    id _appDidBecomeActiveObserver;
    id _appDidEnterBackgroundObserver;
    id _networkDidBecomeReachableObserver;
    BOOL _didEnterBackgroundState;
    BOOL _firstStartAfterInstall;
    NSNumber *_versionID;
    NSString *_versionUUID;
    NSString *_uuid;
    NSString *_blockingScreenMessage;
    NSDate *_lastUpdateCheckFromBlockingScreen;
    BOOL _checkForUpdateOnLaunch;
    BOOL _alwaysShowUpdateReminder;
    BOOL _showDirectInstallOption;
    BOOL _disableUpdateCheckOptionWhenExpired;
    BOOL _updateAvailable;
    BOOL _checkInProgress;
    BOOL _installationIdentified;
    BOOL _checkForTracker;
    BOOL _disableUpdateManager;
    id _delegate;
    unsigned int _updateSetting;
    NSDate *_expiryDate;
    NSMutableData *_receivedData;
    NSDate *_lastCheck;
    NSArray *_appVersions;
    NSNumber *_currentAppVersionUsageTime;
    NSURLConnection *_urlConnection;
    NSDate *_usageStartTimestamp;
    UIView *_blockingView;
    NSString *_companyName;
    NSString *_installationIdentification;
    NSString *_installationIdentificationType;
    NSDictionary *_trackerConfig;
}

@property(retain, nonatomic) BITUpdateViewController *currentHockeyViewController; // @synthesize currentHockeyViewController=_currentHockeyViewController;
@property(nonatomic, getter=isUpdateManagerDisabled) BOOL disableUpdateManager; // @synthesize disableUpdateManager=_disableUpdateManager;
@property(retain, nonatomic) NSDictionary *trackerConfig; // @synthesize trackerConfig=_trackerConfig;
@property(nonatomic) BOOL checkForTracker; // @synthesize checkForTracker=_checkForTracker;
@property(nonatomic) BOOL installationIdentified; // @synthesize installationIdentified=_installationIdentified;
@property(retain, nonatomic) NSString *installationIdentificationType; // @synthesize installationIdentificationType=_installationIdentificationType;
@property(retain, nonatomic) NSString *installationIdentification; // @synthesize installationIdentification=_installationIdentification;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) UIView *blockingView; // @synthesize blockingView=_blockingView;
@property(copy, nonatomic) NSDate *usageStartTimestamp; // @synthesize usageStartTimestamp=_usageStartTimestamp;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSNumber *currentAppVersionUsageTime; // @synthesize currentAppVersionUsageTime=_currentAppVersionUsageTime;
@property(copy, nonatomic) NSArray *appVersions; // @synthesize appVersions=_appVersions;
@property(copy, nonatomic) NSDate *lastCheck; // @synthesize lastCheck=_lastCheck;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(nonatomic, getter=isCheckInProgress) BOOL checkInProgress; // @synthesize checkInProgress=_checkInProgress;
@property(nonatomic, getter=isUpdateAvailable) BOOL updateAvailable; // @synthesize updateAvailable=_updateAvailable;
@property(nonatomic) BOOL disableUpdateCheckOptionWhenExpired; // @synthesize disableUpdateCheckOptionWhenExpired=_disableUpdateCheckOptionWhenExpired;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(nonatomic, getter=isShowingDirectInstallOption) BOOL showDirectInstallOption; // @synthesize showDirectInstallOption=_showDirectInstallOption;
@property(nonatomic) BOOL alwaysShowUpdateReminder; // @synthesize alwaysShowUpdateReminder=_alwaysShowUpdateReminder;
@property(nonatomic, getter=isCheckForUpdateOnLaunch) BOOL checkForUpdateOnLaunch; // @synthesize checkForUpdateOnLaunch=_checkForUpdateOnLaunch;
@property(nonatomic) unsigned int updateSetting; // @synthesize updateSetting=_updateSetting;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)newestAppVersion;
- (id)currentAppVersion;
- (BOOL)hasNewerMandatoryVersion;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)startManager;
- (BOOL)initiateAppDownload;
- (void)checkForUpdateShowFeedback:(BOOL)arg1;
- (void)checkForUpdate;
- (BOOL)shouldCheckForUpdates;
- (void)alertFallback:(id)arg1;
- (void)checkForUpdateForExpiredVersion;
- (void)showBlockingScreen:(id)arg1 image:(id)arg2;
- (void)showCheckForUpdateAlert;
- (void)showUpdateView;
- (id)hockeyViewController:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)saveAppCache;
- (void)loadAppCache;
- (void)checkUpdateAvailable;
- (id)installationDateString;
- (id)currentUsageString;
- (void)storeUsageTimeForCurrentVersion:(id)arg1;
- (void)stopUsage;
- (void)startUsage;
- (void)loadAppVersionUsageData;
- (void)checkExpiryDateReached;
- (BOOL)expiryDateReached;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)didEnterBackgroundActions;
- (void)didBecomeActiveActions;
- (void)reportError:(id)arg1;

@end

