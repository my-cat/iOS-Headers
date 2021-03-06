//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString
{
    union {
        unsigned short *fat;
        char *thin;
    } contents;
    struct {
        unsigned int isFat:1;
        unsigned int freeWhenDone:1;
        unsigned int refs:30;
    } flags;
    unsigned int numCharacters;
    void *_reserved;
}

- (unsigned int)cStringLength;
- (const char *)lossyCString;
- (const char *)cString;
- (unsigned int)fastestEncoding;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)getBytes:(void *)arg1 maxLength:(unsigned int)arg2 usedLength:(unsigned int *)arg3 encoding:(unsigned int)arg4 options:(unsigned int)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (unsigned int)length;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)finalize;
- (void)dealloc;
- (void)setContentsNoCopy:(void *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4;

@end

