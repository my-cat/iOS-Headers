//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeInfo.h>

#import "TSDAnnotationHosting.h"

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;

__attribute__((visibility("hidden")))
@interface TSWPCommentInfo : TSWPShapeInfo <TSDAnnotationHosting>
{
    TSDCommentStorage *_commentStorage;
}

+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize)arg2 storage:(id)arg3;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;
+ (id)commentStyleIdentifier;
+ (id)bezierPathForExportCommentOutline;
@property(readonly, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)commitText:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
@property(nonatomic) id <TSKModel> model;
- (void)saveToArchive:(struct CommentInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct CommentInfoArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (Class)editorClass;
- (BOOL)supportsAttachedComments;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
- (Class)layoutClass;
- (Class)repClass;
- (BOOL)supportsHyperlinks;
- (BOOL)isLockable;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;
- (id)creationDateString;
- (id)pathSourceForExportCommentOutline;

// Remaining properties
@property(readonly, nonatomic) NSString *changeTrackingString;

@end

