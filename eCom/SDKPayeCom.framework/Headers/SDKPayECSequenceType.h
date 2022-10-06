//
//  SDKPayECSequenceType.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Indicates the sequence of the recurring transaction */
typedef NS_ENUM (NSUInteger, SDKPayECSequenceType) {
    /** Uninitialized or invalid value */
    SDKPayECSequenceTypeUndefined = 0,
    
    /** The first transaction in a series of recurring transactions */
    SDKPayECSequenceTypeFirst,
    /** A transaction that is part of a series of recurring transactions */
    SDKPayECSequenceTypeRecurring,
    /** The final transaction in a series of recurring transactions. A payment with this sequence type completes a chain of recurring payments. */
    SDKPayECSequenceTypeFinal,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECSequenceTypeTotalNumber
};

/** @} */
