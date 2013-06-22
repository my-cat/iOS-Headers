/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface SBAssistantGuideDomainListCell : UITableViewCell
{
    id <SBAssistantGuideDomainListCellDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_tagPhraseLabel;
    UILabel *_domainNameLabel;
    UIImageView *_chevronView;
    UIImageView *_separator;
}

+ (float)rowHeight;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDomainName:(id)arg1;
- (void)setTagPhrase:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(nonatomic) id <SBAssistantGuideDomainListCellDelegate> delegate; // @synthesize delegate=_delegate;

@end
