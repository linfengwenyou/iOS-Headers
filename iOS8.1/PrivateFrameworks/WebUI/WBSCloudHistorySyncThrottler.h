//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface WBSCloudHistorySyncThrottler : NSObject
{
    NSMutableArray *_syncOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned int _maximumNumberOfOperationWithinMonitoredPeriod;
    id <WBSCloudHistorySyncThrottlerDataStore> _dataStore;
}

+ (id)_distributionBucketsFromConfiguration:(id)arg1;
+ (BOOL)policyStringRepresentsValidPolicy:(id)arg1;
@property(retain, nonatomic) id <WBSCloudHistorySyncThrottlerDataStore> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (unsigned int)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (void)_saveRecordOfPastSyncOperations;
- (void)_loadRecordOfPastSyncOperations;
- (void)_addSyncOperationAtDate:(id)arg1;
- (void)_pruneExpiredOrInvalidSyncEntries;
- (double)_currentMinimumTimeIntervalBetweenSyncOperations;
- (double)_minimumTimeBetweenSyncOperationsForSyncOperations:(id)arg1;
- (double)_timeIntervalUntilSyncOperationShouldBePruned:(id)arg1;
- (double)_timeIntervalUntilNextPermittedSyncAttemptWithNormalPriority;
- (id)_dateOfNextPermittedSyncAttemptWithNormalPriority;
- (BOOL)_loadDistributionConfiguration:(id)arg1;
- (void)setPolicyString:(id)arg1;
- (BOOL)_throttlerIsActive;
- (id)description;
- (void)syncAttemptWithPriority:(int)arg1 didCompleteWithResult:(int)arg2;
- (id)dateOfNextPermittedSyncAttemptWithPriority:(int)arg1;
- (BOOL)throttlingPolicyPermitsSyncAttemptWithPriority:(int)arg1;
- (id)initWithPolicyString:(id)arg1;
- (id)init;

@end
