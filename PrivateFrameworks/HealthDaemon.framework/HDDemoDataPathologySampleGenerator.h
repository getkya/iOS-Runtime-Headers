/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataPathologySampleGenerator : HDDemoDataBaseSampleGenerator {
    BOOL  _forcePEFR;
    double  _nextAsthmaAttackEndTime;
    double  _nextAsthmaAttackSampleTime;
    NSMutableDictionary * _nextSpirometrySampleTimes;
}

@property (nonatomic) BOOL forcePEFR;
@property (nonatomic) double nextAsthmaAttackEndTime;
@property (nonatomic) double nextAsthmaAttackSampleTime;
@property (nonatomic, retain) NSMutableDictionary *nextSpirometrySampleTimes;

- (void).cxx_destruct;
- (double)_computeSpirometryForDemoPerson:(id)arg1 atTime:(double)arg2 type:(int)arg3 computeLowerLimitOfNormality:(BOOL)arg4 height:(double)arg5;
- (BOOL)_isAsthmaAttackAllowedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)forcePEFR;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)inhalerUsageForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)nextAsthmaAttackEndTime;
- (double)nextAsthmaAttackSampleTime;
- (double)nextSpirometrySampleTimeFromType:(int)arg1;
- (id)nextSpirometrySampleTimes;
- (void)setForcePEFR:(BOOL)arg1;
- (void)setNextAsthmaAttackEndTime:(double)arg1;
- (void)setNextAsthmaAttackSampleTime:(double)arg1;
- (void)setNextSpirometrySampleTime:(double)arg1 forType:(int)arg2;
- (void)setNextSpirometrySampleTimes:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (id)spirometryForDemoPerson:(id)arg1 atTime:(double)arg2 type:(int)arg3;

@end