//
//  SDKPayECPeriodicType.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Indicates how and why a transaction occurs more than once */
typedef NS_ENUM (NSUInteger, SDKPayECPeriodicType) {
    /** Uninitialized or invalid value */
    SDKPayECPeriodicTypeUndefined = 0,
    
    /** Completes a financial transaction */
    SDKPayECPeriodicTypeInstallment,
    /** Occurs repeatedly, such as a subscription */
    SDKPayECPeriodicTypeRecurring,
    /** The Unscheduled Credential on File (ucof) allows the merchant to reference a regularly based transaction (like an unlimited periodic payment or an installment payment) to an already successfully submitted transaction. */
    SDKPayECPeriodicTypeUCOF,
    /** The periodic type ci (Consumer Initiated) allows the merchant to identify that the cardholder himself initiated the transaction and whether this is an initial (first) or subsequent (recurring) one. */
    SDKPayECPeriodicTypeCI,
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECPeriodicTypeTotalNumber
};

/**
 @brief Converts periodic type string representation to SDKPayPeriodicType enumeration
 
 @param code periodic type string representation
 
 @return SDKPayPeriodicType enumeration
 */
SDKPayECPeriodicType SDKPayECPeriodicTypeFromCode(NSString *code);
/**
 @brief Converts periodic type SDKPayPeriodicType enumeration to string representation
 
 @param periodicType SDKPayPeriodicType enumeration
 
 @return periodic type string representation
 */
NSString *SDKPayECPeriodicTypeGetCode(SDKPayECPeriodicType periodicType);

/** @} */

