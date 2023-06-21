//
//  ShippingMethod.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of shipping methods */
typedef NS_ENUM(NSUInteger, SDKPayECShippingMethod) {
    /** Uninitialized or invalid value */
    SDKPayECShippingMethodUndefined = 0,
    /**
     * Ship to cardholder’s billing address
     */
    SDKPayECShippingMethodBillingAddress,
    /**
     * Ship to another verified address on file with merchant
     */
    SDKPayECShippingMethodVerifiedAddress,
    /**
     * Ship to address that is different than the cardholder’s billing address
     */
    SDKPayECShippingMethodDiffrentThanBilling,
    /**
     * “Ship to Store” / Pick-up at local store (Store address shall be populated in shipping address fields)
     */
    SDKPayECShippingMethodShippingToStore,
    /**
     * Digital goods (includes online services, electronic gift cards and redemption codes)
     */
    SDKPayECShippingMethodDigitalGoods,
    /**
     * Travel and Event tickets, not shipped
     */
    SDKPayECShippingMethodTravelEvents,
    /**
     * Other (for example, Gaming, digital services not shipped, emedia subscriptions, etc.
     */
    SDKPayECShippingMethodOther,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECShippingMethodTotalNumber
};

/**
 @brief Converts transaction type string representation to SDKPayECShippingMethod enumeration
 
 @param code transaction type string representation
 
 @return SDKPayECShippingMethod enumeration
 */
SDKPayECShippingMethod SDKPayECShippingMethodFromCode(NSString *code);
/**
 @brief Converts transaction type SDKPayECShippingMethod enumeration to string representation
 
 @param transactionType transaction type SDKPayECShippingMethod enumeration
 
 @return transaction type string representation
 */
NSString *SDKPayECShippingMethodGetCode(SDKPayECShippingMethod transactionType);

/** @} */


