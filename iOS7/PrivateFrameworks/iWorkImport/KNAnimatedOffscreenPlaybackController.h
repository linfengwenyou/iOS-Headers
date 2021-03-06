/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDCanvasDelegate-Protocol.h"

@class CALayer, KNAnimatedSlideView, KNDocumentRoot, KNPlaybackSession, KNSlideNode, NSMutableSet, NSSet;

// Not exported
@interface KNAnimatedOffscreenPlaybackController : NSObject <TSDCanvasDelegate>
{
    KNDocumentRoot *mDocumentRoot;
    KNPlaybackSession *mSession;
    KNAnimatedSlideView *mAnimator;
    NSMutableSet *mManagedMovieRenderers;
    double mCurrentEventAnimationsNonDelayedEndTime;
    double mCurrentEventAnimationsDelay;
    double mCurrentEventPauseStartTime;
    long long mConcealingStyle;
    CALayer *mConcealingLayer;
    _Bool mIsAnimating;
    _Bool mIsPaused;
    _Bool mManagesMovieRenderers;
}

@property(readonly, nonatomic) NSSet *managedMovieRenderers; // @synthesize managedMovieRenderers=mManagedMovieRenderers;
@property(nonatomic) _Bool managesMovieRenderers; // @synthesize managesMovieRenderers=mManagesMovieRenderers;
@property(readonly, nonatomic) KNDocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
- (void)updateManagedMovieRenderersForLayerTime:(double)arg1;
- (void)enumerateMovieRenderersAtCurrentEventUsingBlock:(id)arg1;
- (void)p_animateConcealingLayerToOpacity:(float)arg1 fromDefaultOpacity:(float)arg2 atTime:(double)arg3;
- (void)p_updateConcealingStyle:(long long)arg1 atTime:(double)arg2;
- (void)resumeCurrentEventAnimationsAtLayerTime:(double)arg1;
- (void)pauseCurrentEventAnimationsWithConcealingStyle:(long long)arg1 atLayerTime:(double)arg2;
- (void)pauseCurrentEventAnimationsAtLayerTime:(double)arg1;
- (double)currentEventAnimationsRemainingTimeAfterLayerTime:(double)arg1;
- (void)endCurrentEventAnimations;
- (void)updateCurrentEventAnimationsForLayerTime:(double)arg1;
- (void)beginCurrentEventAnimationsAtLayerTime:(double)arg1;
- (void)p_invalidateAnimator;
- (void)p_renderCurrentEvent;
- (_Bool)p_isCurrentEventTransition;
@property(readonly, nonatomic) unsigned long long currentSlideNodeEventCount;
@property(readonly, nonatomic) KNSlideNode *nextSlideNode;
@property(readonly, nonatomic) KNSlideNode *firstSlideNode;
- (void)gotoSlideNode:(id)arg1 eventIndex:(unsigned long long)arg2 resetBuildTextures:(_Bool)arg3;
@property(readonly, nonatomic) unsigned long long currentEventIndex;
@property(readonly, nonatomic) KNSlideNode *currentSlideNode;
@property(readonly, nonatomic) CALayer *layer;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1 layerSize:(struct CGSize)arg2;

@end

