//
//  FAEventDetailsViewController.h
//  FinApp
//
//  Class that manages the view showing details of the selected event.
//
//  Created by Sidd Singh on 10/21/15.
//  Copyright (c) 2015 Sidd Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FAEventDetailsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

// Title indicating the kind of event
@property (weak, nonatomic) IBOutlet UILabel *eventTitle;

// Schedule information for the event
@property (weak, nonatomic) IBOutlet UILabel *eventSchedule;

// Event Related Details Table
@property (weak, nonatomic) IBOutlet UITableView *eventDetailsTable;

// Spinner to show activity related to this view
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *busySpinner;

// Area to show user information messages.
@property (weak, nonatomic) IBOutlet UILabel *messagesArea;

@end
