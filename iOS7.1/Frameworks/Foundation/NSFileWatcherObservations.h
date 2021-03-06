//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFileWatcherObservations : NSObject
{
    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString *_lastObservedPath;
    BOOL _didResetPath;
    NSString *_path;
}

- (void)notifyObserver:(CDUnknownBlockType)arg1;
- (void)addAnnouncedMoveToPath:(id)arg1;
- (void)addDetectedMoveToPath:(id)arg1;
- (void)addDeletion;
- (void)addContentsChange;
- (void)addAttributeChange;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

