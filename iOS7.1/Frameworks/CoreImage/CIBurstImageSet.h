//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject
{
    CIBurstImageSetInternal *_priv;
}

+ (id)burstImageSet;
- (void)setLoggingListener:(void *)arg1 withUserInfo:(void *)arg2;
- (double)secondsSinceStart;
- (id)statsForImageWithIdentifier:(id)arg1;
- (id)allImageIdentifiers;
- (id)imageClusterForIndex:(unsigned int)arg1;
- (unsigned int)imageClusterCount;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)coverImageIdentifier;
- (id)bestImageIdentifiers;
- (void)addImage:(id)arg1 identifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addImageFromCGImage:(struct CGImage *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)burstId;
- (id)init;
- (void)dealloc;

@end
