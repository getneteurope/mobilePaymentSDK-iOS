//
//  SDKPayECEnvironment.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/3/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  List of supported environments
 */
typedef NS_ENUM(NSUInteger, SDKPayECEnvironment) {
    /**
     *  Uninitialized or invalid value
     */
    SDKPayECEnvironmentUndefined = 0,

    /**
     *  Production environment
     */
    SDKPayECEnvironmentPROD,
    /**
     *  Singapore production environment
     */
    SDKPayECEnvironmentSingaporePROD,
    /**
     *  Toronto production environment
     */
    SDKPayECEnvironmentTorontoPROD,
    /**
     *  Central and East Europe production environment
     */
    SDKPayECEnvironmentCEEPROD,

    /**
     *  Test/Sandbox environment
     */
    SDKPayECEnvironmentTEST = 100,
    /**
     *  Singapore test/sandbox environment
     */
    SDKPayECEnvironmentSingaporeTEST,
    /**
     *  Toronto test/sandbox environment
     */
    SDKPayECEnvironmentTorontoTEST,
    /**
     *  Central and East Europe test/sandbox environment
     */
    SDKPayECEnvironmentCEETEST,
    
    SDKPayECEnvironmentQA = 200,

    /**
     *  Total number of environments. It is used for validation and handled as invalid value
     */
    SDKPayECEnvironmentTotalNumber
};

/** @} */
