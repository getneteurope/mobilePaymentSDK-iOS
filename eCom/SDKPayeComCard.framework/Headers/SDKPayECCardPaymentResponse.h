//
//  SDKPayECCardPaymentResponse.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 5/3/18.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <SDKPayeCom/SDKPayECPaymentResponse.h>
#import <SDKPayeComCoreCard/SDKPayECCard.h>
#import <SDKPayeComCoreCard/SDKPayECCardToken.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Card payment response from Getneteurope gateway
 * @details Contains repsonse data from Getneteurope gateway
 */

@interface SDKPayECCardPaymentResponse : SDKPayECPaymentResponse

/** Nonsensitive card data */
@property (strong, nonatomic, nullable) SDKPayECCard *card;

/** Tokenized sensitive card data */
@property (strong, nonatomic, nullable) SDKPayECCardToken *cardToken;

@end

/** @} */
