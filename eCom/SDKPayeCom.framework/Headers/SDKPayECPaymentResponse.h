//
//  SDKPayECPaymentResponse.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <SDKPayeCom/SDKPayECPayment.h>
#import <SDKPayeCom/SDKPayECTransactionState.h>
#import <SDKPayeCom/SDKPayECSubMerchantInfo.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Payment response from Getneteurope gateway
 * @details Contains repsonse data from Getneteurope gateway
 */
@interface SDKPayECPaymentResponse : SDKPayECPayment

/** Indicates transaction state as enumerated in SDKPayECTransactionState. */
@property (assign, nonatomic) SDKPayECTransactionState transactionState;

/** A unique identifier assigned for every Transaction. */
@property (strong, nonatomic, nullable) NSString *transactionIdentifier;

/** All status messaeges composed into one string */
@property (strong, nonatomic, nullable) NSString *statusMessage;

/** A merchant bank account. */
@property (strong, nonatomic, nullable) SDKPayECBankAccount *merchantBankAccount;

/** A unique identifier assigned for every provider transaction. */
@property (strong, nonatomic, nullable) NSString *providerTransactionReferenceId;

/**Info about particular merchant.  */
@property (strong, nonatomic, nullable) SDKPayECSubMerchantInfo *subMerchantInfo;

/** Expiration date. */
@property (strong, nonatomic, nullable) NSDate *expirationDate;


@end

/** @} */
