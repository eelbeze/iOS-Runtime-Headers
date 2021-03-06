/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardPopoverAffordance : UIView <UIGestureRecognizerDelegate> {
    UIView * _button;
    UIView * _dragArea;
    UILongPressGestureRecognizer * _pressRecogniser;
    BOOL  _pressed;
    UITapGestureRecognizer * _tapRecogniser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) UIView *dragArea;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (id)dragArea;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
