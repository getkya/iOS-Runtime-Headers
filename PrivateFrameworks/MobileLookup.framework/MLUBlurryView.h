/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

@interface MLUBlurryView : UIView {
    BOOL _hasActivated;
    BOOL _shouldRasterizeForTransition;
}

@property float blurRadius;
@property (nonatomic) BOOL shouldRasterizeForTransition;

- (void)_activateBlurring;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (float)blurRadius;
- (void)setBlurRadius:(float)arg1;
- (void)setShouldRasterizeForTransition:(BOOL)arg1;
- (BOOL)shouldRasterizeForTransition;

@end