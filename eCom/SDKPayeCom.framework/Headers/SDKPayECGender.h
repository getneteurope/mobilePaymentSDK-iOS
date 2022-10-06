//
//  SDKPayECGender.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Gender */
typedef NS_ENUM(NSUInteger, SDKPayECGender) {
    /** Uninitialized or invalid value */
    SDKPayECGenderUndefined = 0,
    
    /** Male */
    SDKPayECGenderMale,
    /** Female */
    SDKPayECGenderFemale,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECGenderTotalNumber
};

/** @} */
