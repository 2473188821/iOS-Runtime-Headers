/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathTableCellExpression : SCRCMathRowExpression {
    unsigned int _columnIndex;
    BOOL _didGetTablePosition;
    unsigned int _rowIndex;
    unsigned int _tableColumnCount;
    unsigned int _tableRowCount;
}

- (void)_getTableDataIfNecessary;
- (id)_prefixForCell;
- (id)_suffixForCell;
- (id)mathMLTag;
- (id)prefixForChildAtIndex:(unsigned int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)suffixForChildAtIndex:(unsigned int)arg1;

@end