//
//  SDKPayECHeaderView.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 04/06/2018.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SDKPayECNavigationBarStyle) {
    SDKPayECNavigationBarStyleUndefined = 0,
    SDKPayECNavigationBarStyleBig,
    SDKPayECNavigationBarStyleSmall,
};

typedef NS_ENUM(NSInteger, SDKPayECStatusBarStyle) {
    SDKPayECStatusBarStyleDarkContent   = 0, // Dark content, for use on light backgrounds
    SDKPayECStatusBarStyleLightContent, // Light content, for use on dark backgrounds
    SDKPayECStatusBarStyleAuto, // Custom content, for use on dark backgrounds by the backgound color of SDKPayECNavigationBar control
};

/**
 * SDKPayECNavigationBar
 */

@protocol SDKPayECNavigationBarDelegate <NSObject>

@required
-(void)backButtonTappedIn:(nonnull id)navbar;
-(void)rightButtonTappedIn:(nonnull id)navbar;
-(CGSize)contentSize:(nonnull id)navbar;

@optional
-(void)didChange:(nonnull id)navbar size:(CGSize)size;

@end

/*IB_DESIGNABLE*/
@interface SDKPayECNavigationBar : UIView

@property (weak, nonatomic, nullable) id<SDKPayECNavigationBarDelegate> delegate;

@property (assign, nonatomic) SDKPayECNavigationBarStyle barStyle UI_APPEARANCE_SELECTOR;

@property (assign, nonatomic) /*IBInspectable*/ BOOL isResizableWithKeyboard;
@property (assign, nonatomic) /*IBInspectable*/ BOOL resizeAnimated;

- (void)handleDefaultNavbar;

- (void)enableBackButton:(BOOL)enable;
- (void)enableRightButton:(BOOL)enable;
- (void)hideRightButton:(BOOL)hidden;
- (void)hideTitle:(BOOL)hidden;
- (void)hideSubtitle:(BOOL)hidden;

@property (strong, nonatomic, nullable) /*IBInspectable*/ NSString *title;
@property (strong, nonatomic, nullable) /*IBInspectable*/ NSString *subtitle;
@property (strong, nonatomic, nullable) /*IBInspectable*/ NSString *backButtonTitle;
@property (strong, nonatomic, nullable) /*IBInspectable*/ NSString *rightButtonTitle;

@property (nonatomic, strong, nullable) /*IBInspectable*/ UIColor *firstBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong, nullable) /*IBInspectable*/ UIColor *secondBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) /*IBInspectable*/ BOOL secondBackgroundColorIsPrefered UI_APPEARANCE_SELECTOR;

@property (nonatomic, assign) /*IBInspectable*/ SDKPayECStatusBarStyle preferredStatusBarStyle UI_APPEARANCE_SELECTOR;

@end


