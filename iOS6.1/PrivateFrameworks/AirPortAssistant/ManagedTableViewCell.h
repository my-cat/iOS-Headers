/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSIndexPath, NSMutableDictionary, TableViewManager;

@interface ManagedTableViewCell : UITableViewCell
{
    TableViewManager *_parentTableManager;
    NSMutableDictionary *_cellDict;
    NSIndexPath *_currentIndexPath;
    float _cellXEdgeInset;
    float _neededContentHeight;
    float _computedRightmostEditTextInset;
    float _forcedRightmostEditTextInset;
}

@property(nonatomic) float forcedRightmostEditTextInset; // @synthesize forcedRightmostEditTextInset=_forcedRightmostEditTextInset;
@property(readonly, nonatomic) float computedRightmostEditTextInset; // @synthesize computedRightmostEditTextInset=_computedRightmostEditTextInset;
@property(readonly, nonatomic) float neededContentHeight; // @synthesize neededContentHeight=_neededContentHeight;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) NSMutableDictionary *cellDict; // @synthesize cellDict=_cellDict;
@property(nonatomic) TableViewManager *parentTableManager; // @synthesize parentTableManager=_parentTableManager;
- (id)accessibilityValue;
- (void)layoutSubviews;
- (float)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned int)arg3 withRemainingContentWidth:(float)arg4;
- (void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned int)arg3;
- (float)horizontalSpacingForView:(id)arg1 withItem:(id)arg2;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
