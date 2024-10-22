//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray, NSString;

@interface WFDisplayConfiguration : NSObject <NSCopying>
{
    NSMutableArray *_buttons;
    NSMutableArray *_mutablePages;
    NSMutableArray *_errors;
    NSString *_configurationID;
    NSArray *_pages;
    NSString *_comment;
    int _type;
    NSString *_passwordHash;
    BOOL _assignedBinaryKeys;
    BOOL _hasHardwareNextPageButton;
    BOOL _hasHardwarePreviousPageButton;
    NSMutableArray *_sounds;
    NSMutableArray *_strings;
}

+ (id)updateDataForString:(id)arg1 maxLength:(int)arg2;
+ (BOOL)scanString:(id)arg1 forDecimal:(char *)arg2:(char *)arg3;
+ (BOOL)scanString:(id)arg1 forUint8:(char *)arg2;
+ (int)compatibleBinaryVersionFromArray:(id)arg1;
+ (id)instanceWithContentsOfFile:(id)arg1;
+ (id)instanceFromDictionary:(id)arg1;
+ (unsigned char)binaryKeyForSystemElementKey:(id)arg1;
+ (id)binaryKeyLookup;
@property(nonatomic) BOOL hasHardwarePreviousPageButton; // @synthesize hasHardwarePreviousPageButton=_hasHardwarePreviousPageButton;
@property(nonatomic) BOOL hasHardwareNextPageButton; // @synthesize hasHardwareNextPageButton=_hasHardwareNextPageButton;
@property(nonatomic) BOOL assignedBinaryKeys; // @synthesize assignedBinaryKeys=_assignedBinaryKeys;
@property(retain, nonatomic) NSMutableArray *strings; // @synthesize strings=_strings;
@property(retain, nonatomic) NSMutableArray *sounds; // @synthesize sounds=_sounds;
@property(copy, nonatomic) NSString *passwordHash; // @synthesize passwordHash=_passwordHash;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSMutableArray *mutablePages; // @synthesize mutablePages=_mutablePages;
@property(copy, nonatomic) NSString *configurationID; // @synthesize configurationID=_configurationID;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
- (void)printWithVariableName:(id)arg1;
- (id)errorForInvalidObjectKind:(id)arg1 forKey:(id)arg2;
- (id)errorForSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (int)buttonFunctionForButtonGesture:(int)arg1;
- (void)setFunction:(id)arg1 forButtonGestureNamed:(id)arg2;
- (id)functionForButtonGestureNamed:(id)arg1;
- (id)dictionaryValueAndKeysSwappedFromDictionary:(id)arg1;
- (id)elementsForKey:(id)arg1;
- (id)globalStringForKey:(id)arg1;
- (id)pageForBinaryKey:(unsigned char)arg1;
- (id)pageForKey:(id)arg1;
- (void)removeAllPages;
- (void)removePageAtIndex:(unsigned int)arg1;
- (void)removePage:(id)arg1;
- (void)insertPage:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addPage:(id)arg1;
@property(readonly, nonatomic) NSArray *pages;
- (id)binaryRepresentationForVersion:(int)arg1;
- (id)binaryRepresentationForVersion3:(int)arg1;
- (id)binaryRepresentationForVersion1or2:(int)arg1;
- (id)binaryRepresenstationForSection:(int)arg1 version:(int)arg2;
- (void)assignBinaryKeysForVersion:(int)arg1;
- (void)updateNextAndPreviousPageBinaryKeys;
- (void)assignBinaryKeysForVersion3orHigher:(int)arg1;
- (id)assignBinaryKeysForSection:(int)arg1;
- (void)assignBinaryKeysForVersion1or2;
- (int)writeToFile:(id)arg1 error:(id *)arg2;
- (id)dictionaryRepresentation;
- (id)arrayOfDictionaryRepresentionsForArray:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(nonatomic) int type;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

