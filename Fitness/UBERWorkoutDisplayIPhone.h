//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UBERWorkoutDisplayIOS.h"

@interface UBERWorkoutDisplayIPhone : UBERWorkoutDisplayIOS
{
}

+ (unsigned int)defaultWorkoutDisplayType;
+ (id)defaultIPhoneIndoorCyclingDisplay;
+ (id)defaultIPhoneCyclingDisplay;
+ (id)defaultIPhoneTreadmillDisplay;
+ (id)defaultIPhoneRunningDisplay;
+ (id)defaultDisplayForWorkoutType:(int)arg1;
- (int)indexOfPageWithUID:(id)arg1;
- (BOOL)hasPageWithUID:(id)arg1;
- (void)addPagesForSensor:(id)arg1 workoutType:(int)arg2;

@end

