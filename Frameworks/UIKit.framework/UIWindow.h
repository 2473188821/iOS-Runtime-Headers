/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, NSMutableArray, UIScreen, UIView, NSUndoManager, UIViewController, CALayer, UIColor, NSMutableSet;

@interface UIWindow : UIView  {
    id _delegate;
    float _windowLevel;
    float _windowSublevel;
    id _layerContext;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    UIResponder *_firstResponder;
    id _fingerInfo;
    id _touchData;
    int _viewOrientation;
    UIView *_exclusiveTouchView;
    NSUndoManager *_undoManager;
    UIScreen *_screen;
    CALayer *_transformLayer;
    NSMutableArray *_rotationViewControllers;
    UIViewController *_rootViewController;
    UIColor *_savedBackgroundColor;
    NSMutableSet *_subtreeMonitoringViews;
    struct { 
        unsigned int delegateWillRotate : 1; 
        unsigned int delegateDidRotate : 1; 
        unsigned int delegateWillAnimateFirstHalf : 1; 
        unsigned int delegateDidAnimationFirstHalf : 1; 
        unsigned int delegateWillAnimateSecondHalf : 1; 
        unsigned int autorotatesToPortrait : 1; 
        unsigned int autorotatesToPortraitUpsideDown : 1; 
        unsigned int autorotatesToLandscapeLeft : 1; 
        unsigned int autorotatesToLandscapeRight : 1; 
        unsigned int dontBecomeKeyOnOrderFront : 1; 
        unsigned int output : 1; 
        unsigned int inGesture : 1; 
        unsigned int cancelScroller : 1; 
        unsigned int bitsPerComponent : 4; 
        unsigned int autorotates : 1; 
        unsigned int isRotating : 1; 
        unsigned int isUsingOnePartRotationAnimation : 1; 
        unsigned int isHandlingContentRotation : 1; 
        unsigned int disableAutorotationCount : 4; 
        unsigned int needsAutorotationWhenReenabled : 1; 
        unsigned int forceTwoPartRotationAnimation : 1; 
        unsigned int orderKeyboardInAfterRotating : 1; 
        unsigned int roundedCorners : 4; 
        unsigned int resizesToFullScreen : 1; 
        unsigned int keepContextInBackground : 1; 
        unsigned int ignoreSetHidden : 1; 
        unsigned int forceVisibleOnInit : 1; 
        unsigned int settingFirstResponder : 1; 
    } _windowFlags;
    id _windowController;
}

@property(retain) UIScreen * screen;
@property float windowLevel;
@property(getter=isKeyWindow,readonly) BOOL keyWindow;
@property(retain) UIViewController * rootViewController;

+ (id)_findWithDisplayPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (void*)createScreenIOSurface;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
+ (void)_popKeyWindow;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_setKeyWindowStackEnabled:(BOOL)arg1;
+ (unsigned int)_keyWindowStackSize;
+ (void)_clearKeyWindowStack;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (void)setAllWindowsKeepContextInBackground:(BOOL)arg1;
+ (Class)layerClass;
+ (void*)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 usePurpleGfx:(BOOL)arg4 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg5;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)_hitTestToPoint:(struct CGPoint { float x1; float x2; })arg1 pathIndex:(int)arg2 forEvent:(id)arg3;
+ (void)_prepareWindowsForAppResume;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (void)_prepareWindowsForAppSuspend;
+ (void)_noteStatusBarHeightChanged:(float)arg1 oldHeight:(float)arg2;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawing;
+ (id)keyWindow;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
+ (struct __IOSurface { }*)newCreatedScreenIOSurface;

- (void)setDelegate:(id)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_matchDeviceBounds;
- (BOOL)_isTextEffectsWindow;
- (void)matchDeviceOrientation;
- (void)updateForOrientation:(int)arg1;
- (id)_subtreeMonitorsForView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (void)setKeepContextInBackground:(BOOL)arg1;
- (void)setResizesToFullScreen:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_transformDisplayToWindowCoordinates:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setCancelScroller:(BOOL)arg1;
- (void*)createIOSurface;
- (BOOL)_becomeFirstResponderWhenPossible;
- (id)_firstResponder;
- (BOOL)_isSettingFirstResponder;
- (void)_setIsSettingFirstResponder:(BOOL)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_unregisterSwipeView:(id)arg1;
- (void)_registerSwipeView:(id)arg1;
- (void)_unregisterChargedView:(id)arg1;
- (void)_registerChargedView:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)synchronizeDrawingWithID:(int)arg1 count:(unsigned int)arg2;
- (BOOL)isUsingOnePartRotationAnimation;
- (BOOL)autorotates;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_forceTwoPartRotationAnimation:(BOOL)arg1;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2;
- (void)setAutorotates:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_clearPendingKeyboardChanges;
- (void)_removeRotationViewController:(id)arg1;
- (void)_addRotationViewController:(id)arg1;
- (void)_slideFooterFromOrientation:(int)arg1 toOrientation:(int)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)setBecomeKeyOnOrderFront:(BOOL)arg1;
- (float)level;
- (struct CGPoint { float x1; float x2; })convertDeviceToWindow:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertWindowToDevice:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_containedInAbsoluteResponderChain;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { float x1; float x2; })arg1;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (void)makeKey:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (BOOL)_disableViewScaling;
- (BOOL)_hasContext;
- (BOOL)_isClassicControllerWindow;
- (void)_tagAsSpringboardPresentationWindow;
- (void)setContentView:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void*)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (BOOL)_isStatusBarWindow;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)rootViewController;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (BOOL)isKeyWindow;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)contentView;
- (int)_degreesToRotateFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2 fenceID:(int)arg3 animation:(int)arg4;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2;
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg1;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (BOOL)isInterfaceAutorotationDisabled;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg1;
- (BOOL)_isAnyWindowRotating;
- (BOOL)isRotating;
- (id)_clientsForRotation;
- (id)_rotationViewControllers;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(int)arg4;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(int)arg3;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_sendGesturesForEvent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (BOOL)_isScrollingEnabledForView:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (void)_updateToInterfaceOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)makeKeyWindow;
- (void)_setHidden:(BOOL)arg1 forced:(BOOL)arg2;
- (void)addRootViewControllerViewIfPossible;
- (void)_destroyContext;
- (void)setLevel:(float)arg1;
- (BOOL)_disableEdgeAntialiasing;
- (BOOL)_disableGroupOpacity;
- (BOOL)_ignoresHitTest;
- (int)windowOutput;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (id)screen;
- (BOOL)resizesToFullScreen;
- (void)awakeFromNib;
- (void)_setLayerHidden:(BOOL)arg1;
- (void)_commonInit;
- (int)bitsPerComponent;
- (void)_createContext;
- (BOOL)keepContextInBackground;
- (void)_updateTransformLayer;
- (id)_window;
- (void)endDisablingInterfaceAutorotation;
- (void)beginDisablingInterfaceAutorotation;
- (void)_setExclusiveTouchView:(id)arg1;
- (id)_exclusiveTouchView;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })warpPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isInternalWindow;
- (float)windowLevel;
- (BOOL)_isWindowServerHostingManaged;
- (id)defaultFirstResponder;
- (void)_endModalSession;
- (void)_beginModalSession;
- (id)_touchData;
- (id)representation;
- (void)synchronizeDrawingWithID:(int)arg1;
- (void)sendEvent:(id)arg1;
- (int)interfaceOrientation;
- (unsigned int)_contextId;
- (void)_orderFrontWithoutMakingKey;
- (void)setWindowLevel:(float)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)firstResponder;
- (id)nextResponder;
- (void)setRootViewController:(id)arg1;
- (void)makeKeyAndVisible;
- (BOOL)_clearMouseView;
- (id)undoManager;
- (id)delegate;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)copyIOSurfaceSnapshotView:(int)arg1;
- (struct __IOSurface { }*)newCreatedIOSurface;
- (id)removeTouchCaptureViewWithTag:(int)arg1;
- (id)addTouchCaptureViewWithTag:(int)arg1;

@end