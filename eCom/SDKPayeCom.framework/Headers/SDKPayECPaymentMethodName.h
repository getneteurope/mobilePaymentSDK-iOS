//
//  SDKPayECPaymentMethodName.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 7/11/16.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Indicates payment method name */
typedef NS_ENUM (NSUInteger, SDKPayECPaymentMethodName) {
    /** Uninitialized or invalid value */
    SDKPayECPaymentMethodNameUndefined = 0,
    
    /** Alipay */
    SDKPayECPaymentMethodAlipay,
    
    /** ApplePay is not used at the moment. Use SDKPayECPaymentMethodNameCreditCard instead */
    SDKPayECPaymentMethodNameApplePay,
    
    /** Credit Card */
    SDKPayECPaymentMethodNameCreditCard,
    
    /** PayPal */
    SDKPayECPaymentMethodNamePayPal,
    
    /** PBBA */
    SDKPayECPaymentMethodNamePBBA,
    
    /** SEPA Direct Debit */
    SDKPayECPaymentMethodNameSEPADirectDebit,
   
    /** Klarna */
    SDKPayECPaymentMethodNameKlarna,
    
    /** Wire Transfer */
    SDKPayECPaymentMethodNameWireTransfer,

    /** P24 */
    SDKPayECPaymentMethodNameP24,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECPaymentMethodNameTotalNumber
};

/**
 @brief Converts payment method string representation to SDKPayECPaymentMethodName enumeration
 
 @param code transaction type string representation
 
 @return SDKPayECPaymentMethodName enumeration
 */
SDKPayECPaymentMethodName SDKPayECPaymentMethodNameFromCode(NSString *code);
/**
 @brief Converts transaction type SDKPayECPaymentMethodName enumeration to string representation
 
 @param paymentMethodName transaction type SDKPayECPaymentMethodName enumeration
 
 @return transaction type string representation
 */
NSString *SDKPayECPaymentMethodNameGetCode(SDKPayECPaymentMethodName paymentMethodName);

/** @} */
