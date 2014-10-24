//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUAvalancheStackView, PUBackgroundColorView, PUPhotoDecoration, PUTextBannerView, PUVideoBannerView, UIImage, UIImageView, UIView;

@interface PUPhotoViewContentHelper : NSObject
{
    PUBackgroundColorView *_photoDecorationBorderView;
    PUBackgroundColorView *_photoDecorationOverlayView;
    PUVideoBannerView *_videoBannerView;
    BOOL _hasTransform;
    BOOL _isVideoBannerVisible;
    BOOL _isTextBannerVisible;
    BOOL _avoidsImageViewIfPossible;
    BOOL _flattensVideoBanner;
    BOOL _avoidsPhotoDecoration;
    BOOL _needsAvalancheStack;
    UIView *_contentView;
    int _fillMode;
    UIImage *_photoImage;
    PUPhotoDecoration *_photoDecoration;
    float _avalancheMaxPixelSize;
    struct CGColor *_avalancheStackBackgroundColor;
    unsigned int _videoSubtypes;
    PUTextBannerView *_textBannerView;
    UIImageView *_photoImageView;
    UIImageView *__crossfadeImageView;
    PUAvalancheStackView *_avalancheStackView;
    struct CGSize _photoSize;
    double _videoDuration;
    struct CGAffineTransform _imageTransform;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillMode:(int)arg3;
+ (struct CGRect)_imageContentFrameForBounds:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 fillMode:(int)arg3;
@property(retain, nonatomic) PUAvalancheStackView *avalancheStackView; // @synthesize avalancheStackView=_avalancheStackView;
@property(retain, nonatomic) UIImageView *_crossfadeImageView; // @synthesize _crossfadeImageView=__crossfadeImageView;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(readonly, nonatomic) PUTextBannerView *textBannerView; // @synthesize textBannerView=_textBannerView;
@property(readonly, nonatomic) unsigned int videoSubtypes; // @synthesize videoSubtypes=_videoSubtypes;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) struct CGColor *avalancheStackBackgroundColor; // @synthesize avalancheStackBackgroundColor=_avalancheStackBackgroundColor;
@property(nonatomic) float avalancheMaxPixelSize; // @synthesize avalancheMaxPixelSize=_avalancheMaxPixelSize;
@property(nonatomic) BOOL needsAvalancheStack; // @synthesize needsAvalancheStack=_needsAvalancheStack;
@property(nonatomic) BOOL avoidsPhotoDecoration; // @synthesize avoidsPhotoDecoration=_avoidsPhotoDecoration;
@property(nonatomic) BOOL flattensVideoBanner; // @synthesize flattensVideoBanner=_flattensVideoBanner;
@property(nonatomic) BOOL avoidsImageViewIfPossible; // @synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible;
@property(copy, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
@property(nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property(nonatomic) int fillMode; // @synthesize fillMode=_fillMode;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isTextBannerVisible) BOOL textBannerVisible; // @synthesize textBannerVisible=_isTextBannerVisible;
@property(readonly, nonatomic, getter=isVideoBannerVisible) BOOL videoBannerVisible; // @synthesize videoBannerVisible=_isVideoBannerVisible;
- (void).cxx_destruct;
- (void)animateCrossfadeToImage:(id)arg1;
- (void)layoutSubviewsOfContentView;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)_updatePhotoDecoration;
- (void)_updateTextBannerView;
- (void)_updateVideoBannerView;
- (void)_updateSubviewOrdering;
- (void)_updateContentViewClipsToBounds;
- (void)_updateImageView;
@property(readonly, nonatomic) UIView *videoBannerContainerView;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;
- (void)setVideoBannerVisible:(BOOL)arg1 videoDuration:(double)arg2 videoSubtypes:(unsigned int)arg3;
@property(readonly, nonatomic) struct CGRect imageContentFrame;
- (struct CGRect)imageContentFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect)arg1;
- (id)initWithContentView:(id)arg1;

@end
