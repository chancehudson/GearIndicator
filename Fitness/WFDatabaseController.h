//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIAlertView;

@interface WFDatabaseController : NSObject
{
    UIAlertView *_mirgationAlert;
}

+ (void)saveContextData:(id)arg1;
+ (BOOL)isMigrationRequired;
+ (void)setupCoreDataStackWithOptions:(id)arg1;
+ (void)setupCoreDataStack;
+ (BOOL)isMigratingPeristentStore;
+ (id)persistantStoreURL;
+ (id)managedObjectModel;
+ (id)listeners;
+ (void)load;
@property(retain, nonatomic) UIAlertView *mirgationAlert; // @synthesize mirgationAlert=_mirgationAlert;
- (void).cxx_destruct;

@end

