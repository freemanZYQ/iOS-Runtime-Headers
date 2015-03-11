/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@class NSString;

@interface PBBProtoPerformanceResult : PBCodable <NSCopying> {
    struct { 
        unsigned int timeDelta : 1; 
        unsigned int timeEnded : 1; 
        unsigned int timeStarted : 1; 
    NSString *_activityType;
    } _has;
    NSString *_identifier;
    double _timeDelta;
    double _timeEnded;
    double _timeStarted;
}

@property(retain) NSString * activityType;
@property(readonly) bool hasActivityType;
@property(readonly) bool hasIdentifier;
@property bool hasTimeDelta;
@property bool hasTimeEnded;
@property bool hasTimeStarted;
@property(retain) NSString * identifier;
@property double timeDelta;
@property double timeEnded;
@property double timeStarted;

- (void).cxx_destruct;
- (id)activityType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityType;
- (bool)hasIdentifier;
- (bool)hasTimeDelta;
- (bool)hasTimeEnded;
- (bool)hasTimeStarted;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setHasTimeDelta:(bool)arg1;
- (void)setHasTimeEnded:(bool)arg1;
- (void)setHasTimeStarted:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTimeDelta:(double)arg1;
- (void)setTimeEnded:(double)arg1;
- (void)setTimeStarted:(double)arg1;
- (double)timeDelta;
- (double)timeEnded;
- (double)timeStarted;
- (void)writeTo:(id)arg1;

@end