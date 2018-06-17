#import <Foundation/Foundation.h>
#import "SWGAccessToken.h"
#import "SWGAccountsListItem.h"
#import "SWGButtonCreateRequest.h"
#import "SWGButtonGetDetails.h"
#import "SWGButtonPutDetails.h"
#import "SWGButtonStoreCreateRequest.h"
#import "SWGButtonsListItem.h"
#import "SWGChangeAccountRequest.h"
#import "SWGErrorResponse.h"
#import "SWGImage.h"
#import "SWGInitPreferences.h"
#import "SWGLoginFacebookRequest.h"
#import "SWGLoginRequest.h"
#import "SWGMapDetails.h"
#import "SWGNearbyResponse.h"
#import "SWGNearbySpotsListItem.h"
#import "SWGPlaceCreateRequest.h"
#import "SWGPlaceGetDetails.h"
#import "SWGPlacePutDetails.h"
#import "SWGPlacesListItem.h"
#import "SWGPlacesSearchRequest.h"
#import "SWGRedirectInfo.h"
#import "SWGRegisterRequest.h"
#import "SWGSearchRequest.h"
#import "SWGSearchResponse.h"
#import "SWGSpotButtonCreateRequest.h"
#import "SWGSpotCreateRequest.h"
#import "SWGSpotGetDetails.h"
#import "SWGSpotPutDetails.h"
#import "SWGSpotSearchResponse.h"
#import "SWGSpotsListItem.h"
#import "SWGTokens.h"
#import "SWGUserInfo.h"
#import "SWGUserPutDetails.h"
#import "SWGApi.h"

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



@interface SWGDefaultApi: NSObject <SWGApi>

extern NSString* kSWGDefaultApiErrorDomain;
extern NSInteger kSWGDefaultApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// 
/// List all user accounts
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGAccountsListItem>*
-(NSURLSessionTask*) authAccountsWithCompletionHandler: 
    (void (^)(NSArray<SWGAccountsListItem>* output, NSError* error)) handler;


/// 
/// 
///
/// @param account 
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGAccessToken*
-(NSURLSessionTask*) authChangeAccountWithAccount: (SWGChangeAccountRequest*) account
    completionHandler: (void (^)(SWGAccessToken* output, NSError* error)) handler;


/// 
/// Returns user and account settings
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGUserInfo*
-(NSURLSessionTask*) authMeWithCompletionHandler: 
    (void (^)(SWGUserInfo* output, NSError* error)) handler;


/// 
/// 
///
/// @param body 
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGAccessToken*
-(NSURLSessionTask*) authTokenRefreshWithBody: (SWGTokens*) body
    completionHandler: (void (^)(SWGAccessToken* output, NSError* error)) handler;


/// 
/// Copy button
///
/// @param _id Button ID to copy
/// 
///  code:201 message:"Success"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) buttonCopyWithId: (NSString*) _id
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Creates new button
///
/// @param body button create definition
/// 
///  code:201 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) buttonCreateWithBody: (SWGButtonCreateRequest*) body
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Deletes existing account button
///
/// @param _id Button ID to delete
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) buttonDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves details for an account button
///
/// @param _id Button ID to retrieve
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) buttonGetWithId: (NSString*) _id
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Creates new store button
///
/// @param body button create definition
/// 
///  code:201 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) buttonStoreCreateWithBody: (SWGButtonStoreCreateRequest*) body
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Deletes existing account button
///
/// @param _id Button ID to delete
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) buttonStoreDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves details for an account button
///
/// @param _id Button ID to retrieve
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) buttonStoreGetWithId: (NSString*) _id
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Updates existing account button
///
/// @param _id Button ID to update
/// @param body New button data to replace an existing button
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) buttonStoreUpdateWithId: (NSString*) _id
    body: (SWGButtonPutDetails*) body
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Updates existing account button
///
/// @param _id Button ID to update
/// @param body New button data to replace an existing button
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) buttonUpdateWithId: (NSString*) _id
    body: (SWGButtonPutDetails*) body
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Bulk delete account buttons
///
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) buttonsDeleteWithBody: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves account buttons
///
/// @param _id  (optional)
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGButtonsListItem>*
-(NSURLSessionTask*) buttonsListWithId: (NSArray<NSString*>*) _id
    completionHandler: (void (^)(NSArray<SWGButtonsListItem>* output, NSError* error)) handler;


/// 
/// Bulk delete store buttons
///
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) buttonsStoreDeleteWithBody: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves store buttons
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGButtonsListItem>*
-(NSURLSessionTask*) buttonsStoreListWithCompletionHandler: 
    (void (^)(NSArray<SWGButtonsListItem>* output, NSError* error)) handler;


/// 
/// Register new user to the system
///
/// @param body Register with email and password
/// 
///  code:201 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGTokens*
-(NSURLSessionTask*) callRegisterWithBody: (SWGRegisterRequest*) body
    completionHandler: (void (^)(SWGTokens* output, NSError* error)) handler;


/// 
/// Retrieves account images
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGImage>*
-(NSURLSessionTask*) imagesGetWithCompletionHandler: 
    (void (^)(NSArray<SWGImage>* output, NSError* error)) handler;


/// 
/// Login with email and password
///
/// @param body Login with email and password
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGTokens*
-(NSURLSessionTask*) loginWithBody: (SWGLoginRequest*) body
    completionHandler: (void (^)(SWGTokens* output, NSError* error)) handler;


/// 
/// Login with facebook
///
/// @param body Login with facebook&#39;s access token
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGTokens*
-(NSURLSessionTask*) loginFacebookWithBody: (SWGLoginFacebookRequest*) body
    completionHandler: (void (^)(SWGTokens* output, NSError* error)) handler;


/// 
/// Logouts from user session
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) loginLogoutWithCompletionHandler: 
    (void (^)(NSError* error)) handler;


/// 
/// Retrieves map details
///
/// @param _id Map ID to retrieve
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGMapDetails*
-(NSURLSessionTask*) mapGetWithId: (NSString*) _id
    completionHandler: (void (^)(SWGMapDetails* output, NSError* error)) handler;


/// 
/// Query nearby spots and places in a certain GPS+radius
///
/// @param latitude  (optional)
/// @param longitude  (optional)
/// @param radius  (optional)
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGNearbyResponse*
-(NSURLSessionTask*) nearbyWithLatitude: (NSNumber*) latitude
    longitude: (NSNumber*) longitude
    radius: (NSNumber*) radius
    completionHandler: (void (^)(SWGNearbyResponse* output, NSError* error)) handler;


/// 
/// Creates new place
///
/// @param body Creates new place
/// 
///  code:201 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGPlaceGetDetails*
-(NSURLSessionTask*) placeCreateWithBody: (SWGPlaceCreateRequest*) body
    completionHandler: (void (^)(SWGPlaceGetDetails* output, NSError* error)) handler;


/// 
/// Deletes existing place
///
/// @param _id Place ID to delete
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) placeDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves details of an existing place
///
/// @param _id Place ID to retrieve
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGPlaceGetDetails*
-(NSURLSessionTask*) placeGetWithId: (NSString*) _id
    completionHandler: (void (^)(SWGPlaceGetDetails* output, NSError* error)) handler;


/// 
/// Upload an image to a place
///
/// @param _id Place ID to update
/// @param image image file to upload (optional)
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGPlaceGetDetails*
-(NSURLSessionTask*) placeImageUploadWithId: (NSString*) _id
    image: (NSURL*) image
    completionHandler: (void (^)(SWGPlaceGetDetails* output, NSError* error)) handler;


/// 
/// Updates existing place
///
/// @param _id Place ID to update
/// @param body Place model to replace the existing one
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGPlaceGetDetails*
-(NSURLSessionTask*) placeUpdateWithId: (NSString*) _id
    body: (SWGPlacePutDetails*) body
    completionHandler: (void (^)(SWGPlaceGetDetails* output, NSError* error)) handler;


/// 
/// Bulk activate places
///
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) placesActivateWithBody: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Bulk deactivate places
///
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) placesDeactivateWithBody: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Bulk delete places
///
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) placesDeleteWithBody: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves account places
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGPlacesListItem>*
-(NSURLSessionTask*) placesListWithCompletionHandler: 
    (void (^)(NSArray<SWGPlacesListItem>* output, NSError* error)) handler;


/// 
/// Retrieves place maps list items
///
/// @param _id Place ID to retrieve maps for
/// 
///  code:200 message:"Success"
///
/// @return NSArray<SWGMapDetails>*
-(NSURLSessionTask*) placesMapsListWithId: (NSString*) _id
    completionHandler: (void (^)(NSArray<SWGMapDetails>* output, NSError* error)) handler;


/// 
/// Retrieves list of places in range
///
/// @param body Requests list of places in range
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGPlacesListItem>*
-(NSURLSessionTask*) placesSearchWithBody: (SWGPlacesSearchRequest*) body
    completionHandler: (void (^)(NSArray<SWGPlacesListItem>* output, NSError* error)) handler;


/// 
/// Retrieves all spots from the given place
///
/// @param _id Place ID to retrieve spots for
/// 
///  code:200 message:"Success"
///
/// @return NSArray<SWGNearbySpotsListItem>*
-(NSURLSessionTask*) placesSpotsListWithId: (NSString*) _id
    completionHandler: (void (^)(NSArray<SWGNearbySpotsListItem>* output, NSError* error)) handler;


/// 
/// Retrieves app preferences
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGInitPreferences*
-(NSURLSessionTask*) prefsGetWithCompletionHandler: 
    (void (^)(SWGInitPreferences* output, NSError* error)) handler;


/// 
/// Get (redirect) new server address request.
///
/// @param appId Application&#39;s id.
/// 
///  code:200 message:"Success"
///
/// @return SWGRedirectInfo*
-(NSURLSessionTask*) redirectServerUrlWithAppId: (NSString*) appId
    completionHandler: (void (^)(SWGRedirectInfo* output, NSError* error)) handler;


/// 
/// Retrieve spots, places, notifications by markers and location
///
/// @param body Device physical context defined by WiFi, Bluetooth and GPS encapsulated in json
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGSearchResponse*
-(NSURLSessionTask*) searchWithBody: (SWGSearchRequest*) body
    completionHandler: (void (^)(SWGSearchResponse* output, NSError* error)) handler;


/// 
/// Ban a spot
///
/// @param _id Spot ID to ban
/// 
///  code:204 message:"Success"
///
/// @return void
-(NSURLSessionTask*) spotBanWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Creates new button on the spot
///
/// @param sid Spot ID from where to retrieve the buttons
/// @param body spot button create definition
/// 
///  code:201 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) spotButtonCreateWithSid: (NSString*) sid
    body: (SWGSpotButtonCreateRequest*) body
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Deletes existing button on a spot
///
/// @param sid The spot ID the button is attached to
/// @param bid Button ID to retrieve
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) spotButtonDeleteWithSid: (NSString*) sid
    bid: (NSString*) bid
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves details for a button from a spot
///
/// @param sid The spot ID the button is attached to
/// @param bid Button ID to retrieve
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) spotButtonGetWithSid: (NSString*) sid
    bid: (NSString*) bid
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Updates existing button on a spot
///
/// @param sid The spot ID the button is attached to
/// @param bid Button ID to retrieve
/// @param body New button on a spot data to replace an existing button on a spot
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGButtonGetDetails*
-(NSURLSessionTask*) spotButtonUpdateWithSid: (NSString*) sid
    bid: (NSString*) bid
    body: (SWGButtonPutDetails*) body
    completionHandler: (void (^)(SWGButtonGetDetails* output, NSError* error)) handler;


/// 
/// Bulk delete spot buttons
///
/// @param sid Spot ID from where to delete the buttons
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) spotButtonsDeleteWithSid: (NSString*) sid
    body: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves spot buttons
///
/// @param sid Spot ID from where to retrieve the buttons
/// @param _id  (optional)
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGButtonsListItem>*
-(NSURLSessionTask*) spotButtonsListWithSid: (NSString*) sid
    _id: (NSArray<NSString*>*) _id
    completionHandler: (void (^)(NSArray<SWGButtonsListItem>* output, NSError* error)) handler;


/// 
/// Update buttons list, can be used for reordering buttons
///
/// @param sid Spot ID where to patch the buttons
/// @param body spot button create definition (optional)
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) spotButtonsUpdateWithSid: (NSString*) sid
    body: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Copy spot
///
/// @param _id Spot ID to copy
/// 
///  code:201 message:"Success"
///
/// @return SWGSpotGetDetails*
-(NSURLSessionTask*) spotCopyWithId: (NSString*) _id
    completionHandler: (void (^)(SWGSpotGetDetails* output, NSError* error)) handler;


/// 
/// Creates new spot
///
/// @param spot 
/// 
///  code:201 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGSpotGetDetails*
-(NSURLSessionTask*) spotCreateWithSpot: (SWGSpotCreateRequest*) spot
    completionHandler: (void (^)(SWGSpotGetDetails* output, NSError* error)) handler;


/// 
/// Deletes existing spot
///
/// @param _id Spot ID to delete
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) spotDeleteWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Retrieves details of an existing spot
///
/// @param _id Spot ID to retrieve
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGSpotGetDetails*
-(NSURLSessionTask*) spotGetWithId: (NSString*) _id
    completionHandler: (void (^)(SWGSpotGetDetails* output, NSError* error)) handler;


/// 
/// Upload an image to a spot
///
/// @param _id Spot ID to update
/// @param image image file to upload (optional)
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGSpotGetDetails*
-(NSURLSessionTask*) spotImageUploadWithId: (NSString*) _id
    image: (NSURL*) image
    completionHandler: (void (^)(SWGSpotGetDetails* output, NSError* error)) handler;


/// 
/// Add an image to a spot
///
/// @param _id Spot ID to add image to
/// @param image image file to upload (optional)
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGImage*
-(NSURLSessionTask*) spotImagesAddWithId: (NSString*) _id
    image: (NSURL*) image
    completionHandler: (void (^)(SWGImage* output, NSError* error)) handler;


/// 
/// Bulk delete images
///
/// @param _id The image ID
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) spotImagesDeleteWithId: (NSString*) _id
    body: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Gets spot images
///
/// @param _id Spot ID to get images from
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGImage>*
-(NSURLSessionTask*) spotImagesListWithId: (NSString*) _id
    completionHandler: (void (^)(NSArray<SWGImage>* output, NSError* error)) handler;


/// 
/// Like a spot
///
/// @param _id Spot ID to like
/// 
///  code:204 message:"Success"
///
/// @return void
-(NSURLSessionTask*) spotLikeWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Pin a spot
///
/// @param _id Spot ID to pin
/// 
///  code:204 message:"Success"
///
/// @return void
-(NSURLSessionTask*) spotPinWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Unban a spot
///
/// @param _id Spot ID to unban
/// 
///  code:204 message:"Success"
///
/// @return void
-(NSURLSessionTask*) spotUnbanWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Unlike a spot
///
/// @param _id Spot ID to unlike
/// 
///  code:204 message:"Success"
///
/// @return void
-(NSURLSessionTask*) spotUnlikeWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Unpin a spot
///
/// @param _id Spot ID to unpin
/// 
///  code:204 message:"Success"
///
/// @return void
-(NSURLSessionTask*) spotUnpinWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Updates existing spot
///
/// @param _id Spot ID to update
/// @param body Spot model to replace the existing one
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGSpotGetDetails*
-(NSURLSessionTask*) spotUpdateWithId: (NSString*) _id
    body: (SWGSpotPutDetails*) body
    completionHandler: (void (^)(SWGSpotGetDetails* output, NSError* error)) handler;


/// 
/// Bulk activate spots
///
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) spotsActivateWithBody: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// List banned spots
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGSpotsListItem>*
-(NSURLSessionTask*) spotsBannedWithCompletionHandler: 
    (void (^)(NSArray<SWGSpotsListItem>* output, NSError* error)) handler;


/// 
/// Bulk deactivate spots
///
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) spotsDeactivateWithBody: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// Bulk delete spots
///
/// @param body 
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) spotsDeleteWithBody: (NSArray<NSString*>*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// List liked spots
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGSpotsListItem>*
-(NSURLSessionTask*) spotsLikedWithCompletionHandler: 
    (void (^)(NSArray<SWGSpotsListItem>* output, NSError* error)) handler;


/// 
/// Retrieves account spots
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGSpotsListItem>*
-(NSURLSessionTask*) spotsListWithCompletionHandler: 
    (void (^)(NSArray<SWGSpotsListItem>* output, NSError* error)) handler;


/// 
/// List pinned spots
///
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGSpotsListItem>*
-(NSURLSessionTask*) spotsPinnedWithCompletionHandler: 
    (void (^)(NSArray<SWGSpotsListItem>* output, NSError* error)) handler;


/// 
/// Retrieves related spots
///
/// @param sid Spot ID to get related spots to
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return NSArray<SWGSpotSearchResponse>*
-(NSURLSessionTask*) spotsRelatedListWithSid: (NSString*) sid
    completionHandler: (void (^)(NSArray<SWGSpotSearchResponse>* output, NSError* error)) handler;


/// 
/// Unregister this user from the system
///
/// 
///  code:204 message:"Success",
///  code:0 message:"Error"
///
/// @return void
-(NSURLSessionTask*) unregisterWithCompletionHandler: 
    (void (^)(NSError* error)) handler;


/// 
/// Update user profile settings
///
/// @param body  (optional)
/// 
///  code:200 message:"Success",
///  code:0 message:"Error"
///
/// @return SWGUserInfo*
-(NSURLSessionTask*) userUpdateWithBody: (SWGUserPutDetails*) body
    completionHandler: (void (^)(SWGUserInfo* output, NSError* error)) handler;



@end