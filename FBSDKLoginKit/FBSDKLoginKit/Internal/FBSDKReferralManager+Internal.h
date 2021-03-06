/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#if !TARGET_OS_TV

#ifdef BUCK
 #import <FBSDKLoginKit/FBSDKReferralManager.h>
#else
 #import "FBSDKReferralManager.h"
#endif

#if FBSDK_SWIFT_PACKAGE
 #import <FBSDKCoreKit.h>
#else
 #import <FBSDKCoreKit/FBSDKCoreKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface FBSDKReferralManager () <FBSDKURLOpening>

@end

NS_ASSUME_NONNULL_END

#endif
