//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PKPaymentWebService;

@protocol PKPaymentProvisioningServiceDelegate <NSObject>
- (void)shouldArchiveWebService:(PKPaymentWebService *)arg1;

@optional
- (void)provisioningDataWithCompletionHandler:(void (^)(PKPaymentDeviceProvisioningData *, NSError *))arg1;
- (void)registrationDataWithAuthToken:(NSString *)arg1 completionHandler:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg2;
- (void)configurationDataWithCompletionHandler:(void (^)(PKPaymentDeviceConfigurationData *, NSError *))arg1;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)setNewAuthRandomIfNecessary:(void (^)(void))arg1;
- (BOOL)hasDevelopmentSignedSE;
@end
