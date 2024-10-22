//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UILabel, WFWorkout;

@interface WFManualDistanceCorrectionVC : UIViewController
{
    double correctedDistance;
    id <WFManualDataCorrectionVCDelegate> _delegate;
    WFWorkout *_workout;
    UILabel *_correctedDistanceLabel;
}

@property(nonatomic) __weak UILabel *correctedDistanceLabel; // @synthesize correctedDistanceLabel=_correctedDistanceLabel;
@property(retain, nonatomic) WFWorkout *workout; // @synthesize workout=_workout;
@property(nonatomic) __weak id <WFManualDataCorrectionVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)stringFromDistance:(double)arg1;
- (void)doneButtonTouched:(id)arg1;
- (void)cancelButtonTouched:(id)arg1;
- (void)plusButtonTouched:(id)arg1;
- (void)minusButtonTouched:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

