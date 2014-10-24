//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPhotoOptions : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _photoSizes;
    int _maxPhotos;
    int _photoType;
    CDStruct_86c1f53f _has;
}

@property(nonatomic) int photoType; // @synthesize photoType=_photoType;
@property(nonatomic) int maxPhotos; // @synthesize maxPhotos=_maxPhotos;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPhotoSizes:(int *)arg1 count:(unsigned int)arg2;
- (int)photoSizeAtIndex:(unsigned int)arg1;
- (void)addPhotoSize:(int)arg1;
- (void)clearPhotoSizes;
@property(readonly, nonatomic) int *photoSizes;
@property(readonly, nonatomic) unsigned int photoSizesCount;
@property(nonatomic) BOOL hasPhotoType;
- (void)dealloc;

@end
