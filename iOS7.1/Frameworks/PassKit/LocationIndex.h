//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SQLiteEntity.h"

@interface LocationIndex : SQLiteEntity
{
}

+ (id)propertySettersForLocation;
+ (id)locationsByPassUniqueIDWithBoundingBox:(CDStruct_d2b197d1)arg1 inDatabase:(id)arg2;
+ (id)insertIndexedLocationWithLatitude:(id)arg1 longitude:(id)arg2 forLocation:(id)arg3 database:(id)arg4;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)databaseTable;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 forLocation:(id)arg3 database:(id)arg4;

@end

