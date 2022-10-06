//
//  SDKPayECAvailabilityTime.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 23/04/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of availability times */
typedef NS_ENUM(NSUInteger, SDKPayECAvailabilityTime) {
    /** Uninitialized or invalid value */
    SDKPayECAvailabilityTimeUndefined = 0,
    /**
     * Merchandise available
     */
    SDKPayECAvailabilityTimeMerchantsideAvailability,
    /**
     * Future availability
     */
    SDKPayECAvailabilityTimeFutureAvailability,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECAvailabilityTimeTotalNumber
};

/**
 @brief Converts transaction type string representation to SDKPayECAvailabilityTime enumeration
 
 @param code availability time string representation
 
 @return SDKPayECAvailabilityTime enumeration
 */
SDKPayECAvailabilityTime SDKPayECAvailabilityTimeFromCode(NSString *code);
/**
 @brief Converts availability time SDKPayECAvailabilityTime enumeration to string representation
 
 @param availabilityTime SDKPayECAvailabilityTime enumeration
 
 @return availability time type string representation
 */
NSString *SDKPayECAvailabilityTimeGetCode(SDKPayECAvailabilityTime availabilityTime);
