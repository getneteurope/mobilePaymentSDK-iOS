//
//  SDKPayECEntryMode.h
//  SDKPayeCom
//
//  Created by Peter Stavný on 20/12/2021.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>


/** @addtogroup ios_sdk
 *  @{
 */

/** List of entry modes supported by ElasticEngine */
typedef NS_ENUM(NSUInteger, SDKPayECEntryMode) {
    /** Uninitialized or invalid value */
    SDKPayECEntryModeUndefined = 0,
    
    /** Mail Order */
    SDKPayECEntryModeMailOrder,
    /** Telephone Order */
    SDKPayECEntryModeTelephoneOrder,
    /** eCommerce */
    SDKPayECEntryModeECommerce,
    /** mCommerce */
    SDKPayECEntryModeMCommerce,
    /** POS */
    SDKPayECEntryModePOS,
    /** Apple Pay */
    SDKPayECEntryModeApplePay,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECEntryModeTotalNumber
};
NSString *SDKPayECEntryModeGetCode(SDKPayECEntryMode mode);
SDKPayECEntryMode SDKPayECEntryModeFromCode(NSString *code);

/** @} */
