//
//  FirstViewController.h
//  MycontactList
//
//  Created by Taylor, Todd A. on 5/14/14.
//  Copyright (c) 2014 Taylor, Todd A. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LMAContactsController : UIViewController
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
- (IBAction)changeEditMode:(id)sender;
@property (weak, nonatomic) IBOutlet UISwitch *sgmtEditMode;

@property (weak, nonatomic) IBOutlet UITextField *txtName;
@property (weak, nonatomic) IBOutlet UITextField *txtAddress;
@property (weak, nonatomic) IBOutlet UITextField *txtCity;
@property (weak, nonatomic) IBOutlet UITextField *txtState;
@property (weak, nonatomic) IBOutlet UITextField *txtZip;
@property (weak, nonatomic) IBOutlet UITextField *txtPhone;
@property (weak, nonatomic) IBOutlet UITextField *txtCell;
@property (weak, nonatomic) IBOutlet UITextField *txtEmail;
@property (weak, nonatomic) IBOutlet UILabel *lblBirthdate;
@property (weak, nonatomic) IBOutlet UIButton *btnChange;
@property (weak, nonatomic) IBOutlet UITextField *txtLast;


@end
