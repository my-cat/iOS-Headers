//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebPolicyDecisionListener.h"

@class WebPolicyDecisionListenerPrivate;

__attribute__((visibility("hidden")))
@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener>
{
    WebPolicyDecisionListenerPrivate *_private;
}

- (void)download;
- (void)ignore;
- (void)use;
- (void)_invalidate;
- (void)_usePolicy:(int)arg1;
- (void)dealloc;
- (id)_initWithTarget:(id)arg1 action:(SEL)arg2;

@end

