//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBIconViewDelegate.h"
#import "SBIconViewMapDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SBIconViewMap, SBStopScrollingGestureRecognizer, UIScrollView, UIView, _UILegibilitySettings;

@interface SBAppSwitcherIconController : UIViewController <UIScrollViewDelegate, SBIconViewMapDelegate, SBIconViewDelegate>
{
    NSMutableArray *_appList;
    NSMutableDictionary *_iconViews;
    NSMutableArray *_iconViewCenters;
    _Bool _appListIsValid;
    UIScrollView *_scrollView;
    UIView *_iconContainer;
    double _distanceBetweenCenters;
    double _nominalDistanceBetweenCenters3;
    double _nominalDistanceBetweenCenters5;
    unsigned long long _iconTransitionIndex;
    _Bool _dragMaster;
    _Bool _preventScroll;
    SBStopScrollingGestureRecognizer *_stopScrollingGesture;
    long long _layoutOrientation;
    long long _simplicityOptions;
    struct CGRect _iconViewDefaultFrame;
    SBIconViewMap *_iconViewMap;
    _UILegibilitySettings *_legibilitySettings;
    id <SBAppSwitcherIconControllerDelegate> _delegate;
    NSArray *_displayLayouts;
}

+ (double)nominalDistanceBetween5IconCentersForSize:(struct CGSize)arg1;
+ (double)nominalDistanceBetween3IconCentersForSize:(struct CGSize)arg1;
@property(copy, nonatomic) NSArray *displayLayouts; // @synthesize displayLayouts=_displayLayouts;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) unsigned long long iconTransitionIndex; // @synthesize iconTransitionIndex=_iconTransitionIndex;
@property(nonatomic) id <SBAppSwitcherIconControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_iconsReloaded:(id)arg1;
- (double)iconLabelWidth;
- (void)iconTouchBegan:(id)arg1;
- (void)iconHandleLongPress:(id)arg1;
- (_Bool)iconShouldAllowTap:(id)arg1;
- (void)iconTapped:(id)arg1;
- (Class)viewMap:(id)arg1 iconViewClassForIcon:(id)arg2;
- (int)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (id)windowForRecycledViewsInViewMap:(id)arg1;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (Class)iconViewClassForIcon:(id)arg1 location:(int)arg2;
- (long long)_windowInterfaceOrientation;
- (unsigned long long)_centeredIndex;
- (void)_handleStopScrollingGesture:(id)arg1;
- (double)_recalculateLayout:(_Bool)arg1;
- (double)_calculateDistanceBetweenCentersBasedOnCurrentContentOffset;
- (double)_calculateDistanceBetweenCentersBasedOnCenteredIndex:(unsigned long long)arg1;
- (void)_layoutForDistance:(double)arg1;
- (void)_updateVisibleIconViewsWithPadding:(_Bool)arg1;
- (struct CGPoint)_adjustedCenter:(struct CGPoint)arg1 forIconView:(id)arg2;
- (_Bool)_isIndexVisible:(unsigned long long)arg1 withPadding:(_Bool)arg2;
- (struct CGPoint)_centerOfIndex:(unsigned long long)arg1 forDistance:(double)arg2 inOrientation:(long long)arg3;
- (double)_distanceBetweenCenters;
- (void)reloadInOrientation:(long long)arg1;
- (void)_cleanupAllIcons;
- (void)_cleanupIcon:(id)arg1;
- (double)_halfWidth;
- (void)_recalculateBaseIconSpacingValues;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withNewItem:(id)arg2 duration:(double)arg3;
- (void)removeItem:(id)arg1 duration:(double)arg2 updateScrollPosition:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 duration:(double)arg3 updateScrollPosition:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelScrolling;
- (void)cancelTracking;
- (void)switcherWasDismissed:(_Bool)arg1;
- (id)_safeDelegate;
- (void)loadView;
- (_Bool)isScrolling;
- (void)setNormalizedOffset:(double)arg1;
- (void)setOffsetToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)_maxXOffsetForDistance:(double)arg1;
- (id)_iconViewForIndex:(unsigned long long)arg1;
- (struct CGRect)_iconFaultRectForIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

