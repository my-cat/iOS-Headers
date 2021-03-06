//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPUCellConfiguration : NSObject
{
}

+ (BOOL)wantsScrollViewDidEndDecelerating;
+ (BOOL)wantsScrollViewDidScroll;
+ (float)expandedTableViewCellHeight;
+ (float)tableViewCellHeight;
+ (Class)tableViewCellClass;
+ (id)tableViewCellBackgroundColor;
+ (int)tableViewSeparatorStyle;
+ (struct UIEdgeInsets)tableViewSeparatorInset;
+ (id)tableViewSeparatorColor;
+ (id)tableViewBackgroundColor;
+ (void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2;
+ (void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2;
+ (void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned int)arg3;
+ (void)willDisplayCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned int)arg3;
+ (void)configureView:(id)arg1 asynchronously:(BOOL)arg2 forEntity:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)reuseIdentifier;
+ (id)mediaEntityPropertiesToFetch;
+ (void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;

@end

