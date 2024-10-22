//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullWorkoutPageVC.h"

#import "WFActionSheetDelegate.h"
#import "WFKickrBikeTypeActionSheetDelegate.h"

@class NSDictionary, NSTimer, UIButton, UIImageView, UILabel, UITextView, UIView, WFKickrBikeTypeSelectActionSheet;

@interface KICKRWorkoutPageVC : FullWorkoutPageVC <WFActionSheetDelegate, WFKickrBikeTypeActionSheetDelegate>
{
    int simModeTarget;
    BOOL isMetric;
    WFKickrBikeTypeSelectActionSheet *bikeSelectSheet;
    NSDictionary *bikeType;
    UIButton *_resitanceButton;
    UIButton *_ergoButton;
    UIButton *_slopButton;
    UILabel *_kickrTarget;
    UIButton *_levelButton;
    UIImageView *_kickrArrowImageView;
    UIView *_kickrTargetStateView;
    UIView *_kickrCell;
    UIView *_basicKickrControlView;
    UIView *_kickrResistanceView;
    UIView *_kickrErgView;
    UIView *_kickrSimView;
    UILabel *_windSpeedTitleLabel;
    UILabel *_kickrTargetPowerHeaderLabel;
    UILabel *_kickrResistanceHeaderLabel;
    UILabel *_basicKickrControlHeaderLabel;
    UILabel *_kickrSimHeaderLabel;
    UILabel *_slopeHeaderLabel;
    UILabel *_bikeTypeHeaderLabel;
    UILabel *_kickrTargetlevel;
    UILabel *_kickrTargetResistance;
    UILabel *_kickrTargetSlope;
    UILabel *_kickrTargetWindSpeed;
    UILabel *_targetPowerThousands;
    UILabel *_targetPowerHundreds;
    UILabel *_targetPowerTens;
    UILabel *_targetPowerUnits;
    UILabel *_wattsLabel;
    UILabel *_bikeTypeLabel;
    UITextView *_kickrPowerLevelDescriptionTextView;
    UIButton *_thousandsUpBtn;
    UIButton *_hundredsUpBtn;
    UIButton *_tensUpBtn;
    UIButton *_unitsUpBtn;
    UIButton *_thousandsDownBtn;
    UIButton *_hundredsDownBtn;
    UIButton *_tensDownBtn;
    UIButton *_unitsDownBtn;
    UIButton *_windSpeedUpBtn;
    UIButton *_windSpeedDownBtn;
    int _targetMode;
    NSTimer *_setTargetButtonRepeatTimer;
    int _targetButtonRepeatCount;
    float _targetMultipler;
}

@property(nonatomic) float targetMultipler; // @synthesize targetMultipler=_targetMultipler;
@property(nonatomic) int targetButtonRepeatCount; // @synthesize targetButtonRepeatCount=_targetButtonRepeatCount;
@property(retain, nonatomic) NSTimer *setTargetButtonRepeatTimer; // @synthesize setTargetButtonRepeatTimer=_setTargetButtonRepeatTimer;
@property(nonatomic) int targetMode; // @synthesize targetMode=_targetMode;
@property(retain, nonatomic) UIButton *windSpeedDownBtn; // @synthesize windSpeedDownBtn=_windSpeedDownBtn;
@property(retain, nonatomic) UIButton *windSpeedUpBtn; // @synthesize windSpeedUpBtn=_windSpeedUpBtn;
@property(retain, nonatomic) UIButton *unitsDownBtn; // @synthesize unitsDownBtn=_unitsDownBtn;
@property(retain, nonatomic) UIButton *tensDownBtn; // @synthesize tensDownBtn=_tensDownBtn;
@property(retain, nonatomic) UIButton *hundredsDownBtn; // @synthesize hundredsDownBtn=_hundredsDownBtn;
@property(retain, nonatomic) UIButton *thousandsDownBtn; // @synthesize thousandsDownBtn=_thousandsDownBtn;
@property(retain, nonatomic) UIButton *unitsUpBtn; // @synthesize unitsUpBtn=_unitsUpBtn;
@property(retain, nonatomic) UIButton *tensUpBtn; // @synthesize tensUpBtn=_tensUpBtn;
@property(retain, nonatomic) UIButton *hundredsUpBtn; // @synthesize hundredsUpBtn=_hundredsUpBtn;
@property(retain, nonatomic) UIButton *thousandsUpBtn; // @synthesize thousandsUpBtn=_thousandsUpBtn;
@property(retain, nonatomic) UITextView *kickrPowerLevelDescriptionTextView; // @synthesize kickrPowerLevelDescriptionTextView=_kickrPowerLevelDescriptionTextView;
@property(retain, nonatomic) UILabel *bikeTypeLabel; // @synthesize bikeTypeLabel=_bikeTypeLabel;
@property(retain, nonatomic) UILabel *wattsLabel; // @synthesize wattsLabel=_wattsLabel;
@property(retain, nonatomic) UILabel *targetPowerUnits; // @synthesize targetPowerUnits=_targetPowerUnits;
@property(retain, nonatomic) UILabel *targetPowerTens; // @synthesize targetPowerTens=_targetPowerTens;
@property(retain, nonatomic) UILabel *targetPowerHundreds; // @synthesize targetPowerHundreds=_targetPowerHundreds;
@property(retain, nonatomic) UILabel *targetPowerThousands; // @synthesize targetPowerThousands=_targetPowerThousands;
@property(retain, nonatomic) UILabel *kickrTargetWindSpeed; // @synthesize kickrTargetWindSpeed=_kickrTargetWindSpeed;
@property(retain, nonatomic) UILabel *kickrTargetSlope; // @synthesize kickrTargetSlope=_kickrTargetSlope;
@property(retain, nonatomic) UILabel *kickrTargetResistance; // @synthesize kickrTargetResistance=_kickrTargetResistance;
@property(retain, nonatomic) UILabel *kickrTargetlevel; // @synthesize kickrTargetlevel=_kickrTargetlevel;
@property(retain, nonatomic) UILabel *bikeTypeHeaderLabel; // @synthesize bikeTypeHeaderLabel=_bikeTypeHeaderLabel;
@property(retain, nonatomic) UILabel *slopeHeaderLabel; // @synthesize slopeHeaderLabel=_slopeHeaderLabel;
@property(retain, nonatomic) UILabel *kickrSimHeaderLabel; // @synthesize kickrSimHeaderLabel=_kickrSimHeaderLabel;
@property(retain, nonatomic) UILabel *basicKickrControlHeaderLabel; // @synthesize basicKickrControlHeaderLabel=_basicKickrControlHeaderLabel;
@property(retain, nonatomic) UILabel *kickrResistanceHeaderLabel; // @synthesize kickrResistanceHeaderLabel=_kickrResistanceHeaderLabel;
@property(retain, nonatomic) UILabel *kickrTargetPowerHeaderLabel; // @synthesize kickrTargetPowerHeaderLabel=_kickrTargetPowerHeaderLabel;
@property(retain, nonatomic) UILabel *windSpeedTitleLabel; // @synthesize windSpeedTitleLabel=_windSpeedTitleLabel;
@property(retain, nonatomic) UIView *kickrSimView; // @synthesize kickrSimView=_kickrSimView;
@property(retain, nonatomic) UIView *kickrErgView; // @synthesize kickrErgView=_kickrErgView;
@property(retain, nonatomic) UIView *kickrResistanceView; // @synthesize kickrResistanceView=_kickrResistanceView;
@property(retain, nonatomic) UIView *basicKickrControlView; // @synthesize basicKickrControlView=_basicKickrControlView;
@property(retain, nonatomic) UIView *kickrCell; // @synthesize kickrCell=_kickrCell;
@property(retain, nonatomic) UIView *kickrTargetStateView; // @synthesize kickrTargetStateView=_kickrTargetStateView;
@property(retain, nonatomic) UIImageView *kickrArrowImageView; // @synthesize kickrArrowImageView=_kickrArrowImageView;
@property(retain, nonatomic) UIButton *levelButton; // @synthesize levelButton=_levelButton;
@property(retain, nonatomic) UILabel *kickrTarget; // @synthesize kickrTarget=_kickrTarget;
@property(retain, nonatomic) UIButton *slopButton; // @synthesize slopButton=_slopButton;
@property(retain, nonatomic) UIButton *ergoButton; // @synthesize ergoButton=_ergoButton;
@property(retain, nonatomic) UIButton *resitanceButton; // @synthesize resitanceButton=_resitanceButton;
- (void).cxx_destruct;
- (void)applyBikeType:(id)arg1;
- (void)actionSheet:(id)arg1 didSelectBikeType:(id)arg2;
- (void)actionSheet:(id)arg1 didPressButtonAtIndex:(int)arg2;
- (void)checkButtonState:(id)arg1;
- (void)stopButtonRepeatTimer;
- (void)startButtonRepeatTimer;
- (void)downButtonTouchDown:(id)arg1;
- (void)upButtonTouchDown:(id)arg1;
- (void)targetButtonTouchOutside:(id)arg1;
- (void)targetButtonTouchInside:(id)arg1;
- (void)slopeButtonTouched:(id)arg1;
- (void)ergoButtonTouched:(id)arg1;
- (void)resistanceButtonTouched:(id)arg1;
- (void)levelButtonTouched:(id)arg1;
- (void)bikeTypeButtonTouched:(id)arg1;
- (void)changeTrainerTargetWithMultiplier:(float)arg1;
- (float)trainerDeltaForMode:(int)arg1;
- (void)setKickrMode:(int)arg1;
- (void)selectKickrModeButton:(id)arg1;
- (void)clearAllButtonHighlight;
- (void)setButton:(id)arg1 highlighted:(BOOL)arg2;
- (void)updateErgLabels;
- (void)updateKickrSetPointGUI;
- (id)trainer;
- (void)updateWorkoutPageGUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;

@end

