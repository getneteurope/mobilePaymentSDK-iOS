//
//  SDKPayECCardPaymentResponse.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 5/3/18.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
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
