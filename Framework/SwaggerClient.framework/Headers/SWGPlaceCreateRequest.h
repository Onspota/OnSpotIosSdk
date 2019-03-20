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


#import "SWGLocation.h"
#import "SWGMarker.h"
#import "SWGRadio.h"
@protocol SWGLocation;
@class SWGLocation;
@protocol SWGMarker;
@class SWGMarker;
@protocol SWGRadio;
@class SWGRadio;



@protocol SWGPlaceCreateRequest
@end

@interface SWGPlaceCreateRequest : SWGObject

/* Place name (WiFi SSID) [optional]
 */
@property(nonatomic) NSString* name;

@property(nonatomic) SWGMarker* marker;

@property(nonatomic) NSArray<SWGRadio>* radioArray;

@property(nonatomic) NSString* radioArrayTime;

@property(nonatomic) SWGLocation* location;
/* Google's place id [optional]
 */
@property(nonatomic) NSString* googlePlaceId;
/* true if the place is active [optional]
 */
@property(nonatomic) NSNumber* isActive;

@property(nonatomic) NSString* floor;

@property(nonatomic) NSString* webSiteUrl;

@end
