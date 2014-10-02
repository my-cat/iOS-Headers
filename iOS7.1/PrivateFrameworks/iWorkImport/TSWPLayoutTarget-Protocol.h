//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<TSWPColumnMetrics>, TSDBezierPath, TSDCanvas, TSDDrawableInfo, TSDLayout, TSPObject<TSDHint>;

@protocol TSWPLayoutTarget <NSObject>
@property(readonly, nonatomic) float maxAnchorY;
@property(readonly, nonatomic) BOOL layoutIsValid;
@property(readonly, nonatomic) BOOL textIsVertical;
@property(readonly, nonatomic) unsigned int pageCount;
@property(readonly, nonatomic) unsigned int pageNumber;
@property(readonly, nonatomic) BOOL wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) int naturalAlignment;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
@property(readonly, nonatomic) NSMutableArray *columns;
- (BOOL)isLayoutOffscreen;
- (void)addAttachmentLayout:(TSDLayout *)arg1;
- (NSArray *)currentAnchoredDrawableLayouts;
- (NSArray *)currentInlineDrawableLayouts;
- (TSDLayout *)validatedLayoutForAnchoredDrawable:(id <TSDInfo>)arg1;
- (TSDLayout *)validatedLayoutForInlineDrawable:(id <TSDInfo>)arg1;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
- (BOOL)isLastTarget;
- (NSObject<TSWPColumnMetrics> *)columnMetricsForCharIndex:(unsigned int)arg1 outRange:(struct _NSRange *)arg2;

@optional
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) BOOL shouldHyphenate;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) TSDCanvas *canvas;
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, nonatomic) struct CGRect maskRect;
- (BOOL)adjustColumnOriginForAlignment;
- (BOOL)siblingTargetIsManipulatingDrawable:(TSDDrawableInfo *)arg1;
- (TSDBezierPath *)interiorClippingPath;
- (BOOL)invalidateForPageCountChange;
- (unsigned int)pageIndex;
- (struct CGPoint)anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint)arg1;
- (struct CGPoint)layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint)arg1;
- (struct CGPoint)layoutPositionFromInlineAttachmentPosition:(struct CGPoint)arg1;
@end
