/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSectionedCollection : NSObject <NSCopying, NSMutableCopying> {
    NSArray * _sectionedItems;
    NSArray * _sections;
}

@property (nonatomic, readonly) id firstItem;
@property (nonatomic, readonly) id firstSection;
@property (nonatomic, readonly) id lastItem;
@property (nonatomic, readonly) id lastSection;
@property (nonatomic, readonly) int totalItemCount;

- (void).cxx_destruct;
- (void)_initializeAsEmptySectionedCollection;
- (id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(id /* block */)arg2 isUpdatedBlock:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)enumerateItemIdentifiersUsingBlock:(id /* block */)arg1;
- (void)enumerateItemsInSectionAtIndex:(int)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionIdentifiersUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)firstItem;
- (id)firstSection;
- (int)globalIndexForIndexPath:(id)arg1;
- (BOOL)hasSameContentAsSectionedCollection:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(int)arg1;
- (id)indexPathForGlobalIndex:(int)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsInSectionAtIndex:(int)arg1;
- (id)lastItem;
- (id)lastSection;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (id)sectionAtIndex:(int)arg1;
- (int)totalItemCount;

@end