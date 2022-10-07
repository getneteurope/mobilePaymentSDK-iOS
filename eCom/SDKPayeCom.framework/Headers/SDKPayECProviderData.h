//
//  SDKPayECProviderData.h
//  SDKPayeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SDKPayeCom/SDKPayECConsumerReceipt.h>

/** @addtogroup ios_sdk
*  @{
*/

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Provider data
 */
@interface SDKPayECProviderData : NSObject

/**
 * @brief Provider request
 * @details Content should be an object containing any of the keys and sub objects described in provider serialised to JSON.
 */
@property (strong, nonatomic, nullable) NSString *request;

/**
 * @brief Provider response
 */
@property (strong, nonatomic, nullable) NSString *response;

/**
 * @brief Consumer receipt
 * @details SDKPayECConsumerReceipt object holder
 */
@property (strong, nonatomic, nullable) SDKPayECConsumerReceipt *consumerReceipt;

/**
 * @brief Provider identifier
 */
@property (strong, nonatomic, nullable) NSString *providerId;

/**
 * @brief Provider transaction identifier.
 */
@property (strong, nonatomic, nullable) NSString *providerTransactionId;


@end

NS_ASSUME_NONNULL_END

/** @} */
