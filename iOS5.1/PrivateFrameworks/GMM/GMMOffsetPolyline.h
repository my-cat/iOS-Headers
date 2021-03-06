/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GMMGeometry, NSData;

@interface GMMOffsetPolyline : PBCodable
{
    GMMGeometry *_absolutePoint;
    NSData *_relativePoints;
}

@property(retain, nonatomic) NSData *relativePoints; // @synthesize relativePoints=_relativePoints;
@property(retain, nonatomic) GMMGeometry *absolutePoint; // @synthesize absolutePoint=_absolutePoint;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRelativePoints;
- (void)dealloc;

@end

