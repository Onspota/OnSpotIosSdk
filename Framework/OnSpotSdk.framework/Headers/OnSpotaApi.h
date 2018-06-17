//
//  OnSpotaApi.h
//  OnSpota
//
//  Created by Tomer Lavi on 06/02/2018.
//  Copyright © 2018 onspota. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OnSpotaApi : NSObject

@property NSString* apiKey;

- (void) callSearchApi:(NSDictionary *)params completionHandler:(void (^)(NSDictionary* result))completionHandler;

@end
