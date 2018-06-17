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





@protocol SWGAccountsListItem
@end

@interface SWGAccountsListItem : SWGObject

/* Account id [optional]
 */
@property(nonatomic) NSString* _id;
/* Account name [optional]
 */
@property(nonatomic) NSString* name;
/* Account's avatar image [optional]
 */
@property(nonatomic) NSString* thumbnail;

@end