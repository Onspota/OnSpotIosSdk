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


#import "SWGEvent.h"
#import "SWGPlacesListItem.h"
#import "SWGSearchPreferences.h"
#import "SWGSpotSearchResponse.h"
@protocol SWGEvent;
@class SWGEvent;
@protocol SWGPlacesListItem;
@class SWGPlacesListItem;
@protocol SWGSearchPreferences;
@class SWGSearchPreferences;
@protocol SWGSpotSearchResponse;
@class SWGSpotSearchResponse;



@protocol SWGSearchResponse
@end

@interface SWGSearchResponse : SWGObject

/* spots nearby [optional]
 */
@property(nonatomic) NSArray<SWGSpotSearchResponse>* spots;
/* places nearby [optional]
 */
@property(nonatomic) NSArray<SWGPlacesListItem>* places;
/* new events [optional]
 */
@property(nonatomic) NSArray<SWGEvent>* events;

@property(nonatomic) SWGSearchPreferences* preferences;

@end
