//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WFCasioKeyCommand, WFCasioKeyCommanderService;

@protocol WFCasioKeyCommanderServiceDelegate <NSObject>
- (void)keyCommanderService:(WFCasioKeyCommanderService *)arg1 didReceiveKeyCommand:(WFCasioKeyCommand *)arg2;
- (NSString *)appNameForKeyCommanderService:(WFCasioKeyCommanderService *)arg1;
- (void)keyCommanderServiceDidHandleAppNameReadRequest:(WFCasioKeyCommanderService *)arg1;
@end

