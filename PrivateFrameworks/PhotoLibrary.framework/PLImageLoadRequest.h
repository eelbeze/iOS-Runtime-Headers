/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableSet, PLImageSource;



@interface PLImageLoadRequest : NSObject 
{
    id _object;
    PLImageSource *_source;
    NSMutableSet *_queues;
    NSInteger _priority;
}

@property NSInteger priority;


- (void)setPriority:(NSInteger)arg1;
- (BOOL)isImageLoadingQueueRegistered:(id)arg1;
- (void)deregisterImageLoadingQueue:(id)arg1;
- (BOOL)someImageLoadingQueuesRegistered;
- (void)registerImageLoadingQueue:(id)arg1;
- (id)initWithObject:(id)arg1 source:(id)arg2 priority:(NSInteger)arg3;
- (void)notifyImageLoadingQueuesOfImageAvailability:(id)arg1;
- (NSInteger)priority;
- (id)object;
- (id)source;
- (id)description;
- (void)dealloc;

@end