
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import "MCPBaseViewController.h"
#import "MCPPhotoEditResultViewController.h"
#import "MCPPhotoEditViewController.h"
#import "MCPPhotoGroupViewController.h"
#import "MCPPhotoSelectViewController.h"
#import "MCPResultInfo.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^MCPMicoupImagePickerCompletionHandler)(void);

@interface MCPMicoupImagePicker : NSObject <RCTBridgeModule>

- (void)showImagePickerWithOptions:(NSDictionary *)options;

@end
  
NS_ASSUME_NONNULL_END