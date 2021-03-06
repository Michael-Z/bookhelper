//
//  BookDetailViewController.h
//  bookhelper
//
//  Created by Luke on 6/24/11.
//  Copyright 2011 Geeklu.com. All rights reserved.
//
#import "BookPriceComparisonViewController.h"
#import "DoubanBook.h"
#import "BookReviewsViewController.h"
#import "MBProgressHUD.h"
@interface BookDetailViewController : UIViewController {
	
	MBProgressHUD *HUD;
	UITableView *detailTableView;
	NSString *isbn;
	DoubanBook *book;
	BOOL isRecord;
	NSString *connectionUUID;
	
	NSArray *bookItemNames;
	NSArray *bookItemImageNames;
	
	//UIImageView *coverView;
	
	
}
@property(nonatomic,retain) IBOutlet UITableView *detailTableView;

@property(nonatomic,copy)NSString *isbn;
@property(nonatomic,retain)DoubanBook *book;
@property(nonatomic,assign)BOOL isRecord;

- (void)didGetDoubanBook:(NSDictionary *)userInfo;
@end
