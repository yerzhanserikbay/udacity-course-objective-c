//
//  ViewController.h
//  Section6.38(Random Number Generator)
//
//  Created by YS on 3/25/19.
//  Copyright © 2019 YS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *labelOne;
@property (weak, nonatomic) IBOutlet UILabel *labelTwo;

- (IBAction)randomNumber:(id)sender;
- (IBAction)randomNumber10to20:(id)sender;


@end

