/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKPlayerInternal, NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation {
    unsigned long long _context;
    NSDate *_date;
    NSString *_formattedValue;
    NSString *_groupLeaderboardIdentifier;
    NSString *_leaderboardIdentifier;
    GKPlayerInternal *_player;
    unsigned int _rank;
    long long _value;
    BOOL _valueSet;
}

@property(retain) NSString * category;
@property unsigned long long context;
@property(retain) NSDate * date;
@property(retain) NSString * formattedValue;
@property(retain) NSString * groupCategory;
@property(retain) NSString * groupLeaderboardIdentifier;
@property(retain) NSString * leaderboardIdentifier;
@property(retain) GKPlayerInternal * player;
@property(retain) NSString * playerID;
@property unsigned int rank;
@property long long value;
@property BOOL valueSet;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (id)category;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)formattedValue;
- (id)groupCategory;
- (id)groupLeaderboardIdentifier;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)leaderboardIdentifier;
- (id)player;
- (id)playerID;
- (unsigned int)rank;
- (id)serverRepresentation;
- (void)setCategory:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setFormattedValue:(id)arg1;
- (void)setGroupCategory:(id)arg1;
- (void)setGroupLeaderboardIdentifier:(id)arg1;
- (void)setLeaderboardIdentifier:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setValue:(long long)arg1;
- (void)setValueSet:(BOOL)arg1;
- (long long)value;
- (BOOL)valueSet;

@end