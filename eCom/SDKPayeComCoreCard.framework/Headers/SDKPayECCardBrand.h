//
//  SDKPayECCardBrand.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/19/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of card brands */
typedef NS_ENUM(NSUInteger, SDKPayECCardBrand) {
    /** Uninitialized or invalid value */
    SDKPayECCardBrandUndefined = 0,
    
    SDKPayECCardBrandAmex,
    //SDKPayECCardBrandArCa,
    //SDKPayECCardBrandCB,
    //SDKPayECCardBrandCUP,
    SDKPayECCardBrandDiners,
    //SDKPayECCardBrandDiscover,
    //SDKPayECCardBrandJCB,
    SDKPayECCardBrandMaestro,
    SDKPayECCardBrandMasterCard,
    //SDKPayECCardBrandMir,
    //SDKPayECCardBrandUATP,
    //SDKPayECCardBrandUzCard,
    SDKPayECCardBrandVisa,
    //SDKPayECCardBrandUPI,
    //SDKPayECCardBrandVPay,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECCardBrandTotalNumber
};

/**
 * @brief Converts card brand string representation to SDKPayECCardBrand enumeration
 * @param code card brand string representation
 * @return SDKPayECCardBrand enumeration
 */
SDKPayECCardBrand SDKPayECCardBrandFromCode(NSString *code);

/**
 * @brief Converts card brand SDKPayECCardBrand enumeration to string representation
 * @param cardBrand card brand SDKPayECCardBrand enumeration
 * @return card brand string representation
 */
NSString *SDKPayECCardBrandGetCode(SDKPayECCardBrand cardBrand);

/** List of card brands */
typedef NS_ENUM(NSUInteger, SDKPayECCardBrandSelection) {
    /** Uninitialized or invalid value */
    SDKPayECCardBrandSelectionUndefined = 0,
    SDKPayECCardBrandSelectionDefault,
    SDKPayECCardBrandSelectionCardholder,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECCardBrandSelectionTotalNumber
};

/**
 * @brief Converts card brand selection string representation to SDKPayECCardBrandSelection enumeration
 * @param code card brand selection string representation
 * @return SDKPayECCardBrandSelection enumeration
 */
SDKPayECCardBrandSelection SDKPayECCardBrandSelectionFromCode(NSString *code);

/**
 * @brief Converts card brand SDKPayECCardBrandSelection enumeration to string representation
 * @param cardBrandSelection card brand SDKPayECCardBrandSelection enumeration
 * @return card brand selection string representation
 */
NSString *SDKPayECCardBrandSelectionGetCode(SDKPayECCardBrandSelection cardBrandSelection);

/** @} */
