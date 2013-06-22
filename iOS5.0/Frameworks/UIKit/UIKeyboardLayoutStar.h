/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardLayout.h>

@class CADisplayLink, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UIDelayedAction, UIKBBackgroundView, UIKBKeyplaneView, UIKBTree, UISwipeGestureRecognizer, UIView, UIView<UIKeyboardRivenTransitionView>;

@interface UIKeyboardLayoutStar : UIKeyboardLayout
{
    UIKBTree *_keyboard;
    UIKBTree *_keyplane;
    NSString *_keyboardName;
    NSString *_keyplaneName;
    int _appearance;
    UIKBTree *_activeKey;
    UIKBKeyplaneView *_keyplaneView;
    UIKBBackgroundView *_backgroundView;
    int _keyboardType;
    struct CGPoint _initialDragPoint;
    struct CGPoint _dragPrevPoint;
    float _dragValues[4];
    float _dragVelocity;
    double _prevTouchUpTime;
    double _prevTouchDownTime;
    int _prevUpActions;
    NSMutableDictionary *_keyboards;
    NSMutableDictionary *_allKeyplaneViews;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableSet *_validInputStrings;
    NSString *_localizedInputKey;
    struct __CFDictionary *_extendedTouchInfoMap;
    int _preferredTrackingChangeCount;
    int _shiftTrackingChangeCount;
    NSMutableSet *_accentInfo;
    NSMutableSet *_hasAccents;
    NSMutableDictionary *_delegatesForKeyplaneKeys;
    id _spaceTarget;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _returnTarget;
    SEL _returnAction;
    SEL _returnLongAction;
    id _deleteTarget;
    SEL _deleteAction;
    SEL _deleteLongAction;
    BOOL _secureTextEntry;
    BOOL _shift;
    BOOL _autoshift;
    BOOL _settingShift;
    BOOL _didLongPress;
    BOOL _dragged;
    BOOL _dragChangedKey;
    BOOL _touchDownInMoreKey;
    BOOL _touchDownInShiftKey;
    BOOL _wasShifted;
    BOOL _dragDismissStarted;
    BOOL _swipeDetected;
    BOOL _previousTouchInMore;
    BOOL _showIntlKey;
    BOOL _showDictationKey;
    BOOL _shiftLockReady;
    double _shiftLockFirstTapTime;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    UIView<UIKeyboardRivenTransitionView> *_transitionView;
    float _initialSplitProgress;
    float _finalSplitProgress;
    float _initialPinchSeparation;
    float _pinchSeparationValues[4];
    BOOL _pinchDetected;
    double _autoSplitLastUpdate;
    float _autoSplitElapsedTime;
    CADisplayLink *_displayLink;
    BOOL _ghostKeysEnabled;
    UIDelayedAction *_delayedCentroidUpdate;
    BOOL _preRotateShift;
    NSString *_preRotateKeyplaneName;
    struct CGPoint _keyPeripheralInset;
    int _lastFlickDirection;
    UIView *_flickPopupView;
    NSMutableDictionary *_compositeImages;
    NSTimer *_flickPopuptimer;
    id _touchInfo;
    BOOL _popupViewIsShown;
    UIView *_dimKeyboardImageView;
    BOOL _keyboardImageViewIsDim;
    BOOL _isOutOfBounds;
}

@property(copy, nonatomic) NSString *localizedInputKey; // @synthesize localizedInputKey=_localizedInputKey;
@property(readonly, nonatomic) BOOL showDictationKey; // @synthesize showDictationKey=_showDictationKey;
@property(nonatomic) BOOL showIntlKey; // @synthesize showIntlKey=_showIntlKey;
@property(nonatomic) BOOL didLongPress; // @synthesize didLongPress=_didLongPress;
@property(nonatomic) BOOL autoShift; // @synthesize autoShift=_autoshift;
@property(nonatomic) BOOL shift; // @synthesize shift=_shift;
@property(retain, nonatomic) UIKBTree *activeKey; // @synthesize activeKey=_activeKey;
@property(copy, nonatomic) NSString *keyplaneName; // @synthesize keyplaneName=_keyplaneName;
@property(copy, nonatomic) NSString *keyboardName; // @synthesize keyboardName=_keyboardName;
@property(readonly, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
@property(readonly, nonatomic) UIKBTree *keyboard; // @synthesize keyboard=_keyboard;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (id)simulateTouch:(struct CGPoint)arg1;
- (struct CGPoint)applyError:(struct CGPoint)arg1 toKey:(id)arg2;
- (void)changeToKeyplane:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)baseKeyForString:(id)arg1;
- (BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (id)scriptingInfoWithChildren;
- (void)didRotate;
- (void)willRotate;
- (void)updateKeyCentroids;
- (BOOL)isShiftKeyBeingHeld;
- (void)setAutoshift:(BOOL)arg1;
- (void)updateShiftKeyState;
- (int)stateForShiftKey:(id)arg1;
- (BOOL)ignoresShiftState;
- (BOOL)usesAutoShift;
- (void)upActionShift;
- (void)downActionShiftWithKey:(id)arg1;
- (unsigned int)upActionFlagsForKey:(id)arg1;
- (unsigned int)downActionFlagsForKey:(id)arg1;
- (BOOL)keyHasAccentedVariants:(id)arg1;
- (id)activeTouchForKey:(id)arg1;
- (id)touchForKey:(id)arg1;
- (void)clearAllTouchInfo;
- (void)clearInfoForTouch:(id)arg1;
- (void)cancelTouchIfNecessaryForInfo:(id)arg1;
- (id)generateInfoForTouch:(id)arg1;
- (id)infoForTouch:(id)arg1;
- (void)swipeDetected:(id)arg1;
- (void)uninstallGestureRecognizers;
- (void)installGestureRecognizers;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchCancelled:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)refreshGhostKeyState;
- (BOOL)performReturnAction;
- (void)touchDragged:(id)arg1;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)touchDown:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (float)hitBuffer;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_autoSplit:(id)arg1;
- (void)setSplitProgress:(float)arg1;
- (void)interpretTouchesForSplit;
- (BOOL)pinchSplitGestureEnabled;
- (BOOL)pinchDetected;
- (void)finishSplitTransitionWithProgress:(float)arg1;
- (void)finishSplitTransition;
- (void)finishSplit;
- (void)showSplitTransitionView:(BOOL)arg1;
- (void)prepareForSplitTransition;
- (float)interpretPinchSeparationValues;
- (id)activationIndicatorView;
- (BOOL)shouldShowIndicator;
- (void)showPopupVariantsForKey:(id)arg1;
- (void)longPressAction;
- (BOOL)isLongPressedKey:(id)arg1;
- (BOOL)doesKeyCharging;
- (BOOL)isShiftKeyPlaneChooser;
- (void)confirmAction;
- (void)nextCandidatesAction;
- (void)clearAllKeyDelegates;
- (BOOL)updateKeysWithDelegates;
- (void)setDelegate:(id)arg1 forKey:(id)arg2;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)didClearInput;
- (BOOL)hasCandidateKeys;
- (id)candidateList;
- (void)deleteAction;
- (void)clearHandwritingStrokesIfNeeded;
- (void)sendStringAction:(id)arg1 forKey:(id)arg2 isPopupVariant:(BOOL)arg3;
- (id)keyHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2;
- (int)keycodeForKey:(id)arg1;
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (id)keyHitTest:(struct CGPoint)arg1;
- (id)keyHitTestWithoutCharging:(struct CGPoint)arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint)arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint)arg1;
- (BOOL)shouldHitTestKey:(id)arg1;
- (void)deactivateActiveKeys;
- (void)showKeyboardType:(int)arg1 appearance:(int)arg2 orientation:(id)arg3 withShift:(BOOL)arg4;
- (id)cachedKeyplaneNameForKeyplane:(id)arg1;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1 withVisualStyle:(int)arg2;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)deactivateAllInActivatedSet;
- (int)stateForKey:(id)arg1;
- (void)refreshForDictationAvailablityDidChange;
- (void)updateMoreAndInternationalKeys;
- (id)mergableKeyplaneSwitchKeyForRendering:(int)arg1;
- (void)updateDictationKeyOnNumberPads;
- (id)shapesForControlKeyShapes:(id)arg1 split:(BOOL)arg2;
- (id)shapesForControlKeyShapes:(id)arg1 split:(BOOL)arg2 alternateCJMerge:(BOOL)arg3;
- (id)spaceKey;
- (id)findLeftMoreKey;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (int)displayTypeHintForShiftKey;
- (int)displayTypeHintForMoreKey;
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)updateTransitionWithFlags:(int)arg1;
- (BOOL)canReuseKeyplaneView;
- (BOOL)shouldShowDictationKey;
- (void)updateKeyplaneViewMask;
- (void)updateBackgroundIfNeeded;
- (BOOL)backgroundNeedsRedraw;
- (BOOL)handwritingPlane;
- (struct CGImage *)renderedKeyplaneWithName:(id)arg1 split:(BOOL)arg2;
- (struct CGImage *)renderedImageWithToken:(id)arg1;
- (struct CGImage *)renderedImageWithStateFallbacksForToken:(id)arg1;
- (void)rebuildSplitTransitionView;
- (void)rebuildSplitTransitionViewFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)updateLocalizedKeys:(BOOL)arg1;
- (void)updateLocalizedKeysOnKeyplane:(id)arg1;
- (BOOL)canProduceString:(id)arg1;
- (double)lastTouchUpTimestamp;
- (void)setKeyboardName:(id)arg1 appearance:(int)arg2;
- (void)updateKeyboardForKeyplane:(id)arg1;
- (void)setKeyboardAppearance:(int)arg1;
- (int)visualStyleForKeyboardIfSplit:(BOOL)arg1;
- (void)refreshForRivenPreferences;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
- (struct CGRect)frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2;
- (id)splitNameForKeyplane:(id)arg1;
- (id)splitNameForKeyplaneName:(id)arg1;
- (id)defaultNameForKeyplaneName:(id)arg1;
- (id)keyboardWithName:(id)arg1;
@property(readonly, nonatomic) NSString *localizedInputMode;
- (SEL)handlerForNotification:(id)arg1;
- (void)flushKeyCache:(id)arg1;
- (void)removeFromSuperview;
- (void)clearUnusedObjects;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isRotating) BOOL rotating;

@end
