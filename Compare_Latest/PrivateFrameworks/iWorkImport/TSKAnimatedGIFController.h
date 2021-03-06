//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKMediaPlayerController.h"

@class CADisplayLink, NSArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface TSKAnimatedGIFController : NSObject <TSKMediaPlayerController>
{
    id <TSKMediaPlayerControllerDelegate> mDelegate;
    struct CGImageSource *mSource;
    NSArray *mFrames;
    NSMutableSet *mLayers;
    BOOL mPlaying;
    double mLastDisplayUpdateTime;
    unsigned int mDisplayLinkCounter;
    double mAbsoluteCurrentTime;
    float mRate;
    float mRateBeforeScrubbing;
    unsigned int mScrubbingCount;
    double mStartTime;
    double mEndTime;
    float mVolume;
    int mRepeatMode;
    CADisplayLink *mDisplayLink;
    BOOL fastReversing;
    BOOL fastForwarding;
}

@property(nonatomic, getter=isFastForwarding) BOOL fastForwarding; // @synthesize fastForwarding;
@property(nonatomic, getter=isFastReversing) BOOL fastReversing; // @synthesize fastReversing;
@property(nonatomic) int repeatMode; // @synthesize repeatMode=mRepeatMode;
@property(nonatomic) double endTime; // @synthesize endTime=mEndTime;
@property(nonatomic) double startTime; // @synthesize startTime=mStartTime;
@property(nonatomic) double lastDisplayUpdateTime; // @synthesize lastDisplayUpdateTime=mLastDisplayUpdateTime;
@property(nonatomic) float volume; // @synthesize volume=mVolume;
@property(readonly, nonatomic) id <TSKMediaPlayerControllerDelegate> delegate; // @synthesize delegate=mDelegate;
@property(nonatomic) float rate; // @synthesize rate=mRate;
- (void)p_updateLayers;
- (void)p_displayLinkDidTrigger:(id)arg1;
- (void)p_disableDisplayLink;
- (void)p_enableDisplayLink;
- (void)p_getAbsoluteMovieTime:(double *)arg1 shouldStopPlayback:(char *)arg2 shouldReversePlayback:(char *)arg3;
- (void)p_updateDisplayLink;
- (void)p_prepareFrameTimes;
@property(readonly, nonatomic) struct CGImage *imageForCurrentTime;
- (id)newLayer;
- (void)removeLayer:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)removePeriodicTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (struct CGImage *)imageForTime:(double)arg1;
- (void)seekToEnd;
- (void)seekToBeginning;
- (void)seekForwardByOneFrame;
- (void)seekBackwardByOneFrame;
@property(readonly, nonatomic) BOOL canFastForward;
@property(readonly, nonatomic) BOOL canFastReverse;
- (void)endScrubbing;
- (void)cancelPendingSeeks;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
@property(readonly, nonatomic, getter=isScrubbing) BOOL scrubbing;
- (void)beginScrubbing;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double absoluteDuration;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double absoluteCurrentTime;
- (void)p_setAbsoluteCurrentTime:(double)arg1;
@property(readonly, nonatomic) double currentTime;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(readonly, nonatomic) BOOL canPlay;
- (void)teardown;
- (void)dealloc;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

