//
//  SDKPayECReorderType.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of reorder types */
typedef NS_ENUM(NSUInteger, SDKPayECReorderType) {
    /** Uninitialized or invalid value */
    SDKPayECReorderTypeUndefined = 0,
    /**
     * First time ordered
     */
    SDKPayECReorderTypeFirstTime,
    /**
     * Reordered
     */
    SDKPayECReorderTypeReordered,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECReorderTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to SDKPayECTransactionType enumeration
 
 @param code reorder type string representation
 
 @return SDKPayECReorderType enumeration
 */
SDKPayECReorderType SDKPayECReorderTypeFromCode(NSString *code);
/**
 @brief Converts reorder type SDKPayECReorderType enumeration to string representation
 
 @param reorderType SDKPayECReorderType enumeration
 
 @return reorder type string representation
 */
NSString *SDKPayECReorderTypeGetCode(SDKPayECReorderType reorderType);

/** @} */

    

