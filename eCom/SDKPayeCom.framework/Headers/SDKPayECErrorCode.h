//
//  SDKPayECErrorCodes.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 5/1/18.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#ifndef SDKPayECErrorCodes_h
#define SDKPayECErrorCodes_h

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

extern NSString *_Nonnull const SDKPayPaymentSDKErrorDomain;

/** Error codes */
typedef NS_ENUM(NSInteger, SDKPayECErrorCode) {
    /** Uninitialized value or no error */
    SDKPayECErrorCodeOK                           = 0,
    /** General Error, always contains english description */
    SDKPayECErrorCodeGeneral                      = -1,
    
    /** Network related issue, SSL pinning issue, ATS, ...) */
    SDKPayECErrorCodeNetworkIssue                 = -2,
    /** Transaction has failed */
    SDKPayECErrorCodeTransactionFailure           = -3,
    
    /** Payment method is not supported */
    SDKPayECErrorCodeUnsupportedPaymentMethod     = -4,
    /** Invalid payment data */
    SDKPayECErrorCodeInvalidPaymentData           = -5,
    /** User has canceled payment */
    SDKPayECErrorCodeUserCanceled                 = -6,
    /** Another payment is in progress */
    SDKPayECErrorCodePaymentInProgress            = -7,
    /** Device is jailbroken */
    SDKPayECErrorCodeJailbrokenDevice             = -8,
    /** Unsupported payment gateway */
    SDKPayECErrorCodeUnsupportedGateway           = -9,
    /** Transaction timeout */
    SDKPayECErrorCodeTransactionTimeout           = -10,
    /** User has retried payment */
    SDKPayECErrorCodeUserRetried                  = -11,
    /** Device is debugged */
    SDKPayECErrorCodeDebuggedDevice               = -12
};

#endif // SDKPayECErrorCodes_h

/** @} */
