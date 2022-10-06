//
//  SDKPayECAlipayPayment.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 2/5/17.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
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
