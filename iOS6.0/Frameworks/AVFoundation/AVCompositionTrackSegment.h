/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetTrackSegment.h>

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment
{
    AVCompositionTrackSegmentInternal *_priv;
}

+ (id)compositionTrackSegmentWithTimeRange:(CDStruct_e83c9415)arg1;
+ (id)compositionTrackSegmentWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(CDStruct_e83c9415)arg3 targetTimeRange:(CDStruct_e83c9415)arg4;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) int sourceTrackID;
@property(readonly, nonatomic) NSURL *sourceURL;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;
- (id)initWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(CDStruct_e83c9415)arg3 targetTimeRange:(CDStruct_e83c9415)arg4;
- (id)init;

@end

