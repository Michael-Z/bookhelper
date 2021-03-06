//
//  BarCodeScannerViewController.h
//  bookhelper
//
//  Created by Luke on 6/25/11.
//  Copyright 2011 Geeklu.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZBarSDK.h"
#import <AVFoundation/AVAudioPlayer.h>
#import "BookDetailViewController.h"
#import "DoubanConnector.h"
#import "LoadingViewController.h"
@interface BarCodeScannerViewController : UIViewController<ZBarReaderDelegate> {
	ZBarReaderViewController *barReaderViewController;
	//扫描成功之后的声音
	AVAudioPlayer *beep;
	BOOL isScannerAvailable;

}
- (void)initBarReaderViewController;
- (void)initAudio;
- (void)playBeep;
@end
