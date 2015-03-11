/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDate, NSString, PHQuery;

@interface PHCollectionList : PHCollection {
    id _childCollectionsSortingComparator;
    long long _collectionListSubtype;
    long long _collectionListType;
    NSArray *_collections;
    NSDate *_endDate;
    unsigned long long _estimatedChildCollectionCount;
    NSArray *_localizedLocationNames;
    NSString *_localizedTitle;
    int _plAlbumKind;
    PHQuery *_query;
    NSDate *_startDate;
    NSString *_transientIdentifier;
    unsigned long long _unreadAssetCollectionsCount;
}

@property(copy,readonly) id childCollectionsSortingComparator;
@property(readonly) long long collectionListSubtype;
@property(readonly) long long collectionListType;
@property(readonly) NSArray * collections;
@property(readonly) NSDate * endDate;
@property(readonly) unsigned long long estimatedChildCollectionCount;
@property(readonly) NSArray * localizedLocationNames;
@property(readonly) PHQuery * query;
@property(readonly) NSDate * startDate;
@property(readonly) NSString * transientIdentifier;
@property(readonly) unsigned long long unreadAssetCollectionsCount;

+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)arg1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2;

- (void).cxx_destruct;
- (bool)canContainCollections;
- (bool)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (id)childCollectionsSortingComparator;
- (bool)collectionHasFixedOrder;
- (long long)collectionListSubtype;
- (long long)collectionListType;
- (id)collections;
- (id)description;
- (id)endDate;
- (unsigned long long)estimatedChildCollectionCount;
- (id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)pl_assetContainerList;
- (id)query;
- (id)startDate;
- (id)transientIdentifier;
- (unsigned long long)unreadAssetCollectionsCount;

@end