/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLTrafficOcclusionProgram : VGLProgram  {
    int _uHalfWidth;
    float _halfWidth;
    int _uAlphaSlope;
    float _alphaSlope;
    int _uHalfAlphaSlope;
    float _halfAlphaSlope;
}

@property float halfWidth;
@property float alphaSlope;
@property float halfAlphaSlope;

+ (id)program;

- (id)init;
- (float)halfAlphaSlope;
- (void)setHalfAlphaSlope:(float)arg1;
- (float)alphaSlope;
- (void)setAlphaSlope:(float)arg1;
- (float)halfWidth;
- (void)setHalfWidth:(float)arg1;

@end