//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageSolidColorGenerator : GPUImageFilter
{
    int colorUniform;
    int useExistingAlphaUniform;
    BOOL _useExistingAlpha;
    struct GPUVector4 _color;
}

@property(nonatomic) BOOL useExistingAlpha; // @synthesize useExistingAlpha=_useExistingAlpha;
@property(nonatomic) struct GPUVector4 color; // @synthesize color=_color;
- (void)setColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)addTarget:(id)arg1 atTextureLocation:(int)arg2;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (id)init;

@end
