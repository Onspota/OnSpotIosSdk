OnSpot@ SDK for iOS (Version 1.0.2)
========================================

# Information
OnSpot@ SDK for iOS is a client to the OnSpota server scanning the device sensors and responding with events about surrounding spots. 
The library is distributed as an iOS framework.

# iOS SDK requirements

The minimum iOS version for the SDK is 11.0.

## Capabilities

Background modes - Location updates, Background fetch.

## Application Setup

For geo-location and beacon scanning you need to add the location description tags to the info.plist file:
Privacy - Location Always Usage Description
Privacy - Motion Usage Description
Privacy - Location Always and When In Use Usage Description

Add the following Required background modes:
App downloads content from the network
App registers for location updates


# Installation

## Cocoapods

Add the following line to your podfile:

pod 'OnSpotSdk'


# Using

1. Request your AppID by support@onspota.com

2. Initialize the tracker on your application delegate :

		onSpotTracker.initTracker("474a93a9-d543-4d52-9ca5-4b431905dcd1")

3. Add background fetch support:

	func application(_ application: UIApplication, performFetchWithCompletionHandler completionHandler: @escaping (UIBackgroundFetchResult) -> Void) {
		onSpotTracker.resumeTracker();
		completionHandler(UIBackgroundFetchResult.newData);
	}

4. Start the SDK by simply creating a SDK object and calling one of its 'start' methods:

public SdkResult start(String userId); // Uses the application id from the app's manifest.
public SdkResult start(String userId, String appId); // Uses the provided application-id.

Application can always stop the SDK by invoking the 'stop' method from any incatce of the OnspotaApi class.


        // Replace 'MyUserId' with the user's user-id allocated by YOUR service.
	// Replace "MyAppId" with the App ID provided to you by onspota (this is an optional parameter)
        // Replace myContext with the current context (use 'this' when starting the sdk from Activity, Service, etc.)
         // See our demo app for more details.
         OnspotaApi.SdkResult sdkResult = new OnspotaApi(myContext).start("MyUserId", "MyAppId");

                    if (sdkResult == OnspotaApi.SdkResult.Ok) {
                        // SDK was started.
                    }
                    else if (sdkResult == OnspotaApi.SdkResult.AndroidVersionNotSupported) {
                        Log.w(TAG,"OnSpota SDK doesn't support current android os");
                    }
                    else if (sdkResult == OnspotaApi.SdkResult.FailedToFind3rdPartyLib) {
                        Log.e(TAG,"Critical error: OnSpota SDK Failed to find at least one of its required dependencies.");
                    }
                    else if (sdkResult == OnspotaApi.SdkResult.Failed) {
                        Log.e(TAG,"OnSpota SDK Failed to start.");
                    }
		

5. Register listener for search responses by onspotasdk

		@Override
		public void onResume() {
		    super.onResume();
		    registerReceiver(mEventReceiver, new IntentFilter(getString(com.onspota.sdk.R.string.intent_search)));
		}
		
		@Override
		public void onPause() {
		    super.onPause();
		    unregisterReceiver(mEventReceiver);
		}

6. Obtain a SearchResponse object by the received Intent
            
		public void onReceive(Context context, Intent intent) {
				SearchResponse searchResponse = (SearchResponse) intent.getSerializableExtra(getString(com.onspota.sdk.R.string.intent_search_response));

7. Retrieve surrounding spots, places and incoming events by the SearchResponse object

		List<PlacesListItem> places = searchResponse.getPlaces();
		List<SpotSearchResponse> spots = searchResponse.getSpots();
		List<Event> events = searchResponse.getEvents();
		
		
8. Add location context to custom events:

OnSpota SDK supports geo-analytic feature that adds location context to app custom events such as button click, screen view, etc. This features enables app owners to understand location asspects of their users interations (e.g app usage inside and near stores and user home). Using this feature is done by invoking the '#sendEvent' method of OnspotaApi object:
	
	mOnspotaSdk = new OnspotaApi(myContext);
	.
	. do something
	.
	mOnspotaSdk.sendEvent(new OnspotaSdk.appEvent(ID, category, label));
		
ID is the only mandatory value.
*this function is still not released


# Behaviour

The service for objects scanning starts when you call the 'start' method of the SDK.
The service will be automatically restarted when device is rebooted in response of BOOT_COMPLETED intent.
The periods the service performs scans and execute requests to OnSpot server are smartly controlled by server based on multiple parameters including proximity to the surrounding objects, device movement, power status, user behavior and others. 

Application can always stop the SDK by invoking the 'stop' method from any incatnce of the OnspotaApi class.

# REST Responce

OnSpot@ offers the option to send data on REST to a designated server. The server should be identified and confirmed during your account creation process. 

1. Pass/On/Off events

[POST] https://SERVER_URL
```python
{
    "timestamp": "",    # UTC time, ISO 8601 (event detection time)
    "app_id": "",       # string  (your app id with onspot, you may run more then one app with the same REST service)
    "object_type": "",  # string (S - Spot, G - Geofence, P - Place)
    "object_uuid": "",  # string (Onspot object id)
    "object_name": "",  # string (Human Readable object name)
    "user_id": "",      # string  (Your internal user id, in case provided by the app to Onspot@ SDK)
    "event_type": "",   # string, (PASS, ON, OFF)
    "elapsed_time": 0,  # in seconds
}
```

Copyright (c) 2018 OnSpot@ AG. All rights reserved.
