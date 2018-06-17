#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* OnSpota API
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 1.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGBattery.h"
#import "SWGLocation.h"
#import "SWGMarker.h"
#import "SWGMobility.h"
#import "SWGRadio.h"
#import "SWGServerLastResponse.h"
@protocol SWGBattery;
@class SWGBattery;
@protocol SWGLocation;
@class SWGLocation;
@protocol SWGMarker;
@class SWGMarker;
@protocol SWGMobility;
@class SWGMobility;
@protocol SWGRadio;
@class SWGRadio;
@protocol SWGServerLastResponse;
@class SWGServerLastResponse;



@protocol SWGSearchRequest
@end

@interface SWGSearchRequest : SWGObject


@property(nonatomic) SWGMarker* marker;

@property(nonatomic) SWGLocation* location;

@property(nonatomic) NSArray<SWGRadio>* radioArray;

@property(nonatomic) SWGMobility* mobility;

@property(nonatomic) SWGBattery* battery;

@property(nonatomic) SWGServerLastResponse* serverLastResponse;

@property(nonatomic) NSString* radioArrayTime;

@property(nonatomic) NSString* country;

@property(nonatomic) NSString* floor;

@property(nonatomic) NSString* trigger;

@end
