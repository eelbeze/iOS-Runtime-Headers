/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSSet, CKService, CKSubConversation, NSTimer, NSMutableSet, NSDate, NSArray;

@interface CKAggregateConversation : _CKConversation <CKConversationProtocol> {
    NSMutableSet *_subConversations;
    NSMutableSet *_services;
    CKSubConversation *_firstConversation;
    CKService *_userRequestedService;
    NSTimer *_recalculateDowngradeStateTimer;
    int _downgradeState;
    BOOL _ignoreDowngradeStatusUpdates;
    BOOL _bulkAddingConversations;
    NSDate *_cachedDate;
    NSArray *_cachedMessages;
    CKService *_cachedPreferredService;
}

@property(retain) CKService * userRequestedService;
@property(readonly) CKService * preferredService;
@property(readonly) CKSubConversation * preferredConversation;
@property(readonly) BOOL isStale;
@property(readonly) NSSet * services;
@property(readonly) NSSet * subConversations;


- (id)messages;
- (BOOL)isPlaceholder;
- (int)unreadCount;
- (unsigned int)recipientCount;
- (id)recipient;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (int)propertyType;
- (id)shortDescription;
- (id)uniqueIdentifier;
- (int)identifier;
- (id)name;
- (BOOL)isEmpty;
- (id)date;
- (id)preferredConversation;
- (id)preferredConversationCreate:(BOOL)arg1;
- (void)subConversationMarkedAsRead;
- (void)subConversationDowngradeStateDidChange:(id)arg1;
- (id)services;
- (void)_notifyConversationAdded;
- (id)_initWithUpdatesDisabled:(BOOL)arg1 containedConversations:(id)arg2 va_list:(void*)arg3;
- (BOOL)isStale;
- (id)_subConversationForService:(id)arg1 create:(BOOL)arg2;
- (void)_invalidateCaches;
- (void)_invalidateDowngradeState;
- (id)_preferredConversationCreate:(BOOL)arg1;
- (void)_setupPreferredServiceChangeHandlers;
- (id)_preferredServiceWithCreateConversation:(BOOL)arg1;
- (BOOL)isDowngraded;
- (id)_bestExistingConversation;
- (void)_invalidatePreferredServiceCache;
- (void)removeAllMessages;
- (void)loadLastMessage;
- (id)placeholderMessage;
- (void)_calculateDowngradeState;
- (void)_calculateDowngradeStateTimerFired;
- (void)_updateDowngradeState:(int)arg1 checkAgainInterval:(double)arg2;
- (id)_comparableObjectsFromEntityArray:(id)arg1;
- (void)beginBatchUpdates;
- (void)endBatchUpdates;
- (id)latestIncomingMessage;
- (void)resetPendingMessages;
- (void)setLimitToLoad:(int)arg1;
- (void)subConversationDidChange:(BOOL)arg1;
- (void)_postChangeUpdate:(BOOL)arg1;
- (id)pendingMessages;
- (BOOL)hasUnreadMessages;
- (unsigned int)recipientsHash;
- (BOOL)isAggregatableWithConversation:(id)arg1;
- (void)addSubConversation:(id)arg1;
- (id)initWithUpdatesDisabled:(BOOL)arg1 containedConversations:(id)arg2;
- (id)subConversations;
- (void)reloadStaleSubconversations;
- (id)groupIDs;
- (int)compareByDateDescending:(id)arg1;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)removeSubConversation:(id)arg1;
- (id)initWithContainedConversations:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)markAllMessagesAsRead;
- (void)setUnsentComposition:(id)arg1;
- (id)service;
- (BOOL)containsConversation:(id)arg1;
- (id)subConverationForService:(id)arg1 create:(BOOL)arg2;
- (id)incomingTypingMessage;
- (id)outgoingTypingMessage;
- (id)preferredService;
- (id)aggregateConversation;
- (id)unsentComposition;
- (void*)abRecord;
- (id)latestMessage;
- (void)loadAllMessages;
- (void)addPlaceholderMessageIfNeededWithDate:(id)arg1;
- (BOOL)moreMessagesToLoad;
- (id)userRequestedService;
- (void)setUserRequestedService:(id)arg1;
- (int)addMessage:(id)arg1 incrementUnreadCount:(BOOL)arg2;
- (void)updateRecipients:(id)arg1;
- (void)loadMoreMessages;
- (void)removeMessage:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)deleteAllMessages;
- (id)groupID;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)resetCaches;

@end