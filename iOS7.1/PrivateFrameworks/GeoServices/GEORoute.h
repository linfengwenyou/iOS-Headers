//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray, NSString;

@interface GEORoute : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _advisorys;
    CDStruct_084d6ede _incidentEndOffsetsInRoutes;
    CDStruct_084d6ede _incidentIndices;
    CDStruct_084d6ede _trafficColorOffsets;
    CDStruct_084d6ede _trafficColors;
    NSMutableArray *_advisoryNotices;
    NSData *_arrivalRouteID;
    unsigned int _arrivalStepID;
    NSData *_basicPoints;
    NSData *_departureRouteID;
    unsigned int _departureStepID;
    unsigned int _distance;
    int _drivingSide;
    unsigned int _expectedTime;
    unsigned int _historicTravelTime;
    NSString *_name;
    NSString *_phoneticName;
    NSData *_routeID;
    NSMutableArray *_routeNames;
    int _routeType;
    NSMutableArray *_steps;
    int _transportType;
    NSData *_unpackedLatLngVertices;
    NSData *_zilchPoints;
    struct {
        unsigned int arrivalStepID:1;
        unsigned int departureStepID:1;
        unsigned int distance:1;
        unsigned int drivingSide:1;
        unsigned int expectedTime:1;
        unsigned int historicTravelTime:1;
        unsigned int routeType:1;
        unsigned int transportType:1;
    } _has;
}

@property(retain, nonatomic) NSData *unpackedLatLngVertices; // @synthesize unpackedLatLngVertices=_unpackedLatLngVertices;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(retain, nonatomic) NSMutableArray *routeNames; // @synthesize routeNames=_routeNames;
@property(retain, nonatomic) NSMutableArray *advisoryNotices; // @synthesize advisoryNotices=_advisoryNotices;
@property(retain, nonatomic) NSData *basicPoints; // @synthesize basicPoints=_basicPoints;
@property(nonatomic) unsigned int arrivalStepID; // @synthesize arrivalStepID=_arrivalStepID;
@property(retain, nonatomic) NSData *arrivalRouteID; // @synthesize arrivalRouteID=_arrivalRouteID;
@property(nonatomic) unsigned int departureStepID; // @synthesize departureStepID=_departureStepID;
@property(retain, nonatomic) NSData *departureRouteID; // @synthesize departureRouteID=_departureRouteID;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned int)arg1;
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)clearIncidentEndOffsetsInRoutes;
@property(readonly, nonatomic) unsigned int *incidentEndOffsetsInRoutes;
@property(readonly, nonatomic) unsigned int incidentEndOffsetsInRoutesCount;
- (void)setIncidentIndices:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)incidentIndicesAtIndex:(unsigned int)arg1;
- (void)addIncidentIndices:(unsigned int)arg1;
- (void)clearIncidentIndices;
@property(readonly, nonatomic) unsigned int *incidentIndices;
@property(readonly, nonatomic) unsigned int incidentIndicesCount;
@property(readonly, nonatomic) BOOL hasUnpackedLatLngVertices;
- (void)setAdvisorys:(int *)arg1 count:(unsigned int)arg2;
- (int)advisoryAtIndex:(unsigned int)arg1;
- (void)addAdvisory:(int)arg1;
- (void)clearAdvisorys;
@property(readonly, nonatomic) int *advisorys;
@property(readonly, nonatomic) unsigned int advisorysCount;
@property(nonatomic) BOOL hasHistoricTravelTime;
- (id)routeNameAtIndex:(unsigned int)arg1;
- (unsigned int)routeNamesCount;
- (void)addRouteName:(id)arg1;
- (void)clearRouteNames;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned int trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)trafficColorAtIndex:(unsigned int)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)clearTrafficColors;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned int trafficColorsCount;
- (id)advisoryNoticeAtIndex:(unsigned int)arg1;
- (unsigned int)advisoryNoticesCount;
- (void)addAdvisoryNotice:(id)arg1;
- (void)clearAdvisoryNotices;
@property(readonly, nonatomic) BOOL hasBasicPoints;
@property(nonatomic) BOOL hasArrivalStepID;
@property(readonly, nonatomic) BOOL hasArrivalRouteID;
@property(nonatomic) BOOL hasDepartureStepID;
@property(readonly, nonatomic) BOOL hasDepartureRouteID;
@property(nonatomic) BOOL hasDrivingSide;
@property(nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(readonly, nonatomic) BOOL hasZilchPoints;
@property(nonatomic) BOOL hasRouteType;
@property(nonatomic) int routeType; // @synthesize routeType=_routeType;
@property(readonly, nonatomic) BOOL hasRouteID;
@property(nonatomic) BOOL hasExpectedTime;
@property(nonatomic) BOOL hasDistance;
@property(readonly, nonatomic) BOOL hasPhoneticName;
@property(readonly, nonatomic) BOOL hasName;
- (id)stepAtIndex:(unsigned int)arg1;
- (unsigned int)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(nonatomic) BOOL hasTransportType;
- (void)dealloc;
- (double)distanceFromPoint:(struct PolylineCoordinate)arg1 toPoint:(struct PolylineCoordinate)arg2;
- (int)transportTypeForStep:(id)arg1;
- (BOOL)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;
- (id)zilchDataFromStepIndex:(unsigned int)arg1;
- (id)newETARouteFromStepIndex:(unsigned int)arg1 stepPercentRemaining:(double)arg2;
- (id)newETARoute;
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(BOOL)arg2 uniquePointRange:(struct _NSRange *)arg3;
- (unsigned int)indexForStepID:(unsigned int)arg1;
- (id)simplifiedDescription;
- (id)debugDescription;
- (unsigned int)stepIndexForPointIndex:(unsigned int)arg1;
- (unsigned int)distanceFromStepIndex:(unsigned int)arg1 toStepIndex:(unsigned int)arg2;
- (BOOL)unpackLatLngVertices;
- (void)unpackZilchPoints;
- (BOOL)unpackBasicPoints;
@property(readonly) unsigned int pointCount;
- (int)formOfWayAt:(unsigned int)arg1;
- (void)getFormOfWay:(int *)arg1 roadClass:(int *)arg2 at:(unsigned int)arg3;
- (CDStruct_c3b9c2ee)pointAt:(unsigned int)arg1;
- (void *)controlPoints;

@end
