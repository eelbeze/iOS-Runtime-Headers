/* Generated by RuntimeBrowser.
 */

@protocol TSWPDataDetectorProtocol <NSObject>

@required

+ (struct _NSRange { unsigned int x1; unsigned int x2; })calculateScanRangeForString:(NSString *)arg1 changedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (NSString *)detectorIdentifier;
+ (NSArray *)scanString:(NSString *)arg1 scanRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end
