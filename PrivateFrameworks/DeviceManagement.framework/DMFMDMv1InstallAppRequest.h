/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest {
    NSString * _VPNUUIDString;
    NSDictionary * _configuration;
    bool  _manage;
    unsigned long long  _managementOptions;
    NSString * _originator;
    NSString * _redemptionCode;
}

@property (nonatomic, copy) NSString *VPNUUIDString;
@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic) bool manage;
@property (nonatomic) unsigned long long managementOptions;
@property (nonatomic, copy) NSString *originator;
@property (nonatomic, copy) NSString *redemptionCode;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)VPNUUIDString;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)manage;
- (unsigned long long)managementOptions;
- (id)originator;
- (id)redemptionCode;
- (void)setConfiguration:(id)arg1;
- (void)setManage:(bool)arg1;
- (void)setManagementOptions:(unsigned long long)arg1;
- (void)setOriginator:(id)arg1;
- (void)setRedemptionCode:(id)arg1;
- (void)setVPNUUIDString:(id)arg1;

@end