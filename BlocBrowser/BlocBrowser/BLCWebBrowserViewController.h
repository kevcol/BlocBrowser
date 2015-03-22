//
//  BLCWebBrowserViewController.h
//  BlocBrowser
//
//  Created by kevcol on 3/21/15.
//  Copyright (c) 2015 kevcol inc. All rights reserved.
//

#import "ViewController.h"

@interface BLCWebBrowserViewController : ViewController

/**
 Replaces the web view with a fresh one, erasing all history.  Also updates the URL field and toolbar buttons appropriately 
 */

- (void) resetWebView;

@end
