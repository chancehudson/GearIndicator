//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIColor, UIImageView, UILabel;

@interface WFScrollingTabBarCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_label;
    UIColor *_deselectedTabTintColor;
    UIColor *_selectedTintColor;
}

@property(retain, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property(retain, nonatomic) UIColor *deselectedTabTintColor; // @synthesize deselectedTabTintColor=_deselectedTabTintColor;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;

@end

