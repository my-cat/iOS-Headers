/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, WebView;

// Not exported
@interface WebInspectorWindowController : NSObject
{
    WebView *_inspectedWebView;
    struct WebInspectorFrontendClient *_frontendClient;
    struct WebInspectorClient {
        void **;
        void **;
        id;
        struct RetainPtr<WebNodeHighlighter>;
        struct Page *;
        struct RetainPtr<WebInspectorWindowController> {
            struct WebInspectorWindowController *;
        };
        int;
        id;
        struct WebInspectorFrontendClient *;
    } *_inspectorClient;
    _Bool _destroyingInspectorView;
    WebView *_webView;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) WebView *webView; // @synthesize webView=_webView;
- (void)destroyInspectorView:(_Bool)arg1;
- (WebInspectorClient_507d6387 *)inspectorClient;
- (void)setInspectorClient:(WebInspectorClient_507d6387 *)arg1;
- (void)setFrontendClient:(struct WebInspectorFrontendClient *)arg1;
- (void)dealloc;
- (id)initWithInspectedWebView:(id)arg1;
- (id)init;

@end

