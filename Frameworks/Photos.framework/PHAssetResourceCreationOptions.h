/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceCreationOptions : NSObject <NSCopying> {
    NSString * _originalFilename;
    BOOL  _shouldMoveFile;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, copy) NSString *originalFilename;
@property (nonatomic) BOOL shouldMoveFile;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)originalFilename;
- (id)propertyListRepresentation;
- (void)setOriginalFilename:(id)arg1;
- (void)setShouldMoveFile:(BOOL)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (BOOL)shouldMoveFile;
- (id)uniformTypeIdentifier;

@end
