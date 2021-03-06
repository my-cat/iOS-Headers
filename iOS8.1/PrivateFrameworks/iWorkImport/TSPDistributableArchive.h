//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFUFileDataRepresentation, SFUMemoryDataRepresentation, SFUZipEntry;

__attribute__((visibility("hidden")))
@interface TSPDistributableArchive : NSObject
{
    struct map<long long, std::__1::pair<long long, long long>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::pair<long long, long long>>>> *_entries;
    SFUFileDataRepresentation *_archiveFileRep;
    SFUMemoryDataRepresentation *_archiveMemoryRep;
    SFUZipEntry *_archiveZipEntryRep;
    CDStruct_af2b86c8 _archivedVersions;
}

+ (id)_newStringFromUtf8DataInStream:(id)arg1 length:(unsigned long)arg2;
+ (BOOL)_checkFileHeader:(const char *)arg1 length:(unsigned long)arg2 dffVersion:(unsigned short *)arg3 archivedVersions:(CDStruct_af2b86c8 *)arg4 defaultObjectVersion:(unsigned int *)arg5 hasDescriptors:(char *)arg6 hasToc:(char *)arg7 otherDataLength:(unsigned int *)arg8 closedCleanly:(char *)arg9;
+ (void)cancelStreaming;
+ (BOOL)streamDistributableArchive:(id)arg1 estimatedDataLength:(long long)arg2 toUnarchiver:(id)arg3 supplementalDataBundle:(id)arg4 closedCleanly:(char *)arg5 context:(id)arg6 error:(id *)arg7;
+ (BOOL)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned int *)arg2 error:(id *)arg3;
+ (BOOL)readArchivedVersionsFromStream:(id)arg1 versions:(CDStruct_af2b86c8 *)arg2 error:(id *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_createInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)_readEntriesFromToc:(id)arg1 error:(id *)arg2;
- (BOOL)containsObjectWithIdentifier:(long long)arg1;
- (long long)lengthOfObject:(long long)arg1;
- (id)createStreamForObject:(long long)arg1 length:(long long *)arg2;
- (CDStruct_af2b86c8)archivedVersions;
- (void)dealloc;
- (id)initWithDffData:(id)arg1 error:(id *)arg2;

@end

