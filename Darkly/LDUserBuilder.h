//
//  Copyright © 2015 Catamorphic Co. All rights reserved.
//


#import "LDUserModel.h"

@interface LDUserBuilder : NSObject

/**
 * A key to the user builder to identify the user. If this key
 * is not provided, one will be auto-generated. (Optional)
 */
@property (nonatomic, copy, nullable) NSString *key;

/**
 * The IP address of the user. (Optional)
 */
@property (nonatomic, copy, nullable) NSString *ip;

/**
 * The country of the user. (Optional)
 */
@property (nonatomic, copy, nullable) NSString *country;

/**
 * The full name of the user. (Optional)
 */
@property (nonatomic, copy, nullable) NSString *name;

/**
 * The first name of the user. (Optional)
 */
@property (nonatomic, copy, nullable) NSString *firstName;

/**
 * The last name of the user. (Optional)
 */
@property (nonatomic, copy, nullable) NSString *lastName;

/**
 * The email address of the user. (Optional)
 */
@property (nonatomic, copy, nullable) NSString *email;

/**
 * The avatar of the user. (Optional)
 */
@property (nonatomic, copy, nullable) NSString *avatar;

/**
 * The custom NSMutableDictionary data for the dictionary associated with
 * the user. (Optional)
 */
@property (nonatomic, strong, nullable) NSMutableDictionary *customDictionary;

/**
 * Provide whether the user is anonymous. Note, if a key is
 * auto-generated for the user, then anonymous is set to YES. Default
 * is NO. (Optional)
 */
@property (nonatomic) BOOL isAnonymous;

/**
 * Provide custom String data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputKey    key for the data
 * @param value    value for the data
 */
- (void)customString:(nonnull NSString *)inputKey value:(nonnull NSString *)value;

/**
 * Provide custom BOOL data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputKey    key for the data
 * @param value    value for the data
 */
- (void)customBool:(nonnull NSString *)inputKey value:(BOOL)value;

/**
 * Provide custom NSNumber data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputKey    key for the data
 * @param value    value for the data
 */
- (void)customNumber:(nonnull NSString *)inputKey value:(nonnull NSNumber *)value;

/**
 * Provide custom NSArray data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputKey    key for the data
 * @param value    value for the data
 */
- (void)customArray:(nonnull NSString *)inputKey value:(nonnull NSArray *)value;


-(nonnull LDUserModel *)build;

+ (nonnull LDUserModel *)compareNewBuilder:(nonnull LDUserBuilder *)iBuilder withUser:(nonnull LDUserModel *)iUser;
+ (nonnull LDUserBuilder *)currentBuilder:(nonnull LDUserModel *)iUser;

+ (nonnull LDUserBuilder *)retrieveCurrentBuilder:(nonnull LDUserModel *)iUser __deprecated_msg("User `currentBuilder:` instead");

/**
 * Provide a key to the user builder to identify the user. If this key
 * is not provided, one will be auto-generated. (Optional)
 *
 * @param key    the key for the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withKey:(nonnull NSString *)key __deprecated_msg("Pass value directly to `key` instead");
/**
 * Provide the ip address of the user. (Optional)
 *
 * @param ip    the ip of the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withIp:(nullable NSString *)ip __deprecated_msg("Pass value directly to `ip` instead");
/**
 * Provide the country of the user. (Optional)
 *
 * @param country    the country of the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withCountry:(nullable NSString *)country __deprecated_msg("Pass value directly to `country` instead");
/**
 * Provide the name of the user. (Optional)
 *
 * @param name    the name of the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withName:(nullable NSString *)name __deprecated_msg("Pass value directly to `name` instead");

/**
 * Provide the name of the user. (Optional)
 *
 * @param name    the name of the user
 * @return the user builder
 */
- (LDUserBuilder *)withName:(NSString *)name;
/**
 * Provide the first name of the user. (Optional)
 *
 * @param firstName    the firstName of the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withFirstName:(nullable NSString *)firstName __deprecated_msg("Pass value directly to `firstName` instead");
/**
 * Provide the last name of the user. (Optional)
 *
 * @param lastName    the lastName of the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withLastName:(nullable NSString *)lastName __deprecated_msg("Pass value directly to `lastName` instead");
/**
 * Provide the email address of the user. (Optional)
 *
 * @param email    the email of the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withEmail:(nullable NSString *)email __deprecated_msg("Pass value directly to `email` instead");
/**
 * Provide the avatar of the user. (Optional)
 *
 * @param avatar    the avatar of the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withAvatar:(nullable NSString *)avatar __deprecated_msg("Pass value directly to `avatar` instead");
/**
 * Provide custom String data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputKey    key for the data
 * @param value    value for the data
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withCustomString:(nullable NSString *)inputKey value:(nullable NSString *)value __deprecated_msg("Use `customString:value` instead");
/**
 * Provide custom BOOL data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputKey    key for the data
 * @param value    value for the data
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withCustomBool:(nullable NSString *)inputKey value:(BOOL)value __deprecated_msg("Use `customBool:value` instead");
/**
 * Provide custom NSNumber data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputKey    key for the data
 * @param value    value for the data
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withCustomNumber:(nullable NSString *)inputKey value:(nullable NSNumber *)value __deprecated_msg("Use `customNumber:value` instead");
/**
 * Provide custom NSArray data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputKey    key for the data
 * @param value    value for the data
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withCustomArray:(nullable NSString *)inputKey value:(nullable NSArray *)value __deprecated_msg("Use `customArray:value` instead");
/**
 * Provide custom NSMutableDictionary data for the dictionary associated with
 * the user. (Optional)
 *
 * @param inputDictionary Dictionary to associated with the user
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withCustomDictionary:(nullable NSMutableDictionary *)inputDictionary __deprecated_msg("Pass value directly to `customDictionary` instead");
/**
 * Provide whether the user is anonymous. Note, if a key is
 * auto-generated for the user, then anonymous is set to YES. Default
 * is NO. (Optional)
 *
 * @param anonymous    whether user is anonymous
 * @return the user builder
 */
- (nonnull LDUserBuilder *)withAnonymous:(BOOL)anonymous __deprecated_msg("Pass value directly to `isAnonymous` instead");

@end
