/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTextMessagePartChatItem : CKMessagePartChatItem

@property (nonatomic, readonly) BOOL containsHyperlink;
@property (nonatomic, readonly, copy) NSAttributedString *subject;
@property (nonatomic, readonly, copy) NSAttributedString *text;

- (id)_attributedTextWithTextColor:(id)arg1;
- (id)_time;
- (Class)balloonViewClass;
- (id)composition;
- (BOOL)containsHyperlink;
- (Class)impactBalloonViewClass;
- (id)loadTranscriptText;
- (id)pasteboardItems;
- (id)sendAnimationText;
- (BOOL)shouldUseBigEmoji;
- (id)subject;
- (id)text;

@end
