//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFCasioKCSController, WFCasioKeyCommand;

@protocol WFCasioKCSControllerDelegate <NSObject>
- (void)keyCommanderServiceController:(WFCasioKCSController *)arg1 didReceiveKeyCommand:(WFCasioKeyCommand *)arg2;
- (void)keyCommanderServiceControllerDidHandleAppNameReadRequest:(WFCasioKCSController *)arg1;
@end

