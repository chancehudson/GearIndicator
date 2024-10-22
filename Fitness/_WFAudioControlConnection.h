//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorConnection.h"

#import "WFAudioControlDelegate.h"

@interface _WFAudioControlConnection : WFSensorConnection <WFAudioControlDelegate>
{
    id <WFAudioControlDelegate> acDelegate;
}

@property(retain, nonatomic) id <WFAudioControlDelegate> acDelegate; // @synthesize acDelegate;
- (void)setConnectionStatus:(int)arg1;
- (void)acVolumeUp;
- (void)acVolumeDown;
- (void)acStop;
- (void)acSkipToPrevious;
- (void)acSkipToNext;
- (void)acShuffleOff;
- (void)acShuffleSongs;
- (void)acShuffleAlbums;
- (void)acRepeatOff;
- (void)acRepeatCurrentTrack;
- (void)acRepeatAll;
- (void)acPlay;
- (void)acPause;
- (void)acMute;
- (void)acFastRewind;
- (void)acFastForward;
- (void)acCustomCommand:(unsigned char)arg1;
- (void)dealloc;

@end

