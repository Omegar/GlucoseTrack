//
//  DetailViewController.h
//  GlucoseTrck
//
//  Created by Gareth Kavanagh on 22/12/2014.
//  Copyright (c) 2014 Gareth Kavanagh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

