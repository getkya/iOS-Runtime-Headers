/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchImageCell : SPUISearchStandardCell {
    NSOperation *_fetchImageOperation;
    UIImageView *_titleImageView;
}

@property (nonatomic, retain) NSOperation *fetchImageOperation;
@property (nonatomic, readonly) UIImageView *titleImageView;

+ (id)placeHolderImageForDomain:(unsigned int)arg1 result:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
+ (BOOL)supportsSection:(id)arg1 result:(id)arg2;

- (void).cxx_destruct;
- (id)constantConstraints;
- (id)fetchImageOperation;
- (float)imageWidth;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (float)leftTextMargin;
- (id)leftTextView;
- (id)leftView;
- (void)prepareForReuse;
- (void)setFetchImageOperation:(id)arg1;
- (id)titleImageView;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
- (id)variableConstraints;

@end