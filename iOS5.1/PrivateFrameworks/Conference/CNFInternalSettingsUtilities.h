/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CNFInternalSettingsUtilities : NSObject
{
}

+ (BOOL)isViceroyLoggingEnabled;
+ (void)setViceroyLoggingEnabled:(BOOL)arg1;
+ (BOOL)isConferenceConsoleLoggingEnabled;
+ (void)setConferenceConsoleLoggingEnabled:(BOOL)arg1;
+ (void)killImagent;
+ (void)syncImagentLogSettings;
+ (void)killMediaServerd;
+ (void)killEverything;
+ (void)nukeKeychain;
+ (id)currentInternalSettingsBundle;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;

@end

