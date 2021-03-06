/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCTFrame : NSObject {
    BOOL  _allowTruncation;
    const struct __CTFrame { } * _frame;
    PXCTFramesetter * _framesetter;
    NSArray * _lines;
    unsigned int  _maximumLineCount;
    struct CGPoint { 
        float x; 
        float y; 
    }  _origin;
    BOOL  _prepared;
    BOOL  _truncated;
}

@property (nonatomic, readonly) BOOL allowTruncation;
@property (nonatomic, readonly) const struct __CTFrame { }*frame;
@property (nonatomic, readonly) PXCTFramesetter *framesetter;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, readonly) unsigned int maximumLineCount;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } origin;
@property (getter=isTruncated, nonatomic, readonly) BOOL truncated;

- (void).cxx_destruct;
- (BOOL)_truncateLine:(inout const struct __CTLine {}**)arg1 withOrigin:(inout struct CGPoint { float x1; float x2; }*)arg2 referenceAttributedString:(inout id*)arg3 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (BOOL)allowTruncation;
- (void)dealloc;
- (const struct __CTFrame { }*)frame;
- (id)framesetter;
- (id)init;
- (id)initWithFrame:(struct __CTFrame { }*)arg1 maximumLineCount:(unsigned int)arg2 allowTruncation:(BOOL)arg3 framesetter:(id)arg4;
- (BOOL)isTruncated;
- (id)lines;
- (unsigned int)maximumLineCount;
- (struct CGPoint { float x1; float x2; })origin;
- (void)prepare;

@end
