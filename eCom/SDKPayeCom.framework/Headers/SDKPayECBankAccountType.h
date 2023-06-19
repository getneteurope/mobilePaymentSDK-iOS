//
//  SDKPayECBankAccountType.h
//  SDKPayeComSEPA
//
//  Created by Peter Stavný on 12/11/2021.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of posiible bank's account types */
typedef NS_ENUM(NSUInteger, SDKPayECBankAccountType) {
    /** Uninitialized or invalid value */
    SDKPayECBankAccountTypeUndefined = 0,
    
    /** A base64 encoding  */
    SDKPayECBankAccountTypeChecking,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECBankAccountTypeTotalNumber
};

/**
 @brief Converts encoding string representation to SDKPayECBankAccountType enumeration
 
 @param code encoding string representation
 
 @return SDKPayECBankAccountType enumeration
 */
SDKPayECBankAccountType SDKPayECBankAccountTypeFromCode(NSString *code);
/**
 @brief Converts encoding SDKPayECBankAccountType enumeration to string representation
 
 @param encoding encoding SDKPayECBankAccountType enumeration
 
 @return encoding type  string representation
 */
NSString *SDKPayECBankAccountTypeGetCode(SDKPayECBankAccountType encoding);

/** @} */
