/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty
{
    double value;
    int unitType;
}

+ (id)cssStringValue:(double)arg1 unit:(int)arg2;
- (id)initWithNumber:(double)arg1;
- (id)initWithNumber:(double)arg1 unit:(int)arg2;
- (double)value;
- (int)intValue;
- (int)unitType;
- (int)compareValue:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)cssString;

@end
