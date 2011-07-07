//
//  BookReviewsViewController.h
//  bookhelper
//
//  Created by Luke on 7/3/11.
//  Copyright 2011 Taobao.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ContinuousTableView.h"
#import "PromptModalView.h"

@interface BookReviewsViewController : UIViewController {
	IBOutlet ContinuousTableView *reviewTableView;

	PromptModalView *loadingView;

	NSMutableArray *reviews;
	NSString *isbn;
	NSInteger totalResults;
	NSInteger startIndex;
}

@property(nonatomic,copy) NSString *isbn;

- (void)didGetBookReviews:(NSDictionary *)userInfo;
- (void)loadMore;
@end
