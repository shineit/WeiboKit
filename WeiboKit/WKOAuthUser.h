//
//  WKOAuthUser.h
//  WeiboKit
//
//  Created by Paul Wood on 8/15/12.
//  Copyright (c) 2012 Paul Wood. All rights reserved.
//

#import "WKUser.h"

@interface WKOAuthUser : WKUser

extern NSString *const kWKCurrentUserChangedNotificationName;

@property (nonatomic, strong) NSString *accessToken;
@property NSUInteger expires_in;

+ (WKOAuthUser *)currentUser;
+ (void)setCurrentUser:(WKOAuthUser *)user;

@end
