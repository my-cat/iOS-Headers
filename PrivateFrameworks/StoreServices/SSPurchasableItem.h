/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject
{
    NSDictionary *_propertyValues;
    NSString *_tableName;
    SSSQLiteDatabase *_database;
}

+ (id)allPropertyKeys;
+ (id)sortByDatePurchasedKey;
+ (id)databaseTable;
- (long long)storeID;
- (BOOL)isHidden;
- (id)datePurchased;
- (long long)accountUniqueIdentifier;
- (long long)pid;
- (id)description;
- (id)propertyValues;
- (void)dealloc;
- (id)initWithPropertyValues:(id)arg1;

@end
