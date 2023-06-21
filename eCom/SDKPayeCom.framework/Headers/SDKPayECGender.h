//
//  SDKPayECGender.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
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

/**
 @brief Converts gender string representation to SDKPayECGender enumeration
 
 @param code gender string representation
 
 @return SDKPayECGender enumeration
 */
SDKPayECGender SDKPayECGenderFromCode(NSString *code);

/**
 @brief Converts gender SDKPayECGender enumeration to string representation
 
 @param gender gender SDKPayECGender enumeration
 
 @return gender type  string representation
 */
NSString *SDKPayECGenderGetCode(SDKPayECGender gender);


/** @} */
