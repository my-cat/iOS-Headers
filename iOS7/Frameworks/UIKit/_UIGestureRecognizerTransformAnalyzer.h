/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface _UIGestureRecognizerTransformAnalyzer : NSObject
{
    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}

@property(readonly, nonatomic) int dominantComponent; // @synthesize dominantComponent=_dominantComponent;
@property(nonatomic) double rotationWeight; // @synthesize rotationWeight=_rotationWeight;
@property(nonatomic) double pinchingWeight; // @synthesize pinchingWeight=_pinchingWeight;
@property(nonatomic) double translationWeight; // @synthesize translationWeight=_translationWeight;
- (void)analyzeTouches:(id)arg1;
- (void)reset;
- (id)init;

@end

