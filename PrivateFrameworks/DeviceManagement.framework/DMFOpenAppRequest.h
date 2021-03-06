/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFOpenAppRequest : CATTaskRequest {
    NSData * _activityData;
    NSString * _activityType;
    NSString * _bundleIdentifier;
}

@property (nonatomic, copy) NSData *activityData;
@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityData;
- (id)activityType;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActivityData:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;

@end
