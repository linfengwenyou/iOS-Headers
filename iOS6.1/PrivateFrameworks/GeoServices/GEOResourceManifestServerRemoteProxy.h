/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOResourceManifestServerProxy-Protocol.h"

@class NSLock, NSMutableArray, NSObject<OS_xpc_object>;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy>
{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    NSObject<OS_xpc_object> *_conn;
    int _closedCount;
    unsigned long long _regionalResourceHandleCounter;
    NSMutableArray *_inProgressRegionalResourcesRequests;
    NSLock *_inProgressRegionalResourcesRequestsLock;
    BOOL _started;
    BOOL _hiDPI;
    unsigned int _retryCount;
}

@property(nonatomic) id <GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (oneway void)cancelRegionalResourcesLoadForKeys:(id)arg1;
- (oneway void)loadRegionalResourcesForKeys:(id)arg1 allowNetwork:(BOOL)arg2;
- (oneway void)refreshActiveTileGroup;
- (void)getResourceManifestWithHandler:(id)arg1;
- (oneway void)forceUpdate;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (oneway void)startServer:(id)arg1;
- (void)closeConnection;
- (void)openConnection;
- (void)_setupConnection;
- (id)authToken;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
