//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3DatabaseConnection, ML3MusicLibrary, NSArray, NSData, NSDictionary, NSMutableDictionary;

@interface SagaPlaylistImporter : NSObject
{
    NSData *_playlistData;
    ML3MusicLibrary *_library;
    ML3DatabaseConnection *_connection;
    NSArray *_responseContainers;
    NSDictionary *_cachedNameOrders;
    NSMutableDictionary *_containerCloudIDsToParentContainerCloudIDs;
}

- (BOOL)finish;
- (BOOL)processDeletedPlaylists;
- (BOOL)importPlaylistAtIndex:(unsigned int)arg1;
- (void)_buildCacheNameOrderMap;
- (unsigned int)playlistCount;
- (id)initWithData:(id)arg1 library:(id)arg2 connection:(id)arg3;

@end
