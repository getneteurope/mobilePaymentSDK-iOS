//
//  SDKPayECPayPalPayment.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <SDKPayeCom/SDKPayeCom.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Defines PayPal payment method.
 */
@interface SDKPayECPayPalPayment : SDKPayECPayment 

/**
 @brief It describes recurring transactions.
 */
@property (strong, nonatomic, nullable) SDKPayECPeriodic *periodic;

/**
 @brief It is used by risk library. The data collected by the Magnes library is used to complement the data that is obtained from the PayPal hosted pages.
 */
@property (strong, nonatomic, nullable) NSString *riskReferenceId;

/**
 @brief It is used by risk library. For merchants using an Advertising ID (IDFA), this parameter should be populated with the IDFA.
 */
@property (strong, nonatomic, nullable) NSString *advertisingIdentifier;

@end

/** @} */
