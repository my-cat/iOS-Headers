/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject
{
    BOOL _holdQueue;
    id _delegate;
    id _target;
    NSMutableArray *_queue;
    NSMutableArray *_options;
    NSProtocolChecker *_protocolChecker;
    double _dequeueRate;
}

@property(readonly, nonatomic) BOOL holdQueue; // @synthesize holdQueue=_holdQueue;
@property(readonly, nonatomic) NSProtocolChecker *protocolChecker; // @synthesize protocolChecker=_protocolChecker;
@property(readonly, nonatomic) NSMutableArray *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(nonatomic) double dequeueRate; // @synthesize dequeueRate=_dequeueRate;
@property id target; // @synthesize target=_target;
@property id delegate; // @synthesize delegate=_delegate;
- (id)peek;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned int count;
- (void)invokeAll;
- (void)removeAllInvocations;
- (id)_dequeueInvocation;
- (int)_enqueueInvocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_insertInvocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_replaceSimilarInvocation:(id)arg1;
- (BOOL)_acceptsOptions:(unsigned int)arg1;
- (int)_maxQueueLimitSize;
- (int)_numberOfLimitedMessagesInQueue;
- (unsigned int)_optionsForInvocation:(id)arg1;
- (void)_checkQueue;
- (BOOL)_invokeInvocation:(id)arg1;
- (void)_setQueueTimer;
- (void)_releaseQueueNotification:(id)arg1;
- (void)_holdQueueNotification:(id)arg1;
- (void)_stepQueueNotification:(id)arg1;
@property(retain, nonatomic) Protocol *protocol;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)init;

@end
