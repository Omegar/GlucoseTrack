//
//  MasterViewController.h
//  GlucoseTrck
//
//  Created by Gareth Kavanagh on 22/12/2014.
//  Copyright (c) 2014 Gareth Kavanagh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

