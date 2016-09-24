/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying> {
    int  _dsId;
    struct { 
        unsigned int dsId : 1; 
    }  _has;
    NSString * _languageCode;
    NSString * _userStorefrontId;
}

@property (nonatomic) int dsId;
@property (nonatomic) BOOL hasDsId;
@property (nonatomic, readonly) BOOL hasLanguageCode;
@property (nonatomic, readonly) BOOL hasUserStorefrontId;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *userStorefrontId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)dsId;
- (BOOL)hasDsId;
- (BOOL)hasLanguageCode;
- (BOOL)hasUserStorefrontId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDsId:(int)arg1;
- (void)setHasDsId:(BOOL)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setUserStorefrontId:(id)arg1;
- (id)userStorefrontId;
- (void)writeTo:(id)arg1;

@end