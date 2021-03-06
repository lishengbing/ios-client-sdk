//
//  CacheableEnvironmentFlags.swift
//  LaunchDarkly
//
//  Created by Mark Pokorny on 3/19/19. +JMJ
//  Copyright © 2019 Catamorphic Co. All rights reserved.
//

import Foundation

//Data structure used to cache feature flags for a specific user from a specific environment
struct CacheableEnvironmentFlags {
    enum CodingKeys: String, CodingKey {
        case userKey, mobileKey, featureFlags
    }

    let userKey: String
    let mobileKey: String
    let featureFlags: [LDFlagKey: FeatureFlag]

    init(userKey: String, mobileKey: String, featureFlags: [LDFlagKey: FeatureFlag]) {
        (self.userKey, self.mobileKey, self.featureFlags) = (userKey, mobileKey, featureFlags)
    }

    var dictionaryValue: [String: Any] {
        return [CodingKeys.userKey.rawValue: userKey,
                CodingKeys.mobileKey.rawValue: mobileKey,
                CodingKeys.featureFlags.rawValue: featureFlags.dictionaryValue.withNullValuesRemoved]
    }

    init?(dictionary: [String: Any]) {
        guard let userKey = dictionary[CodingKeys.userKey.rawValue] as? String,
            let mobileKey = dictionary[CodingKeys.mobileKey.rawValue] as? String,
            let featureFlags = (dictionary[CodingKeys.featureFlags.rawValue] as? [String: Any])?.flagCollection
        else {
            return nil
        }
        self.init(userKey: userKey, mobileKey: mobileKey, featureFlags: featureFlags)
    }

    init?(object: Any) {
        guard let dictionary = object as? [String: Any]
        else {
            return nil
        }
        self.init(dictionary: dictionary)
    }
}

extension CacheableEnvironmentFlags: Equatable {
    static func == (lhs: CacheableEnvironmentFlags, rhs: CacheableEnvironmentFlags) -> Bool {
        return lhs.userKey == rhs.userKey
            && lhs.mobileKey == rhs.mobileKey
            && lhs.featureFlags == rhs.featureFlags
    }
}
