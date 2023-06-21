//
//  SDKPayECTransactionType.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of transaction types */
typedef NS_ENUM(NSUInteger, SDKPayECTransactionType) {
    /** Uninitialized or invalid value */
    SDKPayECTransactionTypeUndefined = 0,
    
    /** Reserves funds from the [Card Holder]'s account.
     
     String representation: authorization
     */
    SDKPayECTransactionTypeAuthorization,
    
    /** Verifies the card's validity without leaving an authorized amount.
     
     String representation: authorization-only
     */
    SDKPayECTransactionTypeAuthorizationOnly,
        
    /** Moves funds from the Account Holder to the Merchant.
     
     String representation: debit
     */
    SDKPayECTransactionTypeDebit,
    
    /** Moves funds from the [Merchant] to the [Account Holder]. For this [Payment Method], typically follows a 'refund-request'.
    */
    SDKPayECTransactionTypeRefundDebit,
    
    /** Represents the request for a debit. If the transaction state is success, then the outcome of the debit is not yet known.
     
     String representation: pending-debit
     */
    SDKPayECTransactionTypePendingDebit,
    
    /** Takes funds from the [Card Holder]'s account. A one-step process to conduct two transaction types: SDKPayECTransactionTypeAuthorization and SDKPayECTransactionTypeCapture.
     
     String representation: purchase
     */
    SDKPayECTransactionTypePurchase,
    
    /** Reserve funds from the [Card Holder]'s account. Identical to a SDKPayECTransactionTypeAuthorization except for the fact that it Refers to a previous SDKPayECTransactionTypeAuthorization transaction.
     
     String representation: referenced-authorization
     */
    SDKPayECTransactionTypeReferencedAuthorization,
    
    /** Takes funds from the [Card Holder]'s account. Identical to a SDKPayECTransactionTypePurchase except for the fact that it refers to a previous SDKPayECTransactionTypePurchase transaction.
     
     String representation: referenced-purchase
     */
    SDKPayECTransactionTypeReferencedPurchase,
        
    /** Simply converts credit card information into a token that can be used in subsequent Payment Transactions, instead of the actual credit card information.
     
     String representation: tokenize
     */
    SDKPayECTransactionTypeTokenize,

    /** A transaction for initiating an iDEAL payment. As long as there is no notification from iDEAL there is only a get-url transaction.
     
     String representation: get-url
     */
    SDKPayECTransactionTypeGetUrl,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECTransactionTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to SDKPayECTransactionType enumeration
 
 @param code transaction type string representation
 
 @return SDKPayECTransactionType enumeration
 */
SDKPayECTransactionType SDKPayECTransactionTypeFromCode(NSString *code);
/**
 @brief Converts transaction type SDKPayECTransactionType enumeration to string representation
 
 @param transactionType transaction type SDKPayECTransactionType enumeration
 
 @return transaction type string representation
 */
NSString *SDKPayECTransactionTypeGetCode(SDKPayECTransactionType transactionType);

/** @} */
