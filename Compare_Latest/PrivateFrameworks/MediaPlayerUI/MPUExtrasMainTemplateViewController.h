//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

#import "MPUExtrasMainMenuSectionMetricsDataSource.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class MPUExtrasMainMenuSectionMetrics, NSLayoutConstraint, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface MPUExtrasMainTemplateViewController : MPUExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, MPUExtrasMainMenuSectionMetricsDataSource>
{
    MPUExtrasMainMenuSectionMetrics *_mainMenuMetrics;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    UICollectionView *_menuBarCollectionView;
    BOOL _hasHadMenuSelection;
    UIView *_menuBarView;
    id <UICollectionViewDelegate> _didSelectDelegate;
}

@property(nonatomic) __weak id <UICollectionViewDelegate> didSelectDelegate; // @synthesize didSelectDelegate=_didSelectDelegate;
@property(readonly, nonatomic) UIView *menuBarView; // @synthesize menuBarView=_menuBarView;
- (void).cxx_destruct;
- (void)_startBackgroundAudio;
- (void)_recalculateSizes;
- (struct CGSize)sectionMetrics:(id)arg1 sizeForItemAtIndex:(int)arg2 withFontDescriptor:(id)arg3;
- (int)numberOfItemsForSectionMetrics:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)_isFeatureItemAtIndexPath:(id)arg1;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)_collectionView:(id)arg1 indexPathShouldDisplayAsSelected:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_textElementAtIndex:(int)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)_menuItems;
- (void)setCollectionViewHeight:(float)arg1;
- (void)_prepareLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_prepareCollectionView;
- (void)_dynamicTypeChanged;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (id)templateElement;
- (BOOL)showsPlaceholder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

