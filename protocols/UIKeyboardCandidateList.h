/* Generated by RuntimeBrowser.
 */

@protocol UIKeyboardCandidateList <NSObject>

@required

- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (TIKeyboardCandidate *)currentCandidate;
- (unsigned int)currentIndex;
- (BOOL)hasCandidates;
- (BOOL)isExtendedList;
- (TIKeyboardBehaviors *)keyboardBehaviors;
- (unsigned int)selectedSortIndex;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id <UIKeyboardCandidateListDelegate>)arg1;
- (BOOL)showCandidate:(TIKeyboardCandidate *)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (NSString *)statisticsIdentifier;

@optional

- (TIKeyboardCandidateResultSet *)candidates;
- (void)candidatesDidChange;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)hasNextPage;
- (BOOL)hasPreviousPage;
- (NSString *)inlineText;
- (void)jumpToCompositions;
- (void)revealHiddenCandidates;
- (TIKeyboardSecureCandidateRenderTraits *)secureCandidateRenderTraits;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 type:(int)arg2 inlineText:(NSString *)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setCompletionContext:(NSString *)arg1;
- (void)setInlineText:(NSString *)arg1;
- (void)showCaret:(BOOL)arg1 gradually:(BOOL)arg2;
- (unsigned int)viewOffsetForCandidateAtIndex:(unsigned int)arg1;

@end
