/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UITextPosition, UITextRangeImpl;

@interface UITextRange : NSObject
{
}

@property(readonly, nonatomic) UITextPosition *end;
@property(readonly, nonatomic) UITextPosition *start;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic, getter=_isImpl) UITextRangeImpl *isImpl;
@property(readonly, nonatomic, getter=_isRanged) BOOL isRanged;
@property(readonly, nonatomic, getter=_isCaret) BOOL isCaret;

@end
