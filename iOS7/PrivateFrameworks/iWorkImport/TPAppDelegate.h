/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray;

// Not exported
@interface TPAppDelegate : TSABaseApplicationDelegate
{
}

+ (id)sharedDelegate;
- (void)p_inputMethodsChanged:(id)arg1;
- (void)p_localeChanged:(id)arg1;
- (id)applicationTemplateVariants;
- (_Bool)supportsRTL;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayName;
- (id)applicationName;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)appChartPropertyOverrides;
@property(readonly, nonatomic) NSArray *wordDocumentTypes;
- (id)importableDocumentTypes;
- (id)createCompatibilityDelegate;
- (void)dealloc;
- (Class)documentRootClass;
- (id)init;

@end

