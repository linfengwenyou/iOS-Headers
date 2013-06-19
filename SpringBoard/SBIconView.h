/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBIconObserver-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSTimer, SBCloseBoxView, SBDownloadingProgressBar, SBIcon, SBIconImageCrossfadeView, SBIconImageView, SBParallaxSettings, UIImageView, UIView<SBIconAccessoryView>, _UILegibilityView;

@interface SBIconView : UIView <_UISettingsKeyObserver, SBIconObserver>
{
    SBIcon *_icon;
    int _iconLocation;
    UIView *_currentImageView;
    SBIconImageView *_iconImageView;
    SBIconImageCrossfadeView *_crossfadeView;
    UIView<SBIconAccessoryView> *_accessoryView;
    SBDownloadingProgressBar *_progressBar;
    SBCloseBoxView *_closeBox;
    SBParallaxSettings *_closeBoxParallaxSettings;
    _UILegibilityView *_labelView;
    UIView *_updatedMark;
    UIImageView *_dropGlow;
    unsigned int _drawsLabel:1;
    unsigned int _isEditing:1;
    unsigned int _isGrabbed:1;
    unsigned int _isOverlapping:1;
    unsigned int _refusesRecipientStatus:1;
    unsigned int _highlighted:1;
    unsigned int _launchDisabled:1;
    unsigned int _isJittering:1;
    unsigned int _allowJitter:1;
    unsigned int _touchDownInIcon:1;
    unsigned int _hideLabel:1;
    unsigned int _hideUpdatedMark;
    struct CGPoint _unjitterPoint;
    struct CGPoint _grabPoint;
    NSTimer *_longPressTimer;
    NSTimer *_delayedUnhighlightTimer;
    id <SBIconViewDelegate> _delegate;
    id <SBIconViewObserver> _observer;
    int _legibilityStyle;
    float _iconImageAlpha;
    float _iconAccessoryAlpha;
    float _iconLabelAlpha;
}

+ (id)_jitterTransformAnimation;
+ (id)_jitterPositionAnimation;
+ (id)labelImageParametersForIcon:(id)arg1 location:(int)arg2 style:(int)arg3;
+ (Class)_labelImageParametersClassForIcon:(id)arg1;
+ (struct CGSize)maxLabelSize;
+ (struct CGRect)_rectForLayoutMetric:(int)arg1;
+ (struct CGSize)defaultVisibleIconImageSize;
+ (struct CGPoint)defaultIconImageCenter;
+ (struct CGSize)defaultIconImageSize;
+ (float)_labelHeight;
+ (struct CGSize)defaultIconSize;
+ (BOOL)_canShowUpdatedMark;
+ (int)_defaultIconFormat;
@property(nonatomic) float iconLabelAlpha; // @synthesize iconLabelAlpha=_iconLabelAlpha;
@property(nonatomic) float iconAccessoryAlpha; // @synthesize iconAccessoryAlpha=_iconAccessoryAlpha;
@property(nonatomic) float iconImageAlpha; // @synthesize iconImageAlpha=_iconImageAlpha;
@property(nonatomic) int legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(nonatomic) int location; // @synthesize location=_iconLocation;
@property(nonatomic) id <SBIconViewObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) id <SBIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)iconLaunchEnabledDidChange:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateProgressBar;
- (id)progressBar;
- (void)prepareForRecycling;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)_delegateTapAllowed;
- (void)_delegateTouchEnded:(BOOL)arg1;
- (struct UIEdgeInsets)snapshotEdgeInsets;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_closeBoxTapped;
- (BOOL)_isShowingCloseBox;
- (void)_updateCloseBoxAnimated:(BOOL)arg1;
- (void)_applyEditingStateAnimated:(BOOL)arg1;
@property(nonatomic) BOOL isEditing;
- (void)setIsEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_newCloseBox;
- (void)setTouchDownInIcon:(BOOL)arg1;
- (BOOL)isTouchDownInIcon;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)cancelLongPressTimer;
- (void)longPressTimerFired;
- (void)cleanupAfterImageCrossfade;
- (void)setImageCrossfadeMorphFraction:(float)arg1;
- (void)setImageCrossfadeFadeFraction:(float)arg1;
- (void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(BOOL)arg2 trueCrossfade:(BOOL)arg3 anchorPoint:(struct CGPoint)arg4;
- (void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(BOOL)arg2 trueCrossfade:(BOOL)arg3;
- (id)dropGlow;
- (void)removeDropGlow;
- (void)showDropGlow:(BOOL)arg1;
- (void)prepareDropGlow;
- (void)setIsOverlapping:(BOOL)arg1;
- (BOOL)isGrabbed;
- (void)setIsGrabbed:(BOOL)arg1;
- (double)grabDurationForEvent:(id)arg1;
- (BOOL)canReceiveGrabbedIcon:(id)arg1;
- (void)setRefusesRecipientStatus:(BOOL)arg1;
- (void)setIconPosition:(struct CGPoint)arg1;
- (void)removeAllIconAnimations;
- (void)setAllowJitter:(BOOL)arg1;
- (void)_updateJitter;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isInDock;
- (void)_delayedUnhighlight;
- (void)_setHighlighted:(BOOL)arg1 delayUnhighlight:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (BOOL)_delaysUnhighlightWhenTapped;
- (BOOL)allowsTapWhileEditing;
- (void)_updateBrightness;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_automationID;
- (void)_createAccessoryViewIfNecessary;
- (void)_updateAccessoryViewWithAnimation:(BOOL)arg1;
- (void)_updateIconImageView;
- (void)_updateUpdatedMark;
- (void)_updateLabel;
- (id)_labelImageParameters;
- (id)_labelImage;
- (id)_iconImageView;
- (struct CGRect)_frameForCloseBox;
- (struct CGRect)_frameForProgressBar;
- (struct CGRect)_frameForAccessoryView;
- (struct CGRect)_frameForUpdatedMarkWithLabelFrame:(struct CGRect)arg1;
- (struct CGRect)_frameForLabel;
- (float)_labelVerticalOffset;
- (struct CGRect)_frameForImageView;
- (void)layoutSubviews;
- (void)setUpdatedMarkHidden:(BOOL)arg1;
- (void)setLabelHidden:(BOOL)arg1;
- (void)_applyIconLabelAlpha:(float)arg1;
- (void)_applyIconAccessoryAlpha:(float)arg1;
- (void)_applyIconImageAlpha:(float)arg1;
- (void)setIconImageAndAccessoryAlpha:(float)arg1;
- (struct CGSize)iconImageVisibleSize;
- (struct CGPoint)iconImageCenter;
- (struct CGRect)iconImageFrame;
- (id)iconImageSnapshot;
@property(retain, nonatomic) SBIcon *icon;
- (void)dealloc;
- (id)initWithDefaultSize;

@end
