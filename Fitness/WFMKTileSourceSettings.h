//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface WFMKTileSourceSettings : NSObject
{
    BOOL _canReplaceMapContent;
    NSString *_name;
    NSString *_description;
    NSString *_templateURL;
    NSString *_key;
    NSDictionary *_symbolForScales;
    NSArray *_subdomainOptions;
    int _minimumZ;
    int _maximumZ;
    unsigned int _mapType;
    int _overlayLevel;
}

@property(nonatomic) int overlayLevel; // @synthesize overlayLevel=_overlayLevel;
@property(nonatomic) unsigned int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) BOOL canReplaceMapContent; // @synthesize canReplaceMapContent=_canReplaceMapContent;
@property(nonatomic) int maximumZ; // @synthesize maximumZ=_maximumZ;
@property(nonatomic) int minimumZ; // @synthesize minimumZ=_minimumZ;
@property(retain, nonatomic) NSArray *subdomainOptions; // @synthesize subdomainOptions=_subdomainOptions;
@property(copy, nonatomic) NSDictionary *symbolForScales; // @synthesize symbolForScales=_symbolForScales;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *templateURL; // @synthesize templateURL=_templateURL;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;

@end

