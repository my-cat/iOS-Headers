//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIActivityApplicationExtensionDiscovery : NSObject
{
    BOOL _performsInitialMatching;
    NSArray *_extensionPointIdentifiers;
    id _extensionMatchingContext;
}

@property BOOL performsInitialMatching; // @synthesize performsInitialMatching=_performsInitialMatching;
@property(retain) id extensionMatchingContext; // @synthesize extensionMatchingContext=_extensionMatchingContext;
@property(copy, nonatomic) NSArray *extensionPointIdentifiers; // @synthesize extensionPointIdentifiers=_extensionPointIdentifiers;
- (void)cancelUpdatesIfNeeded;
- (id)activitiesMatchingInputItems:(id)arg1 sourceIsManaged:(BOOL)arg2 error:(id *)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;

@end
