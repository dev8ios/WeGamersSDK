#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AuthKit.h"
#import "CommunityKit.h"
#import "GameLiveKit.h"
#import "GameReplayKit.h"

FOUNDATION_EXPORT double WeGamersSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char WeGamersSDKVersionString[];

