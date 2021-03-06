/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/PDSlideBase.h>

@class OADColorMap, OADThemeOverrides;

// Not exported
@interface PDSlideChild : PDSlideBase
{
    _Bool mShowMasterPlaceholderAnimations;
    _Bool mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (id)drawingTheme;
- (void)doneWithContent;
- (id)styleMatrix;
- (id)colorMap;
- (id)fontScheme;
- (id)colorScheme;
- (void)setColorMapOverride:(id)arg1;
- (id)colorMapOverride;
- (id)themeOverrides;
- (void)setShowMasterShapes:(_Bool)arg1;
- (_Bool)showMasterShapes;
- (void)setShowMasterPlaceholderAnimations:(_Bool)arg1;
- (_Bool)showMasterPlaceholderAnimations;
- (void)dealloc;
- (id)init;

@end

