//
//  SDKPayECIsoTransactionType.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of iso transaction types */
typedef NS_ENUM(NSUInteger, SDKPayECIsoTransactionType) {
    /** Uninitialized or invalid value */
    SDKPayECIsoTransactionTypeUndefined = 0,
    /**
     * Goods/ Service Purchase
     */
    SDKPayECIsoTransactionTypeGoodsServicePurchase,
    /**
     * Check Acceptance
     */
    SDKPayECIsoTransactionTypeCheckAcceptance,
    /**
     * Account Funding
     */
    SDKPayECIsoTransactionTypeAccountFunding,
    /**
     * Quasi-Cash Transaction
     */
    SDKPayECIsoTransactionTypeQuasicashTransaction,
    /**
     * Prepaid Activation and Load
     */
    SDKPayECIsoTransactionTypePrepaidActivationAndLoad,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECIsoTransactionTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to SDKPayECIsoTransactionType enumeration
 
 @param code iso transaction type string representation
 
 @return SDKPayECIsoTransactionType enumeration
 */
SDKPayECIsoTransactionType SDKPayECIsoTransactionTypeFromCode(NSString *code);
/**
 @brief Converts reorder type SDKPayECReorderType enumeration to string representation
 
 @param reorderType SDKPayECReorderType enumeration
 
 @return iso transaction type string representation
 */
NSString *SDKPayECIsoTransactionTypeGetCode(SDKPayECIsoTransactionType reorderType);

/** @} */





