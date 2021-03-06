/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSingleTagFeedGroupEmitter : NSObject <FCFeedGroupEmitting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isRequiredByFollowingEmitters;
@property (nonatomic, readonly) BOOL requiresForYouCatchUpOperation;
@property (readonly) Class superclass;

- (BOOL)canMergeGroupsUnconditionally;
- (Class)classForGroupEmittingOperation;
- (id)groupEmitterIdentifier;
- (id)operationToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;

@end
