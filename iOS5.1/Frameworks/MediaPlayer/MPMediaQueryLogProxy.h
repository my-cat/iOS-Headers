/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPMediaQuery, NSMutableArray, NSString;

@interface MPMediaQueryLogProxy : NSObject
{
    MPMediaQuery *_target;
    MPMediaQuery *_baseObject;
    NSMutableArray *_loggedInvocations;
    NSString *_filePath;
}

- (void)flushLog;
- (void)writeLog;
- (void)createFilePath;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end

