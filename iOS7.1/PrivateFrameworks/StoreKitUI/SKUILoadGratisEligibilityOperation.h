//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSObject<OS_dispatch_queue>, SKUIClientContext;

@interface SKUILoadGratisEligibilityOperation : NSOperation
{
    NSArray *_bundleIDs;
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (id)_bodyData;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (id)init;

@end
