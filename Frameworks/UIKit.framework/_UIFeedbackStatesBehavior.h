/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackStatesBehavior : UIFeedbackGenerator {
    BOOL  _approachActivated;
    NSString * _currentState;
    _UIFeedback<_UIFeedbackContinuousPlayable> * _playingContinuousFeedback;
}

@property (getter=_approachActivated, setter=_setApproachActivated:, nonatomic) BOOL approachActivated;
@property (nonatomic, retain) NSString *currentState;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;
@property (getter=_statesConfiguration, nonatomic, readonly) _UIFeedbackStatesBehaviorConfiguration *statesConfiguration;

+ (Class)_configurationClass;
+ (id)behaviorWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
+ (id)statesBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (id)statesBehaviorWithStyle:(int)arg1 coordinateSpace:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_approachActivated;
- (id)_configurationFromState:(id)arg1 toState:(id)arg2;
- (void)_setApproachActivated:(BOOL)arg1;
- (id)_statesConfiguration;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (id)currentState;
- (id)playingContinuousFeedback;
- (void)setCurrentState:(id)arg1;
- (void)setPlayingContinuousFeedback:(id)arg1;
- (void)transitionToState:(id)arg1 ended:(BOOL)arg2;
- (void)transitionToState:(id)arg1 updated:(float)arg2;

@end
