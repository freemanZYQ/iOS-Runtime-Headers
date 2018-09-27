/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USWebUsageReport : NSObject <NSSecureCoding> {
    NSString * _domainIdentifier;
    double  _totalUsageTime;
    NSDictionary * _webUsageByDomain;
}

@property (readonly, copy) NSString *domainIdentifier;
@property (readonly) double totalUsageTime;
@property (readonly, copy) NSDictionary *webUsageByDomain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 totalUsageTime:(double)arg2 webUsageByDomain:(id)arg3;
- (double)totalUsageTime;
- (id)webUsageByDomain;

@end