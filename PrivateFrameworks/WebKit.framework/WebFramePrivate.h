/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebFrameBridge, WebFrameView, WebScriptDebugger;



@interface WebFramePrivate : NSObject 
{
    WebFrameView *webFrameView;
    WebFrameBridge *bridge;
    WebScriptDebugger *scriptDebugger;
    id internalLoadDelegate;
    BOOL isCommitting;
}


- (void)dealloc;
- (void)setWebFrameView:(id)arg1;

@end