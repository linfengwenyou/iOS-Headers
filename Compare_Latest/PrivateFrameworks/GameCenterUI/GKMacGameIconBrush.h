//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKImageBrush.h>

#import "GKBrushIdentification.h"

@class NSString;

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification>
{
    struct CGSize _outputSize;
}

@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (id)renderedImageIdentifier;
- (struct CGSize)sizeForInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
