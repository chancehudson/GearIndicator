//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, WFAnnouncement;

@interface WFAnnouncementIntervalCell : UITableViewCell
{
    WFAnnouncement *_announcement;
    UILabel *_valueLabel;
}

@property(nonatomic) __weak UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) WFAnnouncement *announcement; // @synthesize announcement=_announcement;
- (void).cxx_destruct;
- (void)updateValueLabel;
- (void)setDefaults;
- (void)awakeFromNib;

@end

