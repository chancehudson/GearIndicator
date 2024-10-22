//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFWorkoutPageNibVC.h"

#import "AVAudioPlayerDelegate.h"
#import "MPMediaPickerControllerDelegate.h"
#import "MusicTableViewControllerDelegate.h"

@class AVAudioPlayer, MPMediaItemCollection, MPMusicPlayerController, NSTimer, NSURL, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface MusicPlayerVC : WFWorkoutPageNibVC <MPMediaPickerControllerDelegate, MusicTableViewControllerDelegate, AVAudioPlayerDelegate>
{
    UIButton *playPauseButton;
    UILabel *artistLabel;
    UILabel *songLabel;
    UILabel *albumLabel;
    BOOL playedMusicOnce;
    AVAudioPlayer *appSoundPlayer;
    NSURL *soundFileURL;
    UIButton *appSoundButton;
    UIButton *addOrShowMusicButton;
    BOOL interruptedOnPlayback;
    BOOL playing;
    MPMusicPlayerController *musicPlayer;
    MPMediaItemCollection *userMediaItemCollection;
    UIImage *noArtworkImage;
    UIImageView *artWorkView;
    UIView *mpVolumeViewParentView;
    NSTimer *backgroundColorTimer;
}

@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton;
@property BOOL playing; // @synthesize playing;
@property BOOL playedMusicOnce; // @synthesize playedMusicOnce;
@property BOOL interruptedOnPlayback; // @synthesize interruptedOnPlayback;
@property(retain, nonatomic) NSURL *soundFileURL; // @synthesize soundFileURL;
@property(retain, nonatomic) AVAudioPlayer *appSoundPlayer; // @synthesize appSoundPlayer;
@property(retain, nonatomic) UIButton *addOrShowMusicButton; // @synthesize addOrShowMusicButton;
@property(retain, nonatomic) UIButton *appSoundButton; // @synthesize appSoundButton;
@property(retain, nonatomic) UILabel *albumLabel; // @synthesize albumLabel;
@property(retain, nonatomic) UILabel *songLabel; // @synthesize songLabel;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel;
@property(retain, nonatomic) NSTimer *backgroundColorTimer; // @synthesize backgroundColorTimer;
@property(retain, nonatomic) UIImage *noArtworkImage; // @synthesize noArtworkImage;
@property(retain, nonatomic) MPMusicPlayerController *musicPlayer; // @synthesize musicPlayer;
@property(retain, nonatomic) UIView *mpVolumeViewParentView; // @synthesize mpVolumeViewParentView;
@property(retain, nonatomic) MPMediaItemCollection *userMediaItemCollection; // @synthesize userMediaItemCollection;
@property(retain, nonatomic) UIImageView *artWorkView; // @synthesize artWorkView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)updateWorkoutPageWithSampleData;
- (void)updateData;
- (void)cleanupBeforeDelete;
- (void)viewDidLoad;
- (BOOL)useiPodPlayer;
- (void)registerForMediaPlayerNotifications;
- (void)setupApplicationAudio;
- (void)musicTableViewControllerDidFinish:(id)arg1;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(id)arg2;
- (void)rewind:(id)arg1;
- (void)fastForward:(id)arg1;
- (void)playAppSound:(id)arg1;
- (void)handle_iPodLibraryChanged:(id)arg1;
- (void)handle_PlaybackStateChanged:(id)arg1;
- (void)handle_NowPlayingItemChanged:(id)arg1;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)restorePlaybackState;
- (void)updatePlayerQueueWithMediaCollection:(id)arg1;
- (void)AddMusicOrShowMusic:(id)arg1;
- (void)playOrPauseMusic:(id)arg1;

@end

