//
//  SDKPayECCardLayout.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 04/06/2018.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SDKPayECCardLayout : UIView

/** @addtogroup ios_sdk
 *  @{
 */
typedef NS_ENUM(NSUInteger, SDKPayECCardStyleLayout) {

    SDKPayECCardStyleLayoutDefault = 0,
    SDKPayECCardStyleLayoutAnimated,
};

/**
 *  @brief Animated card in full screen card payment
 *  @details Setting this property to SDKPayECCardPaymentVCStyleAnimated shows the animated card in full screen card payment, default value is SDKPayECCardPaymentVCStyleDefault
 */
@property (nonatomic) SDKPayECCardStyleLayout layout UI_APPEARANCE_SELECTOR;

/**
 *  @brief Array of supported card brands.
 *  @details If supportedCardBrands is set and does not contain recognized card brand of user card number the state changes to ::SDKPayECCardFieldStateCardUnsupported. Set can contain NSNumbers with ::SDKPayECCardBrand values. Example:
 
 [SDKPayECCardLayout appearance] setSupportedCardBrands = @[@(SDKPayECCardBrandAmex), @(SDKPayECCardBrandMasterCard), @(SDKPayECCardBrandVisa)];
 
 */
@property (strong, nonatomic) NSArray<NSNumber *> *supportedCardBrands UI_APPEARANCE_SELECTOR;

@property (assign, nonatomic) BOOL manualCardBrandSelectionRequired;

@end
