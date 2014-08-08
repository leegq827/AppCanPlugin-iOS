//
//  EUExDownloaderMgr.h
//  webKitCorePalm
//
//  Created by zywx on 11-11-1.
//  Copyright 2011 3g2win. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EUExBase.h"

#define UEX_DOWNLOAD_DOWNLOADING	0
#define UEX_DOWNLOAD_FINISH			1
#define UEX_DOWNLOAD_FAIL			2

@interface EUExDownloaderMgr:EUExBase{
	NSMutableDictionary *downObjDict;
}

@property(nonatomic,retain)NSMutableDictionary *downObjDict;
-(void)uexSuccessWithOpId:(int)inOpId fileSize:(int)inFileSize percent:(int)inPercent status:(int)inStatus;
@end
