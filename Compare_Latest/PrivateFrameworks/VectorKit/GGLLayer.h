//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAEAGLLayer.h"

@class NSObject<GGLRenderQueueSource>;

__attribute__((visibility("hidden")))
@interface GGLLayer : CAEAGLLayer
{
    unsigned int _renderBuffer;
    unsigned int _depthBuffer;
    unsigned int _frameBuffer;
    BOOL _forceCreateRenderTarget;
    BOOL _readPixels;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    shared_ptr_3f8cd81b _renderer;
    id <GGLLayerDisruptor> _renderDisruptor;
    struct CGSize _backingSize;
    NSObject<GGLRenderQueueSource> *_renderSource;
}

@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property id <GGLLayerDisruptor> renderDisruptor; // @synthesize renderDisruptor=_renderDisruptor;
@property NSObject<GGLRenderQueueSource> *renderSource; // @synthesize renderSource=_renderSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setContentsScale:(float)arg1;
- (void)setReadPixels;
- (void)drawWithTimestamp:(double)arg1;
- (void)_deleteBuffers;
- (void)_createRenderTarget;
- (void)layoutSublayers;
@property(readonly) struct GLRenderer *renderer;
- (void)dealloc;
- (id)initWithRenderer:(shared_ptr_3f8cd81b)arg1;

@end
