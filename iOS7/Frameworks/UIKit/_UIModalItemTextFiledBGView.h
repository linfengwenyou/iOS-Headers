/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UITextFieldRoundedRectBackgroundViewNeue.h>

@class UIColor, UIView;

// Not exported
@interface _UIModalItemTextFiledBGView : _UITextFieldRoundedRectBackgroundViewNeue
{
    long long _textFieldsCount;
    UIColor *_backgroundColor;
    UIColor *_separatorsColor;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIColor *separatorsColor; // @synthesize separatorsColor=_separatorsColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long textFieldsCount; // @synthesize textFieldsCount=_textFieldsCount;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

