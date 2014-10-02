//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SUMenuViewControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUSimpleMenuViewController, UIColor, UIPopoverController, UISegmentedControl;

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate>
{
    BOOL _autosizesText;
    NSString *_cancelButtonTitle;
    SUClientInterface *_clientInterface;
    BOOL _hidingPopoverForRotation;
    NSMutableArray *_items;
    int _maximumNumberOfItems;
    float _maximumWidth;
    SUSimpleMenuViewController *_menuViewController;
    NSString *_moreListTitle;
    UIPopoverController *_popoverController;
    UISegmentedControl *_segmentedControl;
    int _selectionIndex;
    BOOL _showsMoreListAutomatically;
    int _tintStyle;
}

@property(nonatomic) int tintStyle; // @synthesize tintStyle=_tintStyle;
@property(nonatomic) BOOL showsMoreListAutomatically; // @synthesize showsMoreListAutomatically=_showsMoreListAutomatically;
@property(copy, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(nonatomic) float maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) int maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (id)_titlesForMoreList;
- (void)_showMoreList:(BOOL)arg1;
- (void)_setValue:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)_reloadData;
- (void)_presentPopoverAnimated:(BOOL)arg1;
- (void)_destroyPopoverController;
- (void)_destroyMenuViewController;
- (void)_applyStyling;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)_valueChangedEvent:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)titleTextAttributesForState:(unsigned int)arg1;
@property(retain, nonatomic) UIColor *tintColor;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;
- (void)sizeToFitUserInterfaceIdiom;
- (void)showPopover:(id)arg1 fromSegmentIndex:(int)arg2 animated:(BOOL)arg3;
- (void)showMoreList:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
@property(nonatomic) int selectedItemIndex;
@property(nonatomic) int segmentedControlStyle;
@property(copy, nonatomic) NSArray *items;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
@property(readonly, nonatomic) int selectedSegmentIndex;
@property(readonly, nonatomic) int numberOfVisibleSegments;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
