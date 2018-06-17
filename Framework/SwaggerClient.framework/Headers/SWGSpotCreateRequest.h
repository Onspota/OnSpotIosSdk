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


#import "SWGActivationPeriod.h"
#import "SWGActivationRangeType.h"
#import "SWGLocation.h"
#import "SWGMarker.h"
#import "SWGRadio.h"
#import "SWGSpotLayoutType.h"
#import "SWGSpotType.h"
#import "SWGTemplateType.h"
#import "SWGVisibilityType.h"
@protocol SWGActivationPeriod;
@class SWGActivationPeriod;
@protocol SWGActivationRangeType;
@class SWGActivationRangeType;
@protocol SWGLocation;
@class SWGLocation;
@protocol SWGMarker;
@class SWGMarker;
@protocol SWGRadio;
@class SWGRadio;
@protocol SWGSpotLayoutType;
@class SWGSpotLayoutType;
@protocol SWGSpotType;
@class SWGSpotType;
@protocol SWGTemplateType;
@class SWGTemplateType;
@protocol SWGVisibilityType;
@class SWGVisibilityType;



@protocol SWGSpotCreateRequest
@end

@interface SWGSpotCreateRequest : SWGObject

/* The name of the spot 
 */
@property(nonatomic) NSString* name;
/* Spot description [optional]
 */
@property(nonatomic) NSString* _description;
/* true if the spot is active 
 */
@property(nonatomic) NSNumber* isActive;

@property(nonatomic) SWGTemplateType* templateType;

@property(nonatomic) SWGMarker* marker;

@property(nonatomic) SWGActivationRangeType* activationRange;

@property(nonatomic) SWGActivationPeriod* activationPeriod;

@property(nonatomic) SWGVisibilityType* visibilityType;

@property(nonatomic) SWGSpotLayoutType* layoutType;

@property(nonatomic) SWGSpotType* type;

@property(nonatomic) NSArray<SWGRadio>* radioArray;

@property(nonatomic) NSString* radioArrayTime;
/* An array of place id where the spot will be active [optional]
 */
@property(nonatomic) NSArray<NSString*>* places;

@property(nonatomic) SWGLocation* location;
/* An array of countries the spot will be active [optional]
 */
@property(nonatomic) NSArray<NSString*>* countries;

@property(nonatomic) NSString* floor;

@end
