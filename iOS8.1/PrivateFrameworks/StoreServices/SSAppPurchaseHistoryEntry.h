//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
{
}

+ (id)predicateForNotHidden;
+ (id)predicateForNotFirstParty;
+ (id)predicateForAccountIdentifier:(id)arg1;
+ (id)supportsPlatformPredicate:(BOOL)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)databaseTable;

@end

