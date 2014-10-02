//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLDismissableViewController.h"
#import "PUActivityViewControllerDelegate.h"
#import "PUPhotosSharingCollectionViewLayoutDelegate.h"
#import "PUPhotosSharingTransitionViewController.h"
#import "PUScrollViewSpeedometerDelegate.h"
#import "PUTransitionViewAnimatorDelegate.h"
#import "UIActivityViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSMutableArray, NSMutableSet, PLManagedAsset, PUActivityViewController, PUImageManager, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosSharingCollectionViewLayout, PUPhotosSharingTransitionContext, PUPhotosSharingViewControllerSpec, PUPhotosZoomingSharingGridCell, PUScrollViewSpeedometer, PUTransitionViewAnimator, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer, UIView;

@interface PUPhotosSharingViewController : UIViewController <PLDismissableViewController, UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, UIActivityViewControllerDelegate, PUTransitionViewAnimatorDelegate, PUScrollViewSpeedometerDelegate, PUActivityViewControllerDelegate, PUPhotosSharingTransitionViewController>
{
    PUScrollViewSpeedometer *_speedometer;
    NSMutableArray *_pendingCollectionListChangeNotifications;
    NSMutableArray *_pendingSingleCollectionChangeNotifications;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSIndexPath *_inFlightReferenceIndexPath;
    float _cachedEmbeddedActivityViewHeight;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    BOOL _shouldScrollToSelection;
    BOOL _didAttemptShareViaAirDrop;
    BOOL _inFlightRotation;
    BOOL __viewInSyncWithModel;
    id <PLAssetContainerList> _photoCollections;
    PUPhotoSelectionManager *_photoSelectionManager;
    id <PUPhotosSharingViewControllerDelegate> _delegate;
    PUPhotosSharingViewControllerSpec *_spec;
    UICollectionView *_mainCollectionView;
    UIView *_embeddedActivityView;
    PUPhotosSharingCollectionViewLayout *_mainCollectionViewLayout;
    PUPhotoPinchGestureRecognizer *__photoZoomPinchGestureRecognizer;
    PUTransitionViewAnimator *__photoZoomAnimator;
    PUPhotosZoomingSharingGridCell *__photoZoomCell;
    PUImageManager *__imageManager;
    NSMutableSet *__preheatedAssets;
    PUActivityViewController *__embeddedActivityViewController;
    PUActivityViewController *__unembeddedActivityViewController;
    UICollectionViewLayout *__transitionLayout;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    PLManagedAsset *__lastKnownReferenceAsset;
    NSIndexPath *__lastKnownReferenceIndexPath;
    CDUnknownBlockType __pptOnDidEndScrollingBlock;
    struct CGRect __previousPreheatRect;
}

@property(copy, nonatomic, setter=_pptSetOnDidEndScrollingBlock:) CDUnknownBlockType _pptOnDidEndScrollingBlock; // @synthesize _pptOnDidEndScrollingBlock=__pptOnDidEndScrollingBlock;
@property(retain, nonatomic, setter=_setLastKnownReferenceIndexPath:) NSIndexPath *_lastKnownReferenceIndexPath; // @synthesize _lastKnownReferenceIndexPath=__lastKnownReferenceIndexPath;
@property(retain, nonatomic, setter=_setLastKnownReferenceAsset:) PLManagedAsset *_lastKnownReferenceAsset; // @synthesize _lastKnownReferenceAsset=__lastKnownReferenceAsset;
@property(retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;
@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property(retain, nonatomic, setter=_setUnembeddedActivityViewController:) PUActivityViewController *_unembeddedActivityViewController; // @synthesize _unembeddedActivityViewController=__unembeddedActivityViewController;
@property(retain, nonatomic, setter=_setEmbeddedActivityViewController:) PUActivityViewController *_embeddedActivityViewController; // @synthesize _embeddedActivityViewController=__embeddedActivityViewController;
@property(retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // @synthesize _preheatedAssets=__preheatedAssets;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(readonly, nonatomic) PUImageManager *_imageManager; // @synthesize _imageManager=__imageManager;
@property(retain, nonatomic, setter=_setPhotoZoomCell:) PUPhotosZoomingSharingGridCell *_photoZoomCell; // @synthesize _photoZoomCell=__photoZoomCell;
@property(retain, nonatomic, setter=_setPhotoZoomAnimator:) PUTransitionViewAnimator *_photoZoomAnimator; // @synthesize _photoZoomAnimator=__photoZoomAnimator;
@property(retain, nonatomic, setter=_setPhotoZoomPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer; // @synthesize _photoZoomPinchGestureRecognizer=__photoZoomPinchGestureRecognizer;
@property(nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) BOOL _viewInSyncWithModel; // @synthesize _viewInSyncWithModel=__viewInSyncWithModel;
@property(retain, nonatomic, setter=_setMainCollectionViewLayout:) PUPhotosSharingCollectionViewLayout *mainCollectionViewLayout; // @synthesize mainCollectionViewLayout=_mainCollectionViewLayout;
@property(retain, nonatomic, setter=_setEmbeddedActivityView:) UIView *embeddedActivityView; // @synthesize embeddedActivityView=_embeddedActivityView;
@property(retain, nonatomic, setter=_setMainCollectionView:) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic) PUPhotosSharingViewControllerSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PUPhotosSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property(readonly, nonatomic) id <PLAssetContainerList> photoCollections; // @synthesize photoCollections=_photoCollections;
- (void).cxx_destruct;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(int)arg2 from:(int)arg3;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (BOOL)activityViewControllerShouldCancelAfterRemakingCanceled:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect)arg3 atIndexPath:(id)arg4;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(float *)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_updateMainViewAnimated:(BOOL)arg1;
- (void)_updateActivityViewAnimated:(BOOL)arg1;
- (void)_updateNavigationBarAnimated:(BOOL)arg1;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)_updateEmbeddedActivityViewAppearance;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (id)ppt_scrollView;
- (void)ppt_faultInScollViewContentSize;
- (BOOL)ppt_scrollToAssetAtRelativeIndex:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)selectionBadgeFrameForItemFrame:(struct CGRect)arg1 atIndexPath:(id)arg2;
- (void)_updatePreheatedAssets;
- (void)_resetPreheating;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (id)transitionCollectionView;
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(BOOL)arg1;
@property(readonly, nonatomic) NSIndexPath *currentIndexPath;
- (void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2;
- (void)_updateLastKnownReferenceIndexPath;
- (id)_validIndexPathFromIndexPath:(id)arg1;
- (void)_getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2 embeddedActivityViewFrame:(struct CGRect *)arg3;
- (void)_endZoomingForCell;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (void)_handlePhotoPinch:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (id)_localizedSelectionTitle;
- (BOOL)_isAnyAssetSelected;
- (void)_setSelected:(BOOL)arg1 atIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)_activityViewControllerDidDismissWithActivityType:(id)arg1 didComplete:(BOOL)arg2;
- (void)_prepareActivityViewControllerForUse;
- (id)_requiredActivityViewController;
@property(readonly, nonatomic) PUActivityViewController *_activityViewController;
- (void)_next:(id)arg1;
- (void)_cancel:(id)arg1;
- (id)_currentSelectedAssets;
- (id)_indexPathOfAsset:(id)arg1 sectionHint:(int)arg2;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_photoCollectionAtIndex:(int)arg1;
- (unsigned int)_indexForPhotoCollection:(id)arg1;
- (int)_numberOfItemsInSection:(int)arg1;
- (int)_numberOfSections;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (float)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1;
- (void)_getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (BOOL)_shouldShowAsset:(id)arg1;
- (BOOL)_embedsActivityView;
- (void)dealloc;
- (id)init;
- (id)initWithSpec:(id)arg1 photoCollections:(id)arg2 selection:(id)arg3;

@end
