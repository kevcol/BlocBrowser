//
//  BLCAwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by kevcol on 3/25/15.
//  Copyright (c) 2015 kevcol inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCAwesomeFloatingToolbar;

@protocol BLCAwesomeFloatingToolbarDelegate <NSObject>

@optional


- (void) floatingToolbar:(BLCAwesomeFloatingToolbar *)toolbar didTryToPanWithOffset:(CGPoint)offset;
- (void) floatingToolbar:(BLCAwesomeFloatingToolbar *)toolbar didTryToPinchWithScale:(CGFloat)scale;
- (void) floatingToolbar:(BLCAwesomeFloatingToolbar *)toolbar didTapButton:(UIButton *)currentButton;



@end

@interface BLCAwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)currentTitle;

@property (nonatomic, weak) id <BLCAwesomeFloatingToolbarDelegate> delegate;

@end