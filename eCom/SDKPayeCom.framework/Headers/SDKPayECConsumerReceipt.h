//
//  SDKPayECConsumerReceipt.h
//  SDKPayeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>
#import <SDKPayeCom/SDKPayECConsumerReceiptFormat.h>
#import <SDKPayeCom/SDKPayECEncoding.h>

/** @addtogroup ios_sdk
*  @{
*/

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Provider data
 */
@interface SDKPayECConsumerReceipt : NSObject

/**
 * @brief Consumer receipt base
 */
@property (strong, nonatomic, nullable) NSString *base;
/**
 * @brief Consumer receipt encoding
 */
@property (assign, nonatomic) SDKPayECEncoding encoding;
/**
 * @brief Consumer receipt format
 */
@property (assign, nonatomic) SDKPayECConsumerReceiptFormat format;


@end

NS_ASSUME_NONNULL_END

/** @} */
