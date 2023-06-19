//
//  SDKPayCardPayment.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <SDKPayeCom/SDKPayeCom.h>

#import <SDKPayeComCoreCard/SDKPayECCardToken.h>
#import <SDKPayeComCoreCard/SDKPayECCard.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Defines Card payment method
 */
@interface SDKPayECCardPayment : SDKPayECPayment

/**
 *  @brief Prompt [Card Holder] for version of 3DS.
 *  @details Default value is nil.
 */
@property (strong, nonatomic, nullable) NSString *versionThreeD;

/**
 *  @brief Indicates that the Transaction Request should proceed with the 3D Secure workflow if the [Card Holder] is enrolled. Otherwise, the transaction proceeds without 3D Secure
 *  @details Default value is SDKPayECBoolYes. In case of referenced transactions (SDKPayECTransactionTypeReferencedAuthorization, SDKPayECTransactionTypeReferencedPurchase), it is ignored.
 */
@property (assign, nonatomic) SDKPayECBool attemptThreeD;

/**
 @brief It describes recurring transactions.
 */
@property (strong, nonatomic, nullable) SDKPayECPeriodic *periodic;

/**
 *  @brief Prompt [Card Holder] for security code, in case of referenced transactions.
 *  @details Default value is NO.
 */
@property (assign, nonatomic, getter=isSecurityCodeRequired) BOOL requireSecurityCode;

/**
 * @brief Used to signalize card token usage
 */
@property (assign, nonatomic, getter=istokenIndicatorUsed) BOOL tokenUsageIndicator;

/**
 *  @brief Prompt Card Holder
 *  @details Default value is YES.
 */
@property (assign, nonatomic, getter=isCardholderRequired) BOOL requireCardholder;

/**
 *  @brief Tokenized card data gathered by previous transaction [SDKPayECCardPaymentResponse cardToken].
 *  @details set [SDKPayECCardToken tokenID] if you want to use the same card as in previous transaction. In case of transaction referenced by parentTransactionID and security code is required set [SDKPayECCardToken maskedAccountNumber] to help user with security code typing
 */
@property (strong, nonatomic, nullable) SDKPayECCardToken *token;

/**
 *  @brief Info about particular merchant.
 *  @details It is optional.
 */
@property (strong, nonatomic, nullable) SDKPayECSubMerchantInfo *subMerchantInfo;

/**
 *  @brief Nonsensitive card data.
 *  @details It is returned by SDKPayECCardField and SDKPayECAnimatedCardField. You can modify a payment request based on[SDKPayECard brand].
 */
@property (strong, nonatomic, nullable) SDKPayECCard *card;

@end

/** @} */
