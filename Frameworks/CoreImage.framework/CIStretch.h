/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIStretch : CIFilter  {
    CIImage *inputImage;
    CIVector *inputPoint;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputPoint;

+ (id)customAttributes;

- (id)inputPoint;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputPoint:(id)arg1;

@end