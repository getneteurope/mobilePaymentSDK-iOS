//
//  SDKPayECAlipayPayment.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 2/5/17.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <SDKPayeCom/SDKPayeCom.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Defines Alipay payment method.
 */
@interface SDKPayECAlipayPayment : SDKPayECPayment

/**
 @brief It describes recurring transactions.
 */
@property (strong, nonatomic, nullable) SDKPayECPeriodic *periodic;

/**
 *  @brief Info about particular merchant.
 *  @details It is optional.
 */
@property (strong, nonatomic, nullable) SDKPayECSubMerchantInfo *subMerchantInfo;


@end

/** @} */
