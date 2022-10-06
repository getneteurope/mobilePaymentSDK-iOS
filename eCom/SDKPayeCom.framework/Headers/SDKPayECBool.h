//
//  SDKPayECBool.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 3/24/17.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of general boolean values */
typedef NS_ENUM(NSUInteger, SDKPayECBool) {
    /** Uninitialized or invalid value */
    SDKPayECBoolUndefined = 0,
    
    /** Positive boolean value */
    SDKPayECBoolYes,
    /** Negative boolean value */
    SDKPayECBoolNo,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECBoolTotalNumber
};

/** @} */
