//
//  SDKPayECChallengeIndicator.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 22/04/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of challenge indicators supported by ElasticEngine
 */
typedef NS_ENUM(NSUInteger, SDKPayECChallengeIndicator) {
    /** Uninitialized or invalid value */
    SDKPayECChallengeIndicatorUndefined = 0,
    /**
     * No preference (default if   not specified)
     */
    SDKPayECChallengeIndicatorNoPreference,
    /**
     * No challenge requested
     */
    SDKPayECChallengeIndicatorNoChallengeRequested,
    /**
     * Challenge requested: 3DS   Requestor Preference
     */
    SDKPayECChallengeIndicatorChallengeRequested3DSRequestorPreference,
    /**
     * Challenge requested:   Mandate
     */
    SDKPayECChallengeIndicatorChallengeRequestedMandate,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECChallengeIndicatorTotalNumber

};

NSString *SDKPayECChallengeIndicatorGetCode(SDKPayECChallengeIndicator challengeIndicator);
SDKPayECChallengeIndicator SDKPayECChallengeIndicatorFromCode(NSString *code);

/** @} */
