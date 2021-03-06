/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIImage.h>

@interface UIImage (UIImageLoadingPrivate)
- (_Bool)_isDecompressing;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(int)arg4;
- (void)_startEagerDecompression;
- (void)_saveDecompressedImage:(struct CGImage *)arg1;
- (void)_decompressionFallbackImageCreation;
- (void)_decompressionComplete;
@end

