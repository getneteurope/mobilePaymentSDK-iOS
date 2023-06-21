//
//  SDKPayPeriodic.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

#import "SDKPayECPeriodicType.h"
#import "SDKPayECSequenceType.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Describes how the recurring transaction is related to previous/following transaction(s)
 */
@interface SDKPayECPeriodic : NSObject

/**
 @brief Indicates how and why a Payment occurs more than once
 @details It is intended as differentiation for the merchant's use. Which of the two [periodic type](SDKPayECPeriodicType) is chosen depends on the merchant's business model.
 
 - SDKPayECPeriodicTypeInstallment indicates one in a set that completes a financial transaction.
 - SDKPayECPeriodicTypeRecurring: indicates one in a set that occurs repeatedly, such as a subscription.
 
 Both SDKPayECPeriodicTypeInstallment and SDKPayECPeriodicTypeRecurring transactions will be processed the same way.
 */
@property (assign, nonatomic) SDKPayECPeriodicType periodicType;

/** Indicates the sequence of the recurring transaction */
@property (assign, nonatomic) SDKPayECSequenceType sequenceType;

/**
 * Date after which no further authorizations shall be performed. This field is limited to 8 characters, and the accepted format is YYYYMMDD. This field is required for 01-PA and for 02-NPA, if 3DS Requestor Authentication Indicator = 02 or 03.
 */
@property (strong, nonatomic, nullable) NSDate *periodicExpiryDate;
/**
 * Indicates the minimum number of   days between authorizations. The field is limited to maximum 4 characters. This field is required if 3DS Requestor Authentication Indicator = 02 or 03.
 */
@property (strong, nonatomic, nullable) NSString *recurringFrequency;
/**
 *  Indicates the maximum number of authorizations permitted for installment payments.. The field is limited to maximum 3 characters.
 */
@property (strong, nonatomic, nullable) NSNumber *numberOfInstallments;

@end

/** @} */
