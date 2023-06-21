//
//  SDKPayECTransactionState.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of transaction states */
typedef NS_ENUM(NSUInteger, SDKPayECTransactionState) {
    /** Uninitialized or invalid value */
    SDKPayECTransactionStateUndefined = 0,
    
    /** Successful state */
    SDKPayECTransactionStateSuccess,
    /** Failure state */
    SDKPayECTransactionStateFailed,
    /** In-progress state */
    SDKPayECTransactionStateInProgress,
    /** Repeated state */
    SDKPayECTransactionStateRepeated,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECTransactionStateTotalNumber
};

SDKPayECTransactionState SDKPayECTransactionStateFromCode(NSString *code);
NSString *SDKPayECTransactionStateGetCode(SDKPayECTransactionState transactionState);
/** @} */
