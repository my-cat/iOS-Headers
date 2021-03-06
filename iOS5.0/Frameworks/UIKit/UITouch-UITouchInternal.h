/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITouch.h>

@class UIView, UIWindow;

@interface UITouch (UITouchInternal)
+ (id)_createTouchesWithGSEvent:(struct __GSEvent *)arg1 phase:(int)arg2 view:(id)arg3;
@property(retain, nonatomic) UIView *warpedIntoView;
- (id)_forwardingRecord;
- (BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (int)_compareIndex:(id)arg1;
- (struct CGPoint)_previousLocationInWindow:(id)arg1;
- (struct CGPoint)_locationInWindow:(id)arg1;
- (void)_popPhase;
- (void)_pushPhase:(int)arg1;
- (void)_clearGestureRecognizers;
- (id)_gestureRecognizers;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_addGestureRecognizer:(id)arg1;
- (id)description;
- (id)_phaseDescription;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(BOOL)arg2;
@property(retain, nonatomic) UIView *gestureView;
@property(retain, nonatomic) UIView *view;
@property(retain, nonatomic) UIWindow *window;
@property(nonatomic) BOOL isTap;
@property(nonatomic) unsigned int tapCount;
@property(nonatomic) int phase;
@property(nonatomic) double timestamp;
- (BOOL)_isFirstTouchForView;
- (void)_setIsFirstTouchForView:(BOOL)arg1;

// Remaining properties
@property(nonatomic) BOOL sentTouchesEnded;
@end

