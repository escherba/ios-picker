//
//  FPLocalController.h
//  FPPicker
//
//  Created by Liyan David Chang on 6/20/12.
//  Copyright (c) 2012 Filepicker.io (Cloudtop Inc), All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import "FPPicker.h"
#import "FPInternalHeaders.h"

@interface FPLocalController : UITableViewController

@property (nonatomic, strong) NSArray *photos;
@property (nonatomic, assign) id <FPSourcePickerDelegate> fpdelegate;

@end
