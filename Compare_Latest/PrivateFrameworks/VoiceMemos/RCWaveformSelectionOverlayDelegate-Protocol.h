/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol RCWaveformSelectionOverlayDelegate <NSObject>
- (double)waveformSelectionOverlay:(id)arg1 timeForOffset:(float)arg2;
- (float)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
- (CDStruct_73a5d3ca)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(CDStruct_73a5d3ca)arg2 isTracking:(BOOL)arg3;
- (void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3;
- (void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3;
@end
