//
//  SDKPayECEncoding.h
//  SDKPayeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of posiible encoding types */
typedef NS_ENUM(NSUInteger, SDKPayECEncoding) {
    /** Uninitialized or invalid value */
    SDKPayECEncodingUndefined = 0,
    
    /** A base64 encoding  */
    SDKPayECEncodingBase64,
    
    /** A hex encoding  */
    SDKPayECEncodingHex,
    
    /** A non encoding  */
    SDKPayECEncodingNone,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECEncodingTotalNumber
};

/**
 @brief Converts encoding string representation to SDKPayECEncoding enumeration
 
 @param code encoding string representation
 
 @return SDKPayECEncoding enumeration
 */
SDKPayECEncoding SDKPayECEncodingFromCode(NSString *code);
/**
 @brief Converts encoding SDKPayECEncoding enumeration to string representation
 
 @param encoding encoding SDKPayECEncoding enumeration
 
 @return encoding type  string representation
 */
NSString *SDKPayECEncodingGetCode(SDKPayECEncoding encoding);

/** @} */
