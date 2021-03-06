/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFListUnsubscribeDetector : NSObject {
    <MFMutableDictionaryProtocol> * _persistentDictionary;
}

- (id)_listIDString:(id)arg1;
- (id)_normalizedAddress:(id)arg1;
- (id)_persistentKeyForHeaders:(id)arg1;
- (id)_senderString:(id)arg1;
- (BOOL)_shouldIgnoreMessageWithHeaders:(id)arg1;
- (void)acceptSuggestion:(id)arg1;
- (void)dealloc;
- (void)ignoreSuggestion:(id)arg1;
- (id)init;
- (id)initWithMutableDictionary:(id)arg1;
- (void)removeAllPersistedSuggestions;
- (id)suggestionForMessage:(id)arg1;

@end
