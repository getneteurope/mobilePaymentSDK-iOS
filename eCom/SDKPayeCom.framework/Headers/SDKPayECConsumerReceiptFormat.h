//
//  SDKPayECConsumerReceiptFormat.h
//  SDKPayeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of consumer receipt formats */
typedef NS_ENUM(NSUInteger, SDKPayECConsumerReceiptFormat) {
    /** Uninitialized or invalid value */
    SDKPayECConsumerReceiptFormatUndefined = 0,
    
    /** A consumer receipt format represents the ascii text  */
    SDKPayECConsumerReceiptFormatAscii,
    
    /** A oconsumer receipt format represents the json  */
    SDKPayECConsumerReceiptFormatJSON,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECConsumerReceiptFormatTotalNumber
};

/**
 @brief Converts consumer receipt format string representation to SDKPayECConsumerReceiptFormat enumeration
 
 @param code consumer receipt format string representation
 
 @return SDKPayECConsumerReceiptFormat enumeration
 */
SDKPayECConsumerReceiptFormat SDKPayECConsumerReceiptFormatFromCode(NSString *code);
/**
 @brief Converts consumer receipt format SDKPayECConsumerReceiptFormat enumeration to string representation
 
 @param format consumer receipt format SDKPayECConsumerReceiptFormat enumeration
 
 @return consumer receipt format  string representation
 */
NSString *SDKPayECConsumerReceiptFormatGetCode(SDKPayECConsumerReceiptFormat format);

/** @} */
