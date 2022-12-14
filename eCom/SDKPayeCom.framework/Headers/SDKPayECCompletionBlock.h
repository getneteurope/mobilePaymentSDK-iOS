//
//  SDKPayECCompletionBlock.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 5/1/18.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

/** @addtogroup ios_sdk
 *  @{
 */

@class SDKPayECPaymentResponse;

/** Transaction completion block with response from ElasticEngine or error occoured during transaction
 
 @param response the response from ElasticEngine.
 @param error occoured during transaction.
 */
typedef void (^SDKPayECCompletionBlock)(SDKPayECPaymentResponse *_Nullable response, NSError *_Nullable error);

/** @} */
