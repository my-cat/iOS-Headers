//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFileLogger.h"

@class NSString;

@interface SBSimplePreferenceFileLogger : SBFileLogger
{
    _Bool _enabled;
}

- (void)reloadFromDefaults;
@property(readonly, nonatomic) NSString *logPreferenceName;
@property(readonly, nonatomic) NSString *logPreferenceDomain;
- (_Bool)isEnabled;

@end
