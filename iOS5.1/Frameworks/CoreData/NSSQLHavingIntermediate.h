/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate
{
    NSSQLWhereIntermediate *_whereClause;
}

- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (void)dealloc;
- (BOOL)isHavingScoped;
- (id)generateSQLStringInContext:(id)arg1;

@end

