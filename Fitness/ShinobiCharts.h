//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SChartTheme;

@interface ShinobiCharts : NSObject
{
    NSString *_licenseKey;
    SChartTheme *_theme;
}

+ (id)theme;
+ (void)setTheme:(id)arg1;
+ (id)licenseKey;
+ (void)setLicenseKey:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) SChartTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *licenseKey; // @synthesize licenseKey=_licenseKey;
- (void)dealloc;
- (id)init;

@end

