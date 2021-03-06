//
//  BookPriceComparisonViewController.h
//  bookhelper
//
//  Created by Luke on 6/24/11.
//  Copyright 2011 Geeklu.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBProgressHUD.h"

@interface BookPriceComparisonViewController : UIViewController<UIWebViewDelegate> {

	UIWebView *priceWebView;

	NSString *subjectId;		
	MBProgressHUD *HUD;
	NSString *connectionUUID;
}
@property(nonatomic,retain)IBOutlet UIWebView *priceWebView;
@property(nonatomic,copy) NSString *subjectId;

- (void)didGetPriceHTML:(NSDictionary *)userInfo;

@end
