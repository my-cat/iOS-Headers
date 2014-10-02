//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSMetricsEventFieldProvider.h"

@class NSString;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider>
{
    int _metricsLocationPosition;
}

- (void)_setMetricsLocationPosition:(int)arg1;
@property(nonatomic) int metricsLocationPosition; // @synthesize metricsLocationPosition=_metricsLocationPosition;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)valueForMetricsField:(id)arg1;
@property(readonly, nonatomic) NSString *metricsElementName;
@property(readonly, nonatomic, getter=isMissingItemData) BOOL missingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int componentType;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)initWithCustomPageContext:(id)arg1;

@end
