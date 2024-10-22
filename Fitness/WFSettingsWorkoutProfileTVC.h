//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFStaticTableViewController.h"

#import "WFWorkoutDisplayButtonActionsTVCDelegate.h"

@class NSArray, UBERWorkoutProfile, UILabel, UISlider, UISwitch, UITableViewCell, UITextField, WFBasicTableViewCell, WFLinkedSensorsCell;

@interface WFSettingsWorkoutProfileTVC : WFStaticTableViewController <WFWorkoutDisplayButtonActionsTVCDelegate>
{
    UBERWorkoutProfile *_profile;
    UILabel *_nameLabel;
    UITextField *_nameField;
    UILabel *_gpsLabel;
    UISwitch *_gpsSwitch;
    WFBasicTableViewCell *_altimeterCell;
    WFBasicTableViewCell *_motionCell;
    UILabel *_sensorsLabel;
    WFLinkedSensorsCell *_sensorsCell;
    UILabel *_dataSourcesLabel;
    UILabel *_workoutPagesTitleLabel;
    UILabel *_workoutPagesValueLabel;
    UITableViewCell *_workoutPagesCell;
    UILabel *_rflktConfigTitleLabel;
    UILabel *_rflktConfigValueLabel;
    UITableViewCell *_rflktConfigCell;
    UILabel *_echoConfigTitleLabel;
    UILabel *_echoConfigValueLabel;
    UITableViewCell *_echoConfigCell;
    UILabel *_casioConfigTitleLabel;
    UILabel *_casioConfigValueLabel;
    UITableViewCell *_casioConfigCell;
    UITableViewCell *_tickrTapCell;
    UILabel *_tickrTapLabel;
    UILabel *_tickrTapValueLabel;
    UILabel *_autoPauseLabel;
    UISwitch *_autoPauseSwitch;
    UILabel *_autoLapLabel;
    UISwitch *_autoLapSwitch;
    UITableViewCell *_autoLapTriggersCell;
    NSArray *_autoLapTriggerLabels;
    UILabel *_audioAlertsLabel;
    UISwitch *_audioAnnouncementsSwitch;
    UITableViewCell *_audioAnnouncementsCell;
    UILabel *_countdownLabel;
    UISwitch *_countdownSwitch;
    UILabel *_countdownValueLabel;
    UISlider *_countdownSlider;
    UITableViewCell *_countdownDurationCell;
    NSArray *_titleLabels;
    NSArray *_valueLabels;
}

@property(retain, nonatomic) NSArray *valueLabels; // @synthesize valueLabels=_valueLabels;
@property(retain, nonatomic) NSArray *titleLabels; // @synthesize titleLabels=_titleLabels;
@property(nonatomic) __weak UITableViewCell *countdownDurationCell; // @synthesize countdownDurationCell=_countdownDurationCell;
@property(nonatomic) __weak UISlider *countdownSlider; // @synthesize countdownSlider=_countdownSlider;
@property(nonatomic) __weak UILabel *countdownValueLabel; // @synthesize countdownValueLabel=_countdownValueLabel;
@property(nonatomic) __weak UISwitch *countdownSwitch; // @synthesize countdownSwitch=_countdownSwitch;
@property(nonatomic) __weak UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(nonatomic) __weak UITableViewCell *audioAnnouncementsCell; // @synthesize audioAnnouncementsCell=_audioAnnouncementsCell;
@property(nonatomic) __weak UISwitch *audioAnnouncementsSwitch; // @synthesize audioAnnouncementsSwitch=_audioAnnouncementsSwitch;
@property(nonatomic) __weak UILabel *audioAlertsLabel; // @synthesize audioAlertsLabel=_audioAlertsLabel;
@property(retain, nonatomic) NSArray *autoLapTriggerLabels; // @synthesize autoLapTriggerLabels=_autoLapTriggerLabels;
@property(nonatomic) __weak UITableViewCell *autoLapTriggersCell; // @synthesize autoLapTriggersCell=_autoLapTriggersCell;
@property(nonatomic) __weak UISwitch *autoLapSwitch; // @synthesize autoLapSwitch=_autoLapSwitch;
@property(nonatomic) __weak UILabel *autoLapLabel; // @synthesize autoLapLabel=_autoLapLabel;
@property(nonatomic) __weak UISwitch *autoPauseSwitch; // @synthesize autoPauseSwitch=_autoPauseSwitch;
@property(nonatomic) __weak UILabel *autoPauseLabel; // @synthesize autoPauseLabel=_autoPauseLabel;
@property(nonatomic) __weak UILabel *tickrTapValueLabel; // @synthesize tickrTapValueLabel=_tickrTapValueLabel;
@property(nonatomic) __weak UILabel *tickrTapLabel; // @synthesize tickrTapLabel=_tickrTapLabel;
@property(nonatomic) __weak UITableViewCell *tickrTapCell; // @synthesize tickrTapCell=_tickrTapCell;
@property(nonatomic) __weak UITableViewCell *casioConfigCell; // @synthesize casioConfigCell=_casioConfigCell;
@property(nonatomic) __weak UILabel *casioConfigValueLabel; // @synthesize casioConfigValueLabel=_casioConfigValueLabel;
@property(nonatomic) __weak UILabel *casioConfigTitleLabel; // @synthesize casioConfigTitleLabel=_casioConfigTitleLabel;
@property(nonatomic) __weak UITableViewCell *echoConfigCell; // @synthesize echoConfigCell=_echoConfigCell;
@property(nonatomic) __weak UILabel *echoConfigValueLabel; // @synthesize echoConfigValueLabel=_echoConfigValueLabel;
@property(nonatomic) __weak UILabel *echoConfigTitleLabel; // @synthesize echoConfigTitleLabel=_echoConfigTitleLabel;
@property(nonatomic) __weak UITableViewCell *rflktConfigCell; // @synthesize rflktConfigCell=_rflktConfigCell;
@property(nonatomic) __weak UILabel *rflktConfigValueLabel; // @synthesize rflktConfigValueLabel=_rflktConfigValueLabel;
@property(nonatomic) __weak UILabel *rflktConfigTitleLabel; // @synthesize rflktConfigTitleLabel=_rflktConfigTitleLabel;
@property(nonatomic) __weak UITableViewCell *workoutPagesCell; // @synthesize workoutPagesCell=_workoutPagesCell;
@property(nonatomic) __weak UILabel *workoutPagesValueLabel; // @synthesize workoutPagesValueLabel=_workoutPagesValueLabel;
@property(nonatomic) __weak UILabel *workoutPagesTitleLabel; // @synthesize workoutPagesTitleLabel=_workoutPagesTitleLabel;
@property(nonatomic) __weak UILabel *dataSourcesLabel; // @synthesize dataSourcesLabel=_dataSourcesLabel;
@property(nonatomic) __weak WFLinkedSensorsCell *sensorsCell; // @synthesize sensorsCell=_sensorsCell;
@property(nonatomic) __weak UILabel *sensorsLabel; // @synthesize sensorsLabel=_sensorsLabel;
@property(nonatomic) __weak WFBasicTableViewCell *motionCell; // @synthesize motionCell=_motionCell;
@property(nonatomic) __weak WFBasicTableViewCell *altimeterCell; // @synthesize altimeterCell=_altimeterCell;
@property(nonatomic) __weak UISwitch *gpsSwitch; // @synthesize gpsSwitch=_gpsSwitch;
@property(nonatomic) __weak UILabel *gpsLabel; // @synthesize gpsLabel=_gpsLabel;
@property(nonatomic) __weak UITextField *nameField; // @synthesize nameField=_nameField;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UBERWorkoutProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)buttonActionsTvc:(id)arg1 didReturnWithButtonAction:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)gpsSwitchChanged:(id)arg1;
- (void)motionSwitchChanged:(id)arg1;
- (void)altimeterSwitchChanged:(id)arg1;
- (void)countdownSliderChanged:(id)arg1;
- (void)countdownSwitchChanged:(id)arg1;
- (void)audioAnnouncementsSwitchChanged:(id)arg1;
- (void)autoPauseSwitchChanged:(id)arg1;
- (void)autoLapSwitchChanged:(id)arg1;
- (void)nameFieldDidEndEditing:(id)arg1;
- (void)updateUIForDisplaySensorsAnimated:(BOOL)arg1;
- (void)updateUIForAutoLapAnimated:(BOOL)arg1;
- (void)updateUIForCountdownAnimated:(BOOL)arg1;
- (void)updateUIForDataSourcesAnimated:(BOOL)arg1;
- (void)configureCellVisibilityAnimated:(BOOL)arg1;
- (void)updateColorPalette;
- (void)populateAutoLapTriggers;
- (void)populateData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)enableRightModalDismissButton;
- (void)doneButtonTouched:(id)arg1;
- (void)viewDidLoad;

@end

