/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedDescriptor : NSObject <FCFeedAdMetadataProviding, FCFeedHeadlineSource, NSCopying> {
    <FCContentContext> * _context;
    int  _feedType;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *backingChannelID;
@property (nonatomic, readonly) NSString *backingSectionID;
@property (nonatomic, readonly) <FCTagProviding> *backingTag;
@property (nonatomic, readonly) NSString *backingTopicID;
@property (nonatomic, retain) <FCContentContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int feedFilterOptions;
@property (nonatomic, readonly, copy) NSArray *feedGroupEmitters;
@property (nonatomic, readonly) <FCFeedPaginating> *feedPaginator;
@property (nonatomic, readonly) int feedSortMethod;
@property (nonatomic) int feedType;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL hideAccessoryText;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) long long iAdContentProvider;
@property (nonatomic, readonly) NSString *iAdFeedID;
@property (nonatomic, readonly) NSString *iAdIdentifier;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly) NSString *iAdPrimaryAudience;
@property (nonatomic, readonly) NSString *iAdSectionID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL isSubscribable;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, copy) NSArray *offlineFeedGroupEmitters;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <FCFeedTheming> *theme;

- (void).cxx_destruct;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTag;
- (id)backingTopicID;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(BOOL)arg3 personalize:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (id)description;
- (BOOL)enableNotificationsWithSubscriptionController:(id)arg1 error:(id*)arg2;
- (int)feedFilterOptions;
- (id)feedGroupEmitters;
- (id)feedPaginator;
- (int)feedSortMethod;
- (int)feedType;
- (void)fetchHeadlinesWithContext:(id)arg1 forIdentifiers:(id)arg2 downloadAssets:(BOOL)arg3 qualityOfService:(int)arg4 completion:(id /* block */)arg5;
- (id)fetchOperationForHeadlinesWithIDs:(id)arg1 context:(id)arg2;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)arg1;
- (unsigned int)hash;
- (BOOL)hideAccessoryText;
- (id)iAdCategories;
- (long long)iAdContentProvider;
- (id)iAdFeedID;
- (id)iAdIdentifier;
- (id)iAdKeywords;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSubscribable;
- (BOOL)isSubscribedToWithSubscriptionController:(id)arg1;
- (id)latestHeadlineResultsWithContext:(id)arg1;
- (id)name;
- (id)offlineFeedGroupEmitters;
- (void)setContext:(id)arg1;
- (void)setFeedType:(int)arg1;
- (id)streamOfHeadlinesWithIDs:(id)arg1 context:(id)arg2 cachedOnly:(BOOL)arg3 maxCachedAge:(double)arg4;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (BOOL)subscribeToWithSubscriptionController:(id)arg1 error:(id*)arg2;
- (id)theme;
- (void)unsubscribeToWithSubscriptionController:(id)arg1;

@end