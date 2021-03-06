//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSTimer, SKUIItemOfferButton, UIImageView, UILabel, UIView, _UIDocumentPickerContainerItem, _UIDocumentPickerDocumentTableViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentTableCell : UITableViewCell
{
    _UIDocumentPickerDocumentTableViewController *_weak_tableView;
    BOOL _isContainer;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _UIDocumentPickerContainerItem *_item;
    SKUIItemOfferButton *_cloudButton;
    NSTimer *_progressTimer;
    id _progressSubscriber;
    UIView *_iconCenteringView;
}

+ (struct CGSize)thumbnailSize;
@property(retain, nonatomic) UIView *iconCenteringView; // @synthesize iconCenteringView=_iconCenteringView;
@property(retain, nonatomic) id progressSubscriber; // @synthesize progressSubscriber=_progressSubscriber;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) SKUIItemOfferButton *cloudButton; // @synthesize cloudButton=_cloudButton;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)updateForDownloadStatus;
- (void)startDownload:(id)arg1;
- (void)reloadItem:(BOOL)arg1;
- (void)updateProgress:(id)arg1;
@property(nonatomic) __weak _UIDocumentPickerDocumentTableViewController *tableView;
- (void)dealloc;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

