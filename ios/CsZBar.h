#import <Cordova/CDV.h>

#import "ZBarSDK.h"
#import <WebKit/WebKit.h>

@interface CsZBar : CDVPlugin <ZBarReaderDelegate>

- (void)scan: (CDVInvokedUrlCommand*)command;
- (void)toggleflash;




@end
