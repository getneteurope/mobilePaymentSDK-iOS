//
//  DeliveryTimeframe.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/

//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of delivery time frames */
typedef NS_ENUM(NSUInteger, SDKPayECDeliveryTimeframe) {    
    /** Uninitialized or invalid value */
    SDKPayECDeliveryTimeframeUndefined = 0,
    /**
     * Electronic Delivery
     */
    SDKPayECDeliveryTimeframeElectronicDelivery,
    /**
     * Same day shipping
     */
    SDKPayECDeliveryTimeframeSameDay,
    /**
     * Overnight shipping
     */
    SDKPayECDeliveryTimeframeOvernight,
    /**
     * Two-day or more shipping
     */
    SDKPayECDeliveryTimeframeTwoOrMoreDays,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECDeliveryTimeframeTotalNumber
};

/**
 @brief Converts transaction type string representation to SDKPayECDeliveryTimeframe enumeration
 
 @param code delivery time frame string representation
 
 @return SDKPayECDeliveryTimeframe enumeration
 */
SDKPayECDeliveryTimeframe SDKPayECDeliveryTimeframeFromCode(NSString *code);
/**
 @brief Converts reorder type SDKPayECDeliveryTimeframe enumeration to string representation
 
 @param deliveryTimeframe SDKPayECDeliveryTimeframe enumeration
 
 @return reorder type string representation
 */
NSString *SDKPayECDeliveryTimeframeGetCode(SDKPayECDeliveryTimeframe deliveryTimeframe);

/** @} */
