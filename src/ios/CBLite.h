#import <Cordova/CDV.h>
#import "CBLManager.h"

@interface CBLite : CDVPlugin

@property (nonatomic, strong) CBLManager *dbmgr;

//UTIL
- (void)changesDatabase:(CDVInvokedUrlCommand*)urlCommand;
- (void)changesReplication:(CDVInvokedUrlCommand*)urlCommand;
- (void)compact:(CDVInvokedUrlCommand*)urlCommand;
- (void)info:(CDVInvokedUrlCommand*)urlCommand;
- (void)initDb:(CDVInvokedUrlCommand*)urlCommand;
- (void)lastSequence:(CDVInvokedUrlCommand*)urlCommand;
- (void)replicateFrom:(CDVInvokedUrlCommand*)urlCommand;
- (void)replicateTo:(CDVInvokedUrlCommand*)urlCommand;
- (void)reset:(CDVInvokedUrlCommand*)urlCommand;
- (void)stopReplication:(CDVInvokedUrlCommand*)urlCommand;
- (void)sync:(CDVInvokedUrlCommand*)urlCommand;
- (void)resetCallbacks:(CDVInvokedUrlCommand*)urlCommand;

//READ
- (void)allDocs:(CDVInvokedUrlCommand*)urlCommand;
- (void)get:(CDVInvokedUrlCommand*)urlCommand;
- (void)getDocRev:(CDVInvokedUrlCommand*)urlCommand;

//WRITE
- (void)putAttachment:(CDVInvokedUrlCommand*)urlCommand;
- (void)upsert:(CDVInvokedUrlCommand*)urlCommand;
@end