//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXIPCClient, AXIPCServer, NSString;

@interface AXServer : NSObject
{
    BOOL _shouldRegisterClientCallbackSourceOnMainRunloop;
    AXIPCServer *_server;
    AXIPCClient *_client;
    NSString *_serverIdentifier;
}

@property(nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop; // @synthesize shouldRegisterClientCallbackSourceOnMainRunloop=_shouldRegisterClientCallbackSourceOnMainRunloop;
@property(copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property(retain, nonatomic) AXIPCClient *client; // @synthesize client=_client;
@property(retain, nonatomic) AXIPCServer *server; // @synthesize server=_server;
- (id)_serviceName;
- (void)_connectServerIfNecessary;
- (BOOL)_connectIfNecessary;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (void)_wasDisconnectedFromClient;
- (void)_didConnectToClient;
- (id)sendMessage:(id)arg1;
- (BOOL)sendSimpleMessageWithResult:(id)arg1;
- (void)sendSimpleMessage:(id)arg1;
- (void)dealloc;

@end
