/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIImage;

@interface _UIImageViewPretiledImageCacheKey : NSObject
{
    UIImage *_originalImage;
    struct CGSize _pretiledSize;
}

+ (id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(struct CGSize)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;

@end
