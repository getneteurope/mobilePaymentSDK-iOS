//
//  SDKPayECAuthenticationMethod.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 22/04/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of authentication methods supported by ElasticEngine
 */
typedef NS_ENUM(NSUInteger, SDKPayECAuthenticationMethod) {
    /** Uninitialized or invalid value */
    SDKPayECAuthenticationMethodUndefined = 0,
    /**
     * No 3DS Requestor authentication occurred (i.e. cardholder “logged in” as guest)
     */
    SDKPayECAuthenticationMethodNo3DSRequestorAutheticationOccured,
    /**
     * Login to the cardholder account at the 3DS Requestor system using 3DS Requestor’s own credentials
     */
    SDKPayECAuthenticationMethodOwnCredentials,
    /**
     *  Login to the cardholder account at the 3DS Requestor system using federated ID,
     */
    SDKPayECAuthenticationMethodFederatedId,
    /**
     * Login to the cardholder account at the 3DS Requestor system using issuer credentials,
     */
    SDKPayECAuthenticationMethodIssuerCredentials,
    /**
     *Login to the cardholder account at the 3DS Requestor system using third-party authentication
     */
    SDKPayECAuthenticationMethodThirdPartyAuthentication,
    /**
     * Login to the cardholder account at the 3DS Requestor system using FIDO Authenticator
     */
    SDKPayECAuthenticationMethodFIDOAuthenticator,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECAuthenticationMethodTotalNumber
};

NSString *SDKPayECAuthenticationMethodGetCode(SDKPayECAuthenticationMethod authenticationMethod);
SDKPayECAuthenticationMethod SDKPayECAuthenticationMethodFromCode(NSString *code);

/** @} */
