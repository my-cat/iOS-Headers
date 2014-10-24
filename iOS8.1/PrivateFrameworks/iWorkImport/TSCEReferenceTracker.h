//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSCEFormulaOwning.h"

@class NSMutableArray, NSString, TSCECalculationEngine;

__attribute__((visibility("hidden")))
@interface TSCEReferenceTracker : TSPObject <TSCEFormulaOwning>
{
    struct __CFUUID *mUUID;
    TSCECalculationEngine *mCalculationEngine;
    BOOL mIsRegisteredWithCalculationEngine;
    id <TSCEReferenceTrackerDelegate> mDelegate;
    NSMutableArray *mTrackedReferences;
    unsigned int mNextEmptyTrackedReferencesIndex;
    NSMutableArray *mFormulaIDsToRewrite;
    unsigned int mNumberOfTrackedReferences;
}

- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (BOOL)trackedReferencesExistForTable:(struct __CFUUID *)arg1;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(struct __CFUUID *)arg2;
- (id)cellRangeWasInserted:(CDStruct_5744d895)arg1;
- (id)trackedReferenceAtID:(CDStruct_a91f2c80)arg1;
- (void)setFormulaOwnerID:(struct __CFUUID *)arg1;
- (struct __CFUUID *)formulaOwnerID;
- (unsigned int)numberOfTrackedReferences;
- (id)allTrackedReferences;
- (id)allTrackedReferencesIntersectingReference:(CDStruct_39788696)arg1;
- (void)endTrackingReference:(id)arg1;
- (id)beginTrackingReferenceWithCReference:(CDStruct_39788696)arg1;
- (void)beginTrackingReference:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)calculationEngine;
- (void)setCalculationEngine:(id)arg1;
- (void)unregisterFromCalculationEngine;
- (void)registerWithCalculationEngine:(BOOL)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 delegate:(id)arg3;
- (id)objectToArchiveInDependencyTracker;
- (BOOL)serializeCalculations;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)retainForCalculationEngine:(id)arg1;
- (id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 rewriteSpec:(id)arg3;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (CDStruct_7ddbbeae)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
