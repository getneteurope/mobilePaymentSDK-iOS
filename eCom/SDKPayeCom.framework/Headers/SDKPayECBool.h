//
//  SDKPayECBool.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 3/24/17.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
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
