//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSString, UIImageView;

@interface WFHistoryValueLabel : UILabel
{
    NSString *_title;
    NSString *_value;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIImageView *_headerBar;
}

@property(retain, nonatomic) UIImageView *headerBar; // @synthesize headerBar=_headerBar;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

