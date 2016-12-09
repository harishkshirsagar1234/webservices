//
//  NewsTableViewController.h
//  webservice
//
//  Created by Felix-ITS 012 on 07/11/16.
//  Copyright © 2016 Felix-Harish. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewsTableViewController : UITableViewController<NSURLConnectionDelegate,NSURLConnectionDataDelegate>

@property(nonatomic,retain)NSMutableArray *newsarray;
@property(nonatomic,retain)NSMutableData *buffer;



@end
