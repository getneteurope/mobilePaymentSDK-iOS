//
//  SDKPayCardToken.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/24/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 @brief Tokenized card data.
 @details Everytime a user types card data, it is tokenized and returned to merchant in [SDKPayECPaymentResponse cardToken].
 */
@interface SDKPayECCardToken : NSObject

/**
 @brief Tokenized account number. Last 4 digits are equal to card account number.
 */
@property (strong, nonatomic, nullable) NSString *tokenID;
/**
 @brief Masked account number.
 @details can be used for prompting security code from user in next payment
 */
@property (strong, nonatomic, nullable) NSString *maskedAccountNumber;

@end

/** @} */
