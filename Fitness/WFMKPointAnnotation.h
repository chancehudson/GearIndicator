//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKPointAnnotation.h"

@interface WFMKPointAnnotation : MKPointAnnotation
{
    int _tag;
}

+ (id)reuseIdentifierWithPointAnnotationTag:(int)arg1;
@property(nonatomic) int tag; // @synthesize tag=_tag;
- (id)reuseIdentifier;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 tag:(int)arg2 title:(id)arg3 subtitle:(id)arg4;

@end

