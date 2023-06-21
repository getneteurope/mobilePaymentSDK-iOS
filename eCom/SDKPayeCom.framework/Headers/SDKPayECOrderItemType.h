//
//  SDKPayECOrderItemType.h
//  SDKPayeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of order item types */
typedef NS_ENUM(NSUInteger, SDKPayECOrderItemType) {
    /** Uninitialized or invalid value */
    SDKPayECOrderItemTypeUndefined = 0,
    
    /** A order item represents the shipment fee  */
    SDKPayECOrderItemTypeShipmentFee,
    
    /** A order item represents the hanling fee  */
    SDKPayECOrderItemTypeHandlingFee,
 
    /** A order item represents the discount  */
    SDKPayECOrderItemTypeDiscount,

    /** A order item represents the physical item */
    SDKPayECOrderItemTypePhysical,
    
    /** A order item represents the sales tax  */
    SDKPayECOrderItemTypeSalesTax,
    
    /** A order item represents the digital item  */
    SDKPayECOrderItemTypeDigital,
    
    /** A order item represents the gift card  */
    SDKPayECOrderItemTypeGiftCard,

    /** A order item represents the store credit  */
    SDKPayECOrderItemTypeStoreCredit,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECOrderItemTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to SDKPayECOrderItemType enumeration
 
 @param code order item type string representation
 
 @return SDKPayECOrderItemType enumeration
 */
SDKPayECOrderItemType SDKPayECOrderItemTypeFromCode(NSString *code);
/**
 @brief Converts transaction type SDKPayECOrderItemType enumeration to string representation
 
 @param orderItemType order item type SDKPayECOrderItemType enumeration
 
 @return order item type  string representation
 */
NSString *SDKPayECOrderItemTypeGetCode(SDKPayECOrderItemType orderItemType);

/** @} */
